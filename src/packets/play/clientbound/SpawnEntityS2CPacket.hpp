#pragma once
#include <cstdint>
#include <vector>

#include "EventBus.hpp"
#include "registry/EntityRegistryGenerated.hpp"
#include "conversions/UUID.hpp"
#include "math/Vec3.hpp"
#include "packets/ClientboundPacket.hpp"

class SpawnEntityS2CPacket final : public ClientboundPacket
{
public:
    SpawnEntityS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x01;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        int entity_id;
        UUID entity_uuid;
        EntityType entity_type;
        Vec3d position;
        float pitch;
        float yaw;
        float head_yaw;
        int data;
        Vec3d velocity;
    };

    Data data{};

#ifndef NO_REGISTRY
    static void default_handler(Bot& bot, Event<SpawnEntityS2CPacket>& event);
#endif
};
