#pragma once

#include <cstdint>
#include <vector>

#include "packets/ClientboundPacket.hpp"
#include "Bot.hpp"

class FinishConfigurationS2CPacket : public ClientboundPacket
{
    public:
    FinishConfigurationS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x03;

    static void default_handler(Bot& bot);

    using Data = struct
    {

    };

    int get_id() const override { return this->id; };
};