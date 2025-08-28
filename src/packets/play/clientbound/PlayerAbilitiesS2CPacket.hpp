#pragma once
#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"

class PlayerAbilitiesS2CPacket : public ClientboundPacket
{
public:
    PlayerAbilitiesS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x39;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        bool invulnerable;
        bool flying;
        bool allow_flying;
        bool instant_break;
        float flying_speed;
        float fov_modifier;
    };

    Data data{};
};