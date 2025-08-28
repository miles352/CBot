#pragma once
#include "Bot.hpp"
#include "math/Vec3.hpp"
#include "packets/ServerboundPacket.hpp"

class SetPlayerPositionRotationC2SPacket : public ServerboundPacket
{
public:
    SetPlayerPositionRotationC2SPacket(Vec3d position, float yaw, float pitch, bool on_ground, bool pushing_against_wall);

    static constexpr int id = 0x1D;
    int get_id() const override { return this->id; }

    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        Vec3d position;
        float yaw;
        float pitch;
        bool on_ground;
        bool pushing_against_wall;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<SetPlayerPositionRotationC2SPacket>& event);
};