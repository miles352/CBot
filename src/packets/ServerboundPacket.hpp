#pragma once

#include "Packet.hpp"

#include <vector>

class ServerboundPacket : public Packet 
{
    public:
    virtual std::vector<uint8_t> encode() = 0;

    protected:
    ServerboundPacket() = default;
};   