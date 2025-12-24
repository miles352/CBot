#pragma once
#include "EventBus.hpp"
#include "conversions/ChunkPos.hpp"
#include "packets/ClientboundPacket.hpp"

class UnloadChunkS2CPacket final : public ClientboundPacket
{
public:
    UnloadChunkS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x21;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        ChunkPos position;
    };

    Data data{};

#ifndef NO_REGISTRY
    static void default_handler(Bot& bot, Event<UnloadChunkS2CPacket>& event);
#endif
};
