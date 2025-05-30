#pragma once

#include <string>
#include <cstdint>
#include <optional>

#include "packets/Packet.hpp"
#include "packets/ClientboundPacket.hpp"
#include "packets/ServerboundPacket.hpp"
#include "registry/PacketRegistry.hpp"

#include <openssl/ssl.h>

class NetworkHandler
{

    int sockfd;
    
    bool use_encryption;
    unsigned char shared_secret[16];
    EVP_CIPHER_CTX* encrypt_ctx;
    EVP_CIPHER_CTX* decrypt_ctx;

    bool use_compression;
    int compression_threshold;

    

    public:
    ClientState client_state; // TODO: make private
    /** The constructor, which creates the socket connection using the specified server ip and port. */
    NetworkHandler(std::string server_ip, std::string server_port);

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
    int read_raw(void* buffer, int size);

    /** Reads packets until a valid one is read, and returns the packet. */
    std::unique_ptr<ClientboundPacket> read_packet();

    void write_packet(std::unique_ptr<ServerboundPacket> packet);

    void enable_encryption(unsigned char (&shared_secret)[16]);

    void enable_compression(int threshold);

    void set_client_state(ClientState client_state);

    private: 
    /** Reads a packet, and optionally returns it if it is a known packet type. */
    std::optional<std::unique_ptr<ClientboundPacket>> attempt_read_packet();
};
