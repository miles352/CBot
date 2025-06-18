#pragma once

#include <vector>
#include <cstdint>

class ServerboundPacket
{
    public:
    virtual ~ServerboundPacket() = default;

    virtual int get_id() const = 0;
    virtual std::vector<uint8_t> encode() = 0;

    protected:
    ServerboundPacket() = default;
};   