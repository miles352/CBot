#pragma once

#include "packets/ClientboundPacket.hpp"
#include <vector>

#include "Bot.hpp"

class SetCompressionS2CPacket : public ClientboundPacket
{
    public:
    SetCompressionS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x03;

    int get_id() const override { return this->id; };

    using Data = struct
    {
        /** The maximum size in bytes before a packet should be compressed. */
        int compression_threshold;
    };

    Data data{};

    static void default_handler(Bot& bot, Data data);
};
