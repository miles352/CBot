#pragma once
#include "Bot.hpp"
#include "packets/ClientboundPacket.hpp"

class StartConfigurationS2CPacket : public ClientboundPacket
{
public:
    static constexpr int id = 0x6F;

    int get_id() const override { return this->id; }

    StartConfigurationS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    using Data = struct
    {

    };

    static void default_handler(Bot& bot);
};