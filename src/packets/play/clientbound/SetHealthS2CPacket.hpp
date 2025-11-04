#pragma once
#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"

class SetHealthS2CPacket : public ClientboundPacket
{
public:
    SetHealthS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus);

    static constexpr int id = 0x61;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        float health;
        int food;
        float saturation;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<SetHealthS2CPacket>& event);
};