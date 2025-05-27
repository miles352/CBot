#include "MicrosoftAuth.hpp"
#include "conversions/VarInt.hpp"
#include "conversions/MCString.hpp"
#include "conversions/UUID.hpp"
#include "conversions/PrefixedArray.hpp"
#include "conversions/Utils.hpp"
#include "NetworkHandler.hpp"

#include <sys/socket.h>
#include <arpa/inet.h>
#include <sys/types.h>
#include <netdb.h>
#include <memory.h>
#include <unistd.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/rand.h>
#include <openssl/sha.h>
#include <iostream>

#include <cstdint>

// const char* SERVER_IP = "localhost";
const char* SERVER_PORT = "25565";
const char* SERVER_IP = "tcpshield.horizonanarchy.net";

// 197db9ea-56e4-4cce-a4d5-3e0da590476a
const char* PLAYER_UUID = "197db9ea56e44ccea4d53e0da590476a";


enum STATE
{
    LOGIN,
    CONFIGURATION,
    PLAY
};


// packet struct will contain size method that calls size for things like VarInt and adds them

int main()
{
    NetworkHandler network_handler(SERVER_IP, SERVER_PORT);

    STATE current_state = STATE::LOGIN;

    std::vector<uint8_t> handshake;
    
    std::vector<uint8_t> protocol_version = VarInt::from_int(770); // 1.21.5
    handshake.insert(handshake.end(), protocol_version.begin(), protocol_version.end());
    std::vector<uint8_t> serverAddress = MCString::from_string(SERVER_IP);
    handshake.insert(handshake.end(), serverAddress.begin(), serverAddress.end());
    uint16_t server_port = htons(std::stoi(SERVER_PORT));
    handshake.emplace_back(server_port >> 8);
    handshake.emplace_back(server_port & 0x00FF);
    std::vector<uint8_t> next_state = VarInt::from_int(2);
    handshake.insert(handshake.end(), next_state.begin(), next_state.end());

    network_handler.write_packet(Packet(0x0, handshake));


    std::vector<uint8_t> name = MCString::from_string("0x658");
    uint8_t uuid_bytes[16];
    UUID::to_big_endian_bytes(PLAYER_UUID, uuid_bytes);

    std::vector<uint8_t> login = name;
    login.insert(login.end(), uuid_bytes, uuid_bytes + 16);

    network_handler.write_packet(Packet(0x0, login));

    while (true) 
    {
        printf("\n");
        Packet read_packet = network_handler.read_packet();

        printf("Received packet id 0x%02x with data size %d.\n", read_packet.id, read_packet.data.size());

        uint8_t* ptr = read_packet.data.data();

        switch (current_state)
        {
            case STATE::LOGIN:
            {
                switch (read_packet.id)
                {
                    case 0x00: // Disconnect (login)
                    {
                        break;
                    }
                    case 0x01: // Encryption Request
                    {
                        std::string server_id = MCString::from_array(ptr);
                        std::vector<uint8_t> public_key = PrefixedArray::from_array<uint8_t>(ptr);
                        std::vector<uint8_t> verify_token = PrefixedArray::from_array<uint8_t>(ptr);
                        bool should_authenticate = *ptr;

                        unsigned char shared_secret[16];
                        if (RAND_bytes(shared_secret, 16) <= 0)
                        {
                            throw std::runtime_error("Failed to generate shared secret!");
                        }

                        std::vector<uint8_t> unhashed;
                        unhashed.insert(unhashed.end(), server_id.begin(), server_id.end());
                        unhashed.insert(unhashed.end(), shared_secret, shared_secret + 16);
                        unhashed.insert(unhashed.end(), public_key.begin(), public_key.end());

                        uint8_t hashed[SHA_DIGEST_LENGTH];
                        SHA1(unhashed.data(), unhashed.size(), hashed);
                        
                        
                        std::string hash_string = Utils::SHA1_to_formatted(hashed);
                        std::string access_token = "eyJraWQiOiIwNDkxODEiLCJhbGciOiJSUzI1NiJ9.eyJ4dWlkIjoiMjUzNTQ0NDYzMDM1NTAxOCIsImFnZyI6IkFkdWx0Iiwic3ViIjoiZTFkYzViYjUtMjlmYi00NGZkLTlkMmMtYTI0MDhiOWY3MWRkIiwiYXV0aCI6IlhCT1giLCJucyI6ImRlZmF1bHQiLCJyb2xlcyI6W10sImlzcyI6ImF1dGhlbnRpY2F0aW9uIiwiZmxhZ3MiOlsibXNhbWlncmF0aW9uX3N0YWdlNCIsInR3b2ZhY3RvcmF1dGgiLCJtdWx0aXBsYXllciIsIm9yZGVyc18yMDIyIl0sInByb2ZpbGVzIjp7Im1jIjoiMTk3ZGI5ZWEtNTZlNC00Y2NlLWE0ZDUtM2UwZGE1OTA0NzZhIn0sInBsYXRmb3JtIjoiVU5LTk9XTiIsInl1aWQiOiI3ZTMxM2ZiYWNjNDNiYjI5ZTJjNzkxZTE4YzE2OTc4NyIsInBmZCI6W3sidHlwZSI6Im1jIiwiaWQiOiIxOTdkYjllYS01NmU0LTRjY2UtYTRkNS0zZTBkYTU5MDQ3NmEiLCJuYW1lIjoiMHg2NTgifV0sIm5iZiI6MTc0ODMyMDE4NSwiZXhwIjoxNzQ4NDA2NTg1LCJpYXQiOjE3NDgzMjAxODV9.S-YRQL2hx26B1R5mnofL4uMzE0SSJWYGLFxMZHi3KuE35IYJvULd3YJHKz97mtOinlBDOpv25KKexlx18vEoJcu6jO1j7F8YeOm29EiGZemMd64aFyL7jGVUYzppjfwfbfRSjnnsjshK43qzID4uvVWLhTfue7irRrh9Zl8Lp3N6p5BpHc2GLw8t4HV9sHN6MRB46dWSNt0dlzTvjNbhiL1ONLvyXJbp-vTkPUHfXbZs6AVcEf5QmK-oOEOHgdb9Tp73-7Tarfm2JDvqB5rI6I9fmF5l4q7Muz1NFghI6qbV2yfTG481_Qkrz1VN_Mg2d-RuH8QNGRhmgzuTrkLI2A";

                        std::string oAuthCreateAddr = "sessionserver.mojang.com/session/minecraft/join";
                        std::string oAuthCreateBody = "{"
                                                            "\"accessToken\": \"" + access_token + "\","
                                                            "\"selectedProfile\": \"" + PLAYER_UUID + "\","
                                                            "\"serverId\": \"" + hash_string + "\""
                                                    "}";

                        std::string response = MicrosoftAuth::httpsPost(oAuthCreateAddr, oAuthCreateBody, "application/json");
                        if (response.find("204 No Content") == std::string::npos)
                        {
                            throw std::runtime_error("Failed to join session!");
                        }

                        const uint8_t* ptr = public_key.data();
                        RSA* rsa = d2i_RSA_PUBKEY(NULL, &ptr, public_key.size());
                        uint8_t encrypted_secret[128];
                        uint8_t encrypted_token[128];
                        RSA_public_encrypt(16, shared_secret, encrypted_secret, rsa, RSA_PKCS1_PADDING);
                        RSA_public_encrypt(verify_token.size(), verify_token.data(), encrypted_token, rsa, RSA_PKCS1_PADDING);

                        std::vector<uint8_t> prefixed_shared_secret = PrefixedArray::array_to_prefixed_bytes<uint8_t>(encrypted_secret, sizeof(encrypted_secret));
                        std::vector<uint8_t> prefixed_verify_token = PrefixedArray::array_to_prefixed_bytes<uint8_t>(encrypted_token, sizeof(encrypted_token));

                        std::vector<uint8_t> encryption_response = prefixed_shared_secret;
                        encryption_response.insert(encryption_response.end(), prefixed_verify_token.begin(), prefixed_verify_token.end());

                        network_handler.write_packet(Packet(0x01, encryption_response));

                        network_handler.enable_encryption(shared_secret);

                        printf("Enabled encryption\n");

                        break;
                    }
                    case 0x02: // Login Success
                    {
                        std::vector<uint8_t> data;
                        Packet loginAcknowledged(0x03, data);

                        network_handler.write_packet(loginAcknowledged);

                        current_state = STATE::CONFIGURATION;

                        break;
                    }
                    case 0x03: // Set Compression
                    {
                        int threshold = VarInt::from_array(ptr, nullptr);
                        network_handler.enable_compression(threshold);
                        printf("Enabled compression\n");
                        break;
                    }
                }
                break;
            }
            case STATE::CONFIGURATION:
            {
                switch (read_packet.id)
                {
                    case 0x0E: // Clientbound Known Packs
                    {
                        std::vector<uint8_t> name_space = MCString::from_string("minecraft");
                        std::vector<uint8_t> ID = MCString::from_string("core");
                        std::vector<uint8_t> version = MCString::from_string("1.21.5");

                        std::vector<uint8_t> core_pack = name_space;
                        core_pack.insert(core_pack.end(), ID.begin(), ID.end());
                        core_pack.insert(core_pack.end(), version.begin(), version.end());

                        std::vector<uint8_t> prefix = VarInt::from_int(1);
                        std::vector<uint8_t> bytes = prefix;
                        bytes.insert(bytes.end(), core_pack.begin(), core_pack.end()); // TODO: Make better prefixed array method

                        Packet serverboundKnownPacks(0x07, bytes);

                        network_handler.write_packet(serverboundKnownPacks);
                        break;
                    }
                    case 0x03: // Finish Configuration
                    {
                        std::vector<uint8_t> data;
                        Packet configurationAcknowledge(0x03, data);

                        network_handler.write_packet(configurationAcknowledge);

                        current_state = STATE::PLAY;
                    }
                }
                break;
            }
            case STATE::PLAY:
            {
                break;
            }
        }
    }
}