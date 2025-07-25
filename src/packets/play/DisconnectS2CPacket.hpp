#pragma once
#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"

class DisconnectS2CPacket : public ClientboundPacket
{
public:
    DisconnectS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x1C;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        std::string reason;
    };

    Data data{};
};