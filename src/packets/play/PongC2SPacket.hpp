#pragma once
#include "packets/ServerboundPacket.hpp"

class PongC2SPacket : public ServerboundPacket
{
public:
    PongC2SPacket(int id);

    static constexpr int id = 0x2C;
    int get_id() const override { return this->id; }
    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        int id;
    };

    Data data{};
};