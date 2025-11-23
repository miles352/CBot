#pragma once
#include "EventBus.hpp"
#include "conversions/NBT.hpp"
#include "conversions/TextComponent.hpp"
#include "packets/ClientboundPacket.hpp"

class DisconnectS2CPacket : public ClientboundPacket
{
public:
    DisconnectS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus);

    static constexpr int id = 0x1C;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        TextComponent reason;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<DisconnectS2CPacket>& event);
};
