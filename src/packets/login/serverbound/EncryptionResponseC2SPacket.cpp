#include "packets/login/serverbound/EncryptionResponseC2SPacket.hpp"
#include "conversions/PrefixedArray.hpp"

EncryptionResponseC2SPacket::EncryptionResponseC2SPacket(std::vector<uint8_t> shared_secret, std::vector<uint8_t> verify_token)
{
    this->data.shared_secret = shared_secret;
    this->data.verify_token = verify_token;
}

std::vector<uint8_t> EncryptionResponseC2SPacket::encode()
{
    std::vector<uint8_t> prefixed_shared_secret = PrefixedArray::array_to_prefixed_bytes<uint8_t>(this->data.shared_secret.data(), this->data.shared_secret.size());
    std::vector<uint8_t> prefixed_verify_token = PrefixedArray::array_to_prefixed_bytes<uint8_t>(this->data.verify_token.data(), this->data.verify_token.size());

    std::vector<uint8_t> encryption_response = prefixed_shared_secret;
    encryption_response.insert(encryption_response.end(), prefixed_verify_token.begin(), prefixed_verify_token.end());

    return encryption_response;
}
