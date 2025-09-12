#pragma once
#include "packets/ServerboundPacket.hpp"

class PlayerInputC2SPacket : public ServerboundPacket
{
    PlayerInputC2SPacket(bool forward, bool backward, bool left, bool right, bool jump, bool sneak, bool sprint);
    static constexpr int id = 0x29;
    int get_id() const override { return this->id; }
    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        bool forward,
            backward,
            left,
            right,
            jump,
            sneak,
            sprint;
    };

    Data data{};
};
