#include "packets/login/EncryptionRequestS2CPacket.hpp"

#include <openssl/rand.h>

#include "config.hpp"
#include "EncryptionResponseC2SPacket.hpp"
#include "MicrosoftAuth.hpp"
#include "conversions/MCString.hpp"
#include "conversions/PrefixedArray.hpp"
#include "conversions/Utils.hpp"

EncryptionRequestS2CPacket::EncryptionRequestS2CPacket(std::vector<uint8_t> bytes, EventBus& event_bus)
{
    this->size = bytes.size();
    uint8_t* bytes_ptr = bytes.data();
    this->data.server_id = MCString::from_array(bytes_ptr);
    this->data.public_key = PrefixedArray::from_array<uint8_t>(bytes_ptr);
    this->data.verify_token = PrefixedArray::from_array<uint8_t>(bytes_ptr);
    this->data.should_authenticate = *bytes_ptr;

    event_bus.emit<EncryptionRequestS2CPacket>(this->data);
}

void EncryptionRequestS2CPacket::default_handler(Bot& bot, Event<EncryptionRequestS2CPacket>& event)
{
    Data data = event.data;
    unsigned char shared_secret[16];
    if (RAND_bytes(shared_secret, 16) <= 0)
    {
        throw std::runtime_error("Failed to generate shared secret!");
    }

    std::vector<uint8_t> unhashed;
    unhashed.insert(unhashed.end(), data.server_id.begin(), data.server_id.end());
    unhashed.insert(unhashed.end(), shared_secret, shared_secret + 16);
    unhashed.insert(unhashed.end(), data.public_key.begin(), data.public_key.end());

    uint8_t hashed[SHA_DIGEST_LENGTH];
    SHA1(unhashed.data(), unhashed.size(), hashed);


    std::string hash_string = Utils::SHA1_to_formatted(hashed);

    std::string oAuthCreateAddr = "sessionserver.mojang.com/session/minecraft/join";
    std::string oAuthCreateBody = "{"
                                        "\"accessToken\": \"" + ACCESS_TOKEN + "\","
                                        "\"selectedProfile\": \"" + bot.UUID + "\","
                                        "\"serverId\": \"" + hash_string + "\""
                                "}";

    std::string response = MicrosoftAuth::httpsPost(oAuthCreateAddr, oAuthCreateBody, "application/json");
    if (response.find("204 No Content") == std::string::npos)
    {
        throw std::runtime_error("Failed to join session!");
    }

    const uint8_t* ptr = data.public_key.data();
    RSA* rsa = d2i_RSA_PUBKEY(NULL, &ptr, data.public_key.size());
    std::vector<uint8_t> encrypted_secret(128);
    std::vector<uint8_t> encrypted_token(128);
    RSA_public_encrypt(16, shared_secret, encrypted_secret.data(), rsa, RSA_PKCS1_PADDING);
    RSA_public_encrypt(data.verify_token.size(), data.verify_token.data(), encrypted_token.data(), rsa, RSA_PKCS1_PADDING);

    bot.network_handler->write_packet(EncryptionResponseC2SPacket(encrypted_secret, encrypted_token));

    bot.network_handler->enable_encryption(shared_secret);
    printf("Enabled encryption\n");
}
