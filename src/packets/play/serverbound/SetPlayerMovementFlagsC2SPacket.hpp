#pragma once
#include "Bot.hpp"
#include "packets/ServerboundPacket.hpp"

class SetPlayerMovementFlagsC2SPacket : public ServerboundPacket
{
public:
    SetPlayerMovementFlagsC2SPacket(bool on_ground, bool pushing_against_wall);

    static constexpr int id = 0x1F;
    int get_id() const override { return this->id; }

    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        bool on_ground;
        bool pushing_against_wall;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<SetPlayerMovementFlagsC2SPacket>& event);
};