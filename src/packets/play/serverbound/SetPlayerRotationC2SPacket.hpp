#pragma once
#include "Bot.hpp"
#include "packets/ServerboundPacket.hpp"

class SetPlayerRotationC2SPacket : public ServerboundPacket
{
public:

    SetPlayerRotationC2SPacket(float yaw, float pitch, bool on_ground, bool pushing_against_wall);

    static constexpr int id = 0x1E;
    int get_id() const override { return this->id; }
    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        float yaw;
        float pitch;
        bool on_ground;
        bool pushing_against_wall;
    };

    Data data{};
};