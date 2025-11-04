#pragma once

#include <cstdint>
#include <vector>

#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"
#include "Bot.hpp"

class KnownPacksS2CPacket : public ClientboundPacket
{
    public:
    KnownPacksS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus);

    // TODO: convert the stuff

    using Data = struct
    {
        // the data
    };

    Data data{};

    static void default_handler(Bot& bot, Event<KnownPacksS2CPacket>& event);

    static constexpr int id = 0x0E;

    int get_id() const override { return this->id; };
};