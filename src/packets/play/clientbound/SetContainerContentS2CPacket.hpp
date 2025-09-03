#pragma once
#include "EventBus.hpp"
#include "conversions/Slot.hpp"
#include "packets/ClientboundPacket.hpp"

class SetContainerContentS2CPacket : public ClientboundPacket
{
public:
    SetContainerContentS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x12;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        int window_id;
        int state_id;
        std::vector<Slot> slot_data;
        Slot carried_item;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<SetContainerContentS2CPacket>& event);
};
