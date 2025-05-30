#pragma once

#include "packets/ServerboundPacket.hpp"

class EncryptionResponseC2SPacket : public ServerboundPacket
{
    public:

    static const int id = 0x01;

    EncryptionResponseC2SPacket(std::vector<uint8_t> shared_secret, std::vector<uint8_t> verify_token);

    std::vector<uint8_t> shared_secret;
    std::vector<uint8_t> verify_token;

    std::vector<uint8_t> encode() override;

    int get_id() const override { return this->id; };
};
