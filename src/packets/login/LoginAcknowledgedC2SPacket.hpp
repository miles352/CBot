#pragma once

#include <cstdint>

#include "packets/ServerboundPacket.hpp"

class LoginAcknowledgedC2SPacket : public ServerboundPacket
{
    public:

    static const int id = 0x03;

    LoginAcknowledgedC2SPacket();

    std::vector<uint8_t> encode() override;

    int get_id() const override { return this->id; };

    using Data = struct
    {

    };
};
