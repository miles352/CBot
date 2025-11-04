#pragma once
#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"

class KeepAliveS2CPacket : public ClientboundPacket
{
public:
    static constexpr int id = 0x26;

    int get_id() const override { return this->id; }

    KeepAliveS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus);

    using Data = struct
    {
        int64_t keep_alive_id;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<KeepAliveS2CPacket>& event);
};