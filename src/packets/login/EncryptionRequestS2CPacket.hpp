#pragma once

#include "packets/ClientboundPacket.hpp"

class EncryptionRequestS2CPacket : public ClientboundPacket
{
    public:
    EncryptionRequestS2CPacket(std::vector<uint8_t> data);

    static constexpr int id = 0x01;

    int get_id() const override { return this->id; };

    std::string server_id;
    std::vector<uint8_t> public_key;
    std::vector<uint8_t> verify_token;
    bool should_authenticate;
};