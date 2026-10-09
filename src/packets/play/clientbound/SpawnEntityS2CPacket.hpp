#pragma once
#include <cstdint>
#include <vector>

#include "Entity.hpp"
#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"

class SpawnEntityS2CPacket final : public ClientboundPacket
{
public:
    SpawnEntityS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x01;
    int get_id() const override { return this->id; }

    using Data = Entity;

    Data data{};

#ifndef NO_REGISTRY
    static void default_handler(Bot& bot, Event<SpawnEntityS2CPacket>& event);
#endif
};
