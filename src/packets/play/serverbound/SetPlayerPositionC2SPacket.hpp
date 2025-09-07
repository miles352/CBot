#pragma once
#include "Bot.hpp"
#include "math/Vec3.hpp"
#include "packets/ServerboundPacket.hpp"

class SetPlayerPositionC2SPacket : public ServerboundPacket
{
public:
    SetPlayerPositionC2SPacket(Vec3d position, bool on_ground, bool pushing_against_wall);

    static constexpr int id = 0x1C;
    int get_id() const override { return this->id; }

    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        Vec3d position;
        bool on_ground;
        bool pushing_against_wall;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<SetPlayerPositionC2SPacket>& event);
};
