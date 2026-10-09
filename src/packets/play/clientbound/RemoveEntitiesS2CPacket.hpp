#pragma once
#include <cstdint>

#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"

class RemoveEntitiesS2CPacket final : public ClientboundPacket
{
public:
    static constexpr int id = 0x46;

    int get_id() const { return this->id; }

    RemoveEntitiesS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    using Data = struct
    {
        std::vector<int> entity_ids;
    };

    Data data{};

#ifndef NO_REGISTRY
    static void default_handler(Bot& bot, Event<RemoveEntitiesS2CPacket>& event);
#endif
};
