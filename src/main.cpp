#include "MicrosoftAuth.hpp"
#include "conversions/VarInt.hpp"
#include "conversions/MCString.hpp"
#include "conversions/UUID.hpp"
#include "conversions/PrefixedArray.hpp"
#include "conversions/Utils.hpp"
#include "NetworkHandler.hpp"
#include "config.hpp"

#include "packets/handshaking/HandshakeC2SPacket.hpp"
#include "packets/login/LoginStartC2SPacket.hpp"
#include "packets/login/EncryptionRequestS2CPacket.hpp"
#include "packets/login/EncryptionResponseC2SPacket.hpp"
#include "packets/login/SetCompressionS2CPacket.hpp"
#include "packets/login/LoginSuccessS2CPacket.hpp"
#include "packets/login/LoginAcknowledgedC2SPacket.hpp"
#include "packets/configuration/KnownPacksS2CPacket.hpp"
#include "packets/configuration/KnownPacksC2SPacket.hpp"
#include "packets/configuration/FinishConfigurationS2CPacket.hpp"
#include "packets/configuration/AcknowledgeFinishConfigurationC2SPacket.hpp"   

#include "registry/PacketRegistry.hpp"

#include "EventBus.hpp"


#include <sys/socket.h>
#include <sys/types.h>
#include <netdb.h>
#include <unistd.h>
#include <openssl/ssl.h>
#include <openssl/err.h>
#include <openssl/rand.h>
#include <openssl/sha.h>

// const char* SERVER_IP = "connect.2b2t.org";
const char* SERVER_PORT = "25565";
const char* SERVER_IP = "tcpshield.horizonanarchy.net";

// 197db9ea-56e4-4cce-a4d5-3e0da590476a
const char* PLAYER_UUID = "197db9ea56e44ccea4d53e0da590476a";

// TODO:

// packets also in event bus,
// implement priority system, default events get priority level 0
// allow the data to be modified
// emit packet event before writing so it gets modified

// give each packet unique event name
// move all this code into Bot default event handler
// create 50 ms tick delay event handler

// incoming packet events are emitted inside of decode method / constructor

// outgoing packet events are emitted inside of the default event handlers

int main()
{
    NetworkHandler network_handler(SERVER_IP, SERVER_PORT);

    register_all_packets();

    //                                   1.21.5
    network_handler.write_packet(std::make_unique<HandshakeC2SPacket>(770, SERVER_IP, SERVER_PORT, HandshakeC2SPacket::HandshakeIntent::LOGIN));


    network_handler.set_client_state(ClientState::LOGIN);

    network_handler.write_packet(std::make_unique<LoginStartC2SPacket>("0x658", PLAYER_UUID));

    while (true) 
    {
        printf("\n");
        std::unique_ptr<ClientboundPacket> read_packet = network_handler.read_packet();

        

        printf("Received packet id 0x%02x with data size %d.\n", read_packet->get_id(), read_packet->size);

        switch (network_handler.client_state)
        {
            case ClientState::LOGIN:
            {
                switch (read_packet->get_id())
                {
                    case 0x00: // Disconnect (login)
                    {
                        // std::string disconnect_message(read_packet->data.begin(), read_packet->data.end());
                        // printf("Disconnected during login: %s\n", disconnect_message.c_str());
                        // return 0;
                        break;
                    }
                    case 0x01: // Encryption Request
                    {
                        std::unique_ptr<EncryptionRequestS2CPacket> encrypt_request(dynamic_cast<EncryptionRequestS2CPacket*>(read_packet.release()));
                        unsigned char shared_secret[16];
                        if (RAND_bytes(shared_secret, 16) <= 0)
                        {
                            throw std::runtime_error("Failed to generate shared secret!");
                        }

                        std::vector<uint8_t> unhashed;
                        unhashed.insert(unhashed.end(), encrypt_request->server_id.begin(), encrypt_request->server_id.end());
                        unhashed.insert(unhashed.end(), shared_secret, shared_secret + 16);
                        unhashed.insert(unhashed.end(), encrypt_request->public_key.begin(), encrypt_request->public_key.end());

                        uint8_t hashed[SHA_DIGEST_LENGTH];
                        SHA1(unhashed.data(), unhashed.size(), hashed);
                        
                        
                        std::string hash_string = Utils::SHA1_to_formatted(hashed);

                        std::string oAuthCreateAddr = "sessionserver.mojang.com/session/minecraft/join";
                        std::string oAuthCreateBody = "{"
                                                            "\"accessToken\": \"" + ACCESS_TOKEN + "\","
                                                            "\"selectedProfile\": \"" + PLAYER_UUID + "\","
                                                            "\"serverId\": \"" + hash_string + "\""
                                                    "}";

                        std::string response = MicrosoftAuth::httpsPost(oAuthCreateAddr, oAuthCreateBody, "application/json");
                        if (response.find("204 No Content") == std::string::npos)
                        {
                            throw std::runtime_error("Failed to join session!");
                        }

                        const uint8_t* ptr = encrypt_request->public_key.data();
                        RSA* rsa = d2i_RSA_PUBKEY(NULL, &ptr, encrypt_request->public_key.size());
                        std::vector<uint8_t> encrypted_secret(128);
                        std::vector<uint8_t> encrypted_token(128);
                        RSA_public_encrypt(16, shared_secret, encrypted_secret.data(), rsa, RSA_PKCS1_PADDING);
                        RSA_public_encrypt(encrypt_request->verify_token.size(), encrypt_request->verify_token.data(), encrypted_token.data(), rsa, RSA_PKCS1_PADDING);

                        network_handler.write_packet(std::make_unique<EncryptionResponseC2SPacket>(encrypted_secret, encrypted_token));

                        network_handler.enable_encryption(shared_secret);

                        printf("Enabled encryption\n");

                        break;
                    }
                    case 0x02: // Login Success
                    {
                        std::unique_ptr<LoginSuccessS2CPacket> login_success(dynamic_cast<LoginSuccessS2CPacket*>(read_packet.release()));

                        network_handler.write_packet(std::make_unique<LoginAcknowledgedC2SPacket>());

                        network_handler.set_client_state(ClientState::CONFIGURATION);

                        break;
                    }
                    case 0x03: // Set Compression
                    {
                        std::unique_ptr<SetCompressionS2CPacket> set_compression(dynamic_cast<SetCompressionS2CPacket*>(read_packet.release()));
                        network_handler.enable_compression(set_compression->compression_threshold);
                        printf("Enabled compression\n");
                        break;
                    }
                }
                break;
            }
            case ClientState::CONFIGURATION:
            {
                switch (read_packet->get_id())
                {
                    case 0x0E: // Clientbound Known Packs
                    {
                        std::unique_ptr<KnownPacksS2CPacket> known_server_packs(dynamic_cast<KnownPacksS2CPacket*>(read_packet.release()));

                        network_handler.write_packet(std::make_unique<KnownPacksC2SPacket>());

                        break;
                    }
                    case 0x03: // Finish Configuration
                    {
                        std::unique_ptr<FinishConfigurationS2CPacket> finish_configuration(dynamic_cast<FinishConfigurationS2CPacket*>(read_packet.release()));

                        network_handler.write_packet(std::make_unique<AcknowledgeFinishConfigurationC2SPacket>());

                        network_handler.set_client_state(ClientState::PLAY);
                    }
                }
                break;
            }
            case ClientState::PLAY:
            {
                switch (read_packet->get_id())
                {
                    // case 0x6F: // Start Configuration
                    // {
                    //     std::vector<uint8_t> data;
                    //     Packet configurationAcknowledge(0x0E, data);

                    //     network_handler.write_packet(configurationAcknowledge);

                    //     network_handler.set_client_state(ClientState::CONFIGURATION);
                    //     break;
                    // }
                }
                break;
            }
        }
    }
}