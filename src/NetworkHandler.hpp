#pragma once

#include <string>
#include <optional>
#include <zlib.h>

#include "packets/ServerboundPacket.hpp"
#include "registry/PacketRegistry.hpp"

#include <openssl/ssl.h>

#include "EventBus.hpp"
#include "conversions/VarInt.hpp"

struct RawPacket
{
    int id;
    std::vector<uint8_t> data;
};

class NetworkHandler
{
    int sockfd;

    EventBus& event_bus;
    
    bool use_encryption;
    EVP_CIPHER_CTX* encrypt_ctx{};
    EVP_CIPHER_CTX* decrypt_ctx{};

    bool use_compression;
    int compression_threshold{};

    public:
    bool connection_closed;
    ClientState client_state; // TODO: make private
    /** The constructor, which creates the socket connection using the specified server ip and port. */
    explicit NetworkHandler(EventBus& event_bus);

    /** The deconstructor closes the socket connection. */
    ~NetworkHandler();

    void join_server(const std::string& server_ip, const std::string& server_port);

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

    /** Blocks the thread until a packet is read. */
    RawPacket read_packet();

    template <typename C2SPacket>
    requires std::is_base_of_v<ServerboundPacket, C2SPacket>
    void write_packet(C2SPacket packet)
    {
        this->event_bus.once<C2SPacket>([this, &packet](Bot& bot, Event<C2SPacket>& event) {
            std::vector<uint8_t> packet_id = VarInt::to_bytes(packet.get_id());
            packet.data = event.data;
            std::vector<uint8_t> packet_data = packet.encode();

            std::vector<uint8_t> bytes;

            bool using_compression = false;

            if (this->use_compression)
            {
                if (packet_id.size() + packet_data.size() >= this->compression_threshold)
                {
                    using_compression = true;
                    std::vector<uint8_t> uncompressed_data = packet_id;
                    uncompressed_data.insert(uncompressed_data.end(), packet_data.begin(), packet_data.end());

                    std::vector<uint8_t> data_length = VarInt::to_bytes(uncompressed_data.size());
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
                    std::vector<uint8_t> data_length = VarInt::to_bytes(0);
                    bytes.insert(bytes.end(), data_length.begin(), data_length.end());
                }
            }

            if (!using_compression)
            {
                bytes.insert(bytes.end(), packet_id.begin(), packet_id.end());
                bytes.insert(bytes.end(), packet_data.begin(), packet_data.end());
            }

            std::vector<uint8_t> full_packet = VarInt::to_bytes(bytes.size());
            full_packet.insert(full_packet.end(), bytes.begin(), bytes.end());

            this->write_raw(full_packet.data(), full_packet.size());
        });

        if constexpr (HasData<C2SPacket> && requires { packet.data; })
        {
            this->event_bus.emit<C2SPacket>(packet.data);
        }
        else
        {
            this->event_bus.emit<C2SPacket>();
        }
    }

    void enable_encryption(unsigned char (&shared_secret)[16]);

    void enable_compression(int threshold);

    void set_client_state(ClientState client_state);

    int read_varint(int *bytes_read) const;
};
