#include "NetworkHandler.hpp"
#include "conversions/VarInt.hpp"

#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netdb.h>
#include <zlib.h>

#include <stdexcept>

NetworkHandler::NetworkHandler(std::string server_ip, std::string server_port, EventBus& event_bus): event_bus(event_bus)
{
    this->use_encryption = false;
    this->use_compression = false;

    this->client_state = ClientState::HANDSHAKING;

    addrinfo hints;
    addrinfo *servInfo;
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
    if (connection_closed) return;
    // TODO: Emit raw packet event
    if (this->use_encryption)
    {
        std::vector<unsigned char> out(size);
        int out_len;
        EVP_EncryptUpdate(this->encrypt_ctx, out.data(), &out_len, static_cast<const unsigned char*>(data), size);
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

int NetworkHandler::read_raw(void* buffer, int size) const
{
    int bytes_read = read(this->sockfd, buffer, size);

    if (this->use_encryption)
    {
        int out_len;
        std::vector<unsigned char> decrypted(bytes_read);
        EVP_DecryptUpdate(this->decrypt_ctx, decrypted.data(), &out_len, static_cast<unsigned char*>(buffer), bytes_read);
        if (out_len != bytes_read)
        {
            throw std::runtime_error("Failed to decrypt packet!");
        }
        memcpy(buffer, decrypted.data(), bytes_read);
    }
    return bytes_read;
}

RawPacket NetworkHandler::read_packet()
{
    int packet_size = this->read_varint(nullptr);

    if (packet_size == 0)
    {
        this->connection_closed = true;
        return RawPacket(-1, {});
    }

    int remaining_bytes;
    int packet_id;
    int data_length;

    bool is_data_compressed = false; // True if compression is enabled and the packet size is greater than the threshold
    if (this->use_compression)
    {
        int data_length_bytes;
        // Data length is the length of the uncompressed data, or 0 if the data is not compressed
        data_length = this->read_varint(&data_length_bytes);

        if (data_length > 0) // if compression is enabled and this packet is larger than the threshold
        {
            is_data_compressed = true;
            remaining_bytes = packet_size - data_length_bytes;
        }
        else // if compression is enabled and this packet is less than the threshold, it is not compressed
        {
            int packet_id_bytes;
            packet_id = this->read_varint(&packet_id_bytes);
            remaining_bytes = packet_size - data_length_bytes - packet_id_bytes;
        }
    }
    else // compression not enabled
    {
        int packet_id_bytes;
        packet_id = this->read_varint(&packet_id_bytes);
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
        packet_id = VarInt::from_bytes(uncompressed_ptr, &packet_id_bytes);
        data = std::vector<uint8_t>(uncompressed_ptr, uncompressed_ptr + data_length - packet_id_bytes);
    }

    // printf("Cannot find packet matching id: 0x%02x\n", packet_id);

    return RawPacket(packet_id, data);
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

int NetworkHandler::read_varint(int* bytes_read) const
{
    int num = 0;
    uint8_t byte = 0;
    int pos = 0;
    int amount_read = 0;
    while (true)
    {
        this->read_raw(&byte, 1);
        amount_read++;
        num |= (byte & SEGMENT_BITMASK) << pos; // only add the segment
        if ((byte & CONTINUE_BIT) == 0) break;

        pos += 7;

        if (pos >= 32) throw std::runtime_error("VarInt is too big!");
    }
    if (bytes_read != nullptr) *bytes_read = amount_read;
    return num;
}
