#pragma once
#include <cstdint>

#include "EventBus.hpp"
#include "conversions/PlayerTabActions.hpp"
#include "packets/ClientboundPacket.hpp"

class PlayerInfoUpdateS2CPacket : public ClientboundPacket
{
public:
    PlayerInfoUpdateS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x3F;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        uint8_t actions;
        std::vector<PlayerTabActions> player_actions;
    };

    Data data{};
};
