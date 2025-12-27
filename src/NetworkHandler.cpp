#include "NetworkHandler.hpp"

#include <csignal>
#include <iostream>

#include "conversions/VarInt.hpp"
#include "Bot.hpp"

#include <sys/socket.h>
#include <netinet/tcp.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netdb.h>
#include <zlib.h>

#include <stdexcept>

NetworkHandler::NetworkHandler(EventBus& event_bus) : sockfd(-1), event_bus(event_bus), connection_closed(false)
{
    this->use_encryption = false;
    this->use_compression = false;

    this->client_state = ClientState::HANDSHAKING;

    signal(SIGPIPE, SIG_IGN);
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

void NetworkHandler::join_server(const std::string& server_ip, const std::string& server_port)
{
    addrinfo hints{};
    addrinfo *serv_info;
    hints.ai_family = AF_INET; // minecraft servers use ipv4
    hints.ai_socktype = SOCK_STREAM; // tcp
    hints.ai_flags = 0;
    if (getaddrinfo(server_ip.c_str(), server_port.c_str(), &hints, &serv_info) != 0)
    {
        throw std::runtime_error("Error getting address info!");
    }

    this->sockfd = socket(serv_info->ai_family, serv_info->ai_socktype, 0);

    int enable_nodelay = 1;
    if (setsockopt(this->sockfd, IPPROTO_TCP, TCP_NODELAY, &enable_nodelay, sizeof(enable_nodelay)) < 0) {
        std::cout << "Failed to disable buffering on socket" << std::endl;
    }

    if (this->sockfd == -1)
    {
        throw std::runtime_error("Error creating socket!");
    }

    if (connect(this->sockfd, serv_info->ai_addr, serv_info->ai_addrlen) == -1)
    {
        throw std::runtime_error("Error connecting to socket!");
    }

    freeaddrinfo(serv_info);
}

void NetworkHandler::write_raw(const void* data, int size)
{
    if (connection_closed) return;
    // TODO: Emit raw packet event
    std::unique_ptr<unsigned char[]> encrypted_data = nullptr;
    if (this->use_encryption)
    {
        encrypted_data = std::make_unique<unsigned char[]>(size);
        int out_len;
        EVP_EncryptUpdate(this->encrypt_ctx, encrypted_data.get(), &out_len, static_cast<const unsigned char*>(data), size);
        if (out_len != size)
        {
            throw std::runtime_error("Failed to encrypt packet!");
        }
    }
    if (encrypted_data) data = encrypted_data.get();
    long return_val = send(this->sockfd, data, size, 0);
    if (return_val == -1)
    {
        perror("Writing error");
        connection_closed = true;
    }
    else if (return_val != size)
    {
        throw std::runtime_error("Did not send enough bytes through socket");
    }
}

int NetworkHandler::read_raw(void* buffer, int size) const
{
    int bytes_read = read(this->sockfd, buffer, size);

    if (bytes_read > 0 && this->use_encryption) // if succeeded and we need to decrypt
    {
        int out_len;
        EVP_DecryptUpdate(this->decrypt_ctx, static_cast<uint8_t*>(buffer), &out_len, static_cast<uint8_t*>(buffer), bytes_read);
        if (out_len != bytes_read)
        {
            throw std::runtime_error("Failed to decrypt packet!");
        }
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
        int bytes_read = this->read_raw(data_array.data() + total_read_bytes, remaining_bytes - total_read_bytes);
        if (bytes_read <= 0)
        {
            if (bytes_read == -1) perror("Reading error");
            this->connection_closed = true;
            return RawPacket{-1, {}};
        }
        total_read_bytes += bytes_read;

    }
    while (total_read_bytes < remaining_bytes);

    if (is_data_compressed)
    {
        std::unique_ptr<uint8_t[]> uncompressed(new uint8_t[data_length]);
        uLongf uncompressed_len = data_length;
        uncompress(uncompressed.get(), &uncompressed_len, data_array.data(), remaining_bytes);
        if (uncompressed_len != data_length)
        {
            throw std::runtime_error("Failed to uncompress packet.");
        }
        const uint8_t* uncompressed_ptr = uncompressed.get();
        int packet_id_bytes;
        const uint8_t* start = uncompressed_ptr;
        packet_id = VarInt::from_bytes(uncompressed_ptr);

        std::vector<uint8_t> final_data(data_length - (uncompressed_ptr - start)); // length = total length - amount of bytes in packet_id
        memcpy(final_data.data(), uncompressed_ptr, final_data.size());
        data_array = std::move(final_data);
    }

    // printf("Cannot find packet matching id: 0x%02x\n", packet_id);

    return RawPacket(packet_id, data_array);
}

void NetworkHandler::enable_encryption(unsigned char (&shared_secret)[16])
{
    this->encrypt_ctx = EVP_CIPHER_CTX_new();
    this->decrypt_ctx = EVP_CIPHER_CTX_new();

    EVP_EncryptInit(this->encrypt_ctx, EVP_aes_128_cfb8(), shared_secret, shared_secret);
    EVP_DecryptInit(this->decrypt_ctx, EVP_aes_128_cfb8(), shared_secret, shared_secret);

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
