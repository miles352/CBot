#pragma once
#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"

class UpdateTagsS2CPacket : public ClientboundPacket
{
public:
    UpdateTagsS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x0D;
    int get_id() const override { return this->id; }



    using Data = struct
    {

    };

    Data data{};

    // static void default_handler(Bot& bot, Event<UpdateTagsS2CPacket>& event);
};