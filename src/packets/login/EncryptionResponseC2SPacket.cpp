#include "packets/login/EncryptionResponseC2SPacket.hpp"
#include "conversions/PrefixedArray.hpp"

EncryptionResponseC2SPacket::EncryptionResponseC2SPacket(std::vector<uint8_t> shared_secret, std::vector<uint8_t> verify_token)
{
    this->shared_secret = shared_secret;
    this->verify_token = verify_token;
}

std::vector<uint8_t> EncryptionResponseC2SPacket::encode()
{
    std::vector<uint8_t> prefixed_shared_secret = PrefixedArray::array_to_prefixed_bytes<uint8_t>(this->shared_secret.data(), this->shared_secret.size());
    std::vector<uint8_t> prefixed_verify_token = PrefixedArray::array_to_prefixed_bytes<uint8_t>(this->verify_token.data(), this->verify_token.size());

    std::vector<uint8_t> encryption_response = prefixed_shared_secret;
    encryption_response.insert(encryption_response.end(), prefixed_verify_token.begin(), prefixed_verify_token.end());

    return encryption_response;
}