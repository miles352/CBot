#pragma once
#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"

class SetHeldItemS2CPacket : public ClientboundPacket
{
public:
    SetHeldItemS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x62;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        int slot;
    };

    Data data{};
};