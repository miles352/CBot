#pragma once

#include "packets/ClientboundPacket.hpp"

class LoginSuccessS2CPacket : public ClientboundPacket
{
    public:
    LoginSuccessS2CPacket(std::vector<uint8_t> data);

    // TODO: Add all the stuff 

    static constexpr int id = 0x02;

    int get_id() const override { return this->id; };
};