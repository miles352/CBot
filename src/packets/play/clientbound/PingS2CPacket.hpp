#pragma once
#include "Bot.hpp"
#include "packets/ClientboundPacket.hpp"

class PingS2CPacket : public ClientboundPacket
{
public:
    PingS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus);

    static constexpr int id = 0x36;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        int id;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<PingS2CPacket>& event);
};