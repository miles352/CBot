#pragma once

#include "EventBus.hpp"
#include "conversions/Slot.hpp"
#include "packets/ClientboundPacket.hpp"

class SetContainerSlotS2CPacket : public ClientboundPacket
{
public:
    SetContainerSlotS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus);

    static constexpr int id = 0x14;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        int window_id;
        int state_id;
        int16_t slot;
        Slot slot_data;
    };

    Data data{};

#ifndef NO_REGISTRY
    static void default_handler(Bot& bot, Event<SetContainerSlotS2CPacket>& event);
#endif
};
