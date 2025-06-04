#include "NetworkHandler.hpp"
#include "conversions/VarInt.hpp"

#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netdb.h>
#include <memory.h>
#include <zlib.h>

#include <stdexcept>

NetworkHandler::NetworkHandler(std::string server_ip, std::string server_port)
{
    this->use_encryption = false;
    this->use_compression = false;
    
    this->client_state = ClientState::HANDSHAKING;

    addrinfo hints;
    addrinfo* servInfo;
    int status;
    memset(&hints, 0, sizeof(hints)); // make sure hints is zeroed
    hints.ai_family = AF_UNSPEC; // ipv4 or v6
    hints.ai_socktype = SOCK_STREAM; // tcp
    hints.ai_flags = AI_PASSIVE;
    if ((status = getaddrinfo(server_ip.c_str(), server_port.c_str(), &hints, &servInfo)) != 0) 
    {
        throw std::runtime_error("Error getting address info!");
    }

    this->sockfd = socket(servInfo->ai_family, servInfo->ai_socktype, 0);

    if (this->sockfd == -1)
    {
        throw std::runtime_error("Error creating socket!");
    }

    status = connect(this->sockfd, servInfo->ai_addr, servInfo->ai_addrlen);
    if (status == -1)
    {
        throw std::runtime_error("Error connecting to socket!");
    }

    freeaddrinfo(servInfo);
}

NetworkHandler::~NetworkHandler()
{
    close(this->sockfd);

    if (this->use_encryption)
    {
        EVP_CIPHER_CTX_free(this->encrypt_ctx);
        EVP_CIPHER_CTX_free(this->decrypt_ctx);
    }
}

void NetworkHandler::write_raw(const void* data, int size)
{
    if (this->use_encryption)
    {
        std::vector<unsigned char> out(size);
        int out_len;
        EVP_EncryptUpdate(this->encrypt_ctx, out.data(), &out_len, reinterpret_cast<const unsigned char*>(data), size);
        if (out_len != size)
        {
            throw std::runtime_error("Failed to encrypt packet!");
        }
        write(this->sockfd, out.data(), out_len);
    }
    else
    {
        write(this->sockfd, data, size);
    }
}

int NetworkHandler::read_raw(void* buffer, int size)
{
    int bytes_read = read(this->sockfd, buffer, size);
    if (this->use_encryption)
    {
        int out_len;
        std::vector<unsigned char> decrypted(bytes_read);
        EVP_DecryptUpdate(this->decrypt_ctx, decrypted.data(), &out_len, reinterpret_cast<unsigned char*>(buffer), bytes_read);
        if (out_len != bytes_read)
        {
            throw std::runtime_error("Failed to decrypt packet!");
        }
        memcpy(buffer, decrypted.data(), bytes_read);
    } 
    return bytes_read;
}

std::unique_ptr<ClientboundPacket> NetworkHandler::read_packet()
{
    while (true)
    {
        std::optional<std::unique_ptr<ClientboundPacket>> packet = this->attempt_read_packet();
        if (packet.has_value())
        {
            return std::move(packet.value());
        }
    }
}

std::optional<std::unique_ptr<ClientboundPacket>> NetworkHandler::attempt_read_packet()
{
    int packet_size = VarInt::from_stream(*this, nullptr);

    int remaining_bytes;
    int packet_id;
    int data_length;

    bool is_data_compressed = false; // True if compression is enabled and the packet size is greater than the threshold
    if (this->use_compression)
    {
        int data_length_bytes;
        // Data length is the length of the uncompressed data, or 0 if the data is not compressed
        data_length = VarInt::from_stream(*this, &data_length_bytes);

        if (data_length > 0) // if compression is enabled and this packet is larger than the threshold
        {
            is_data_compressed = true;
            remaining_bytes = packet_size - data_length_bytes;
        }
        else // if compression is enabled and this packet is less than the threshold, it is not compressed
        {
            int packet_id_bytes;
            packet_id = VarInt::from_stream(*this, &packet_id_bytes);
            remaining_bytes = packet_size - data_length_bytes - packet_id_bytes;
        }
    } 
    else // compression not enabled
    {
        int packet_id_bytes;
        packet_id = VarInt::from_stream(*this, &packet_id_bytes);
        remaining_bytes = packet_size - packet_id_bytes;
    }

    std::vector<uint8_t> data_array(remaining_bytes);
    int total_read_bytes = 0;

    do
    { // the full packet might not be read at once, so we loop until we read it all
        total_read_bytes += this->read_raw(data_array.data() + total_read_bytes, remaining_bytes - total_read_bytes);
    } 
    while (total_read_bytes < remaining_bytes);

    std::vector<uint8_t> data = data_array;

    if (is_data_compressed)
    {
        std::vector<uint8_t> uncompressed(data_length);
        uLongf uncompressed_len = data_length;
        uncompress(uncompressed.data(), &uncompressed_len, data_array.data(), remaining_bytes);
        if (uncompressed_len != data_length)
        {
            throw std::runtime_error("Failed to uncompress packet.");
        }
        uint8_t* uncompressed_ptr = uncompressed.data();
        int packet_id_bytes;
        packet_id = VarInt::from_array(uncompressed_ptr, &packet_id_bytes);
        data = std::vector<uint8_t>(uncompressed_ptr, uncompressed_ptr + data_length - packet_id_bytes);
    }

    PacketRegistryKey key = std::make_pair(this->client_state, packet_id);

    

    if (!clientbound_packet_registry.contains(key))
    {
        // printf("Cannot find packet matching id: 0x%02x\n", packet_id);
        return std::nullopt;
    }

    std::function<std::unique_ptr<ClientboundPacket>(std::vector<uint8_t>)> packet_ptr = clientbound_packet_registry[key];

    return packet_ptr(data);
}

void NetworkHandler::write_packet(std::unique_ptr<ServerboundPacket> packet)
{
    std::vector<uint8_t> packet_id = VarInt::from_int(packet->get_id());
    std::vector<uint8_t> packet_data = packet->encode();

    std::vector<uint8_t> bytes;

    bool using_compression = false;

    if (this->use_compression)
    {
        if (packet_id.size() + packet_data.size() >= this->compression_threshold)
        {
            using_compression = true;
            std::vector<uint8_t> uncompressed_data = packet_id;
            uncompressed_data.insert(uncompressed_data.end(), packet_data.begin(), packet_data.end());

            std::vector<uint8_t> data_length = VarInt::from_int(uncompressed_data.size());
            bytes.insert(bytes.end(), data_length.begin(), data_length.end());

            uLong max_len = compressBound(uncompressed_data.size());
            std::vector<uint8_t> compressed_data(max_len);
            uLongf actual_len = max_len;
            compress(compressed_data.data(), &actual_len, uncompressed_data.data(), uncompressed_data.size());  
            compressed_data.resize(actual_len);
            bytes.insert(bytes.end(), compressed_data.begin(), compressed_data.end());
        }
        else
        {
            std::vector<uint8_t> data_length = VarInt::from_int(0);
            bytes.insert(bytes.end(), data_length.begin(), data_length.end());
        }
    }

    if (!using_compression)
    {
        bytes.insert(bytes.end(), packet_id.begin(), packet_id.end());
        bytes.insert(bytes.end(), packet_data.begin(), packet_data.end());
    }

    std::vector<uint8_t> full_packet = VarInt::from_int(bytes.size());
    full_packet.insert(full_packet.end(), bytes.begin(), bytes.end());

    this->write_raw(full_packet.data(), full_packet.size());
}

void NetworkHandler::enable_encryption(unsigned char (&shared_secret)[16])
{
    memcpy(this->shared_secret, shared_secret, 16);

    this->encrypt_ctx = EVP_CIPHER_CTX_new();
    this->decrypt_ctx = EVP_CIPHER_CTX_new();

    EVP_EncryptInit(this->encrypt_ctx, EVP_aes_128_cfb8(), this->shared_secret, this->shared_secret);
    EVP_DecryptInit(this->decrypt_ctx, EVP_aes_128_cfb8(), this->shared_secret, this->shared_secret);

    this->use_encryption = true;
}

void NetworkHandler::enable_compression(int threshold)
{
    this->compression_threshold = threshold;
    this->use_compression = true;
}

void NetworkHandler::set_client_state(ClientState client_state)
{
    this->client_state = client_state;
}