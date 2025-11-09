#pragma once

#include "EventBus.hpp"
#include "conversions/ChunkData.hpp"
#include "conversions/ChunkPos.hpp"
#include "packets/ClientboundPacket.hpp"

class ChunkDataS2CPacket : public ClientboundPacket
{
public:
    ChunkDataS2CPacket(const std::vector<std::uint8_t>& data, EventBus& event_bus);

    static constexpr int id = 0x27;
    int get_id() const override { return this->id; }


    using Data = struct
    {
        ChunkPos chunk_pos;
        ChunkData chunk_data;
        // LightData light_data;
    };

    Data data{};

#ifndef NO_REGISTRY
    static void default_handler(Bot& bot, Event<ChunkDataS2CPacket>& event);
#endif
};