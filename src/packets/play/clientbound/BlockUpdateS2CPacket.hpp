#pragma once
#include "EventBus.hpp"
#include "math/BlockPos.hpp"
#include "packets/ClientboundPacket.hpp"

class BlockUpdateS2CPacket : public ClientboundPacket
{
public:
    BlockUpdateS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus);

    static constexpr int id = 0x08;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        BlockPos location;
        int new_block_id;
    };

    Data data{};

#ifndef NO_REGISTRY
    static void default_handler(Bot& bot, Event<BlockUpdateS2CPacket>& event);
#endif
};