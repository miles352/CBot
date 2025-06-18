#pragma once

#include <string>
#include <optional>
#include <zlib.h>

#include "packets/ClientboundPacket.hpp"
#include "packets/ServerboundPacket.hpp"
#include "registry/PacketRegistry.hpp"

#include <openssl/ssl.h>

#include "EventBus.hpp"
#include "conversions/VarInt.hpp"

class NetworkHandler
{

    int sockfd;
    
    bool use_encryption;
    unsigned char shared_secret[16]{};
    EVP_CIPHER_CTX* encrypt_ctx{};
    EVP_CIPHER_CTX* decrypt_ctx{};

    bool use_compression;
    int compression_threshold{};

    public:
    ClientState client_state; // TODO: make private
    /** The constructor, which creates the socket connection using the specified server ip and port. */
    NetworkHandler(std::string server_ip, std::string server_port, EventBus& event_bus);

    /* The deconstructor closes the socket connection. */
    ~NetworkHandler();

    /** Write a raw buffer to the socket.
     * @param data A pointer to the buffer of data. 
     * @param size The size in bytes of the buffer.
     */
    void write_raw(const void* data, int size);

    /** Reads raw bytes into a buffer.
     * @param buffer A pointer to memory to write the data to. 
     * @param size The amount of bytes to read.
     * @returns The amount of bytes that was read.
     */
    int read_raw(void* buffer, int size) const;

    /** Reads packets until a valid one is read, and returns the packet. */
    std::unique_ptr<ClientboundPacket> read_packet();

    template <typename T>
    void write_packet(std::unique_ptr<T> packet)
    {

        if constexpr (HasData<T> && requires { packet->data; })
        {
            this->event_bus.emit<T>(packet->data);
        }
        else
        {
            this->event_bus.emit<T>();
        }

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

    void enable_encryption(unsigned char (&shared_secret)[16]);

    void enable_compression(int threshold);

    void set_client_state(ClientState client_state);

    int read_varint(int *bytes_read) const;

private:
    /** Reads a packet, and optionally returns it if it is a known packet type. */
    std::optional<std::unique_ptr<ClientboundPacket>> attempt_read_packet();



    EventBus& event_bus;
};
