#include "packets/login/EncryptionRequestS2CPacket.hpp"
#include "conversions/MCString.hpp"
#include "conversions/PrefixedArray.hpp"

#include <memory>

EncryptionRequestS2CPacket::EncryptionRequestS2CPacket(std::vector<uint8_t> data)
{
    this->size = data.size();
    uint8_t* data_ptr = data.data();
    this->server_id = MCString::from_array(data_ptr);
    this->public_key = PrefixedArray::from_array<uint8_t>(data_ptr);
    this->verify_token = PrefixedArray::from_array<uint8_t>(data_ptr);
    this->should_authenticate = *data_ptr;
}