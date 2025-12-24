#pragma once
#include "EventBus.hpp"
#include "math/Vec3.hpp"
#include "packets/ClientboundPacket.hpp"

class UpdateEntityPositionRotationS2CPacket final : public ClientboundPacket
{
public:
    UpdateEntityPositionRotationS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x2F;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        int entity_id;
        Vec3d position_delta;
        float yaw;
        float pitch;
        bool on_ground;
    };

    Data data{};

#ifndef NO_REGISTRY
    static void default_handler(Bot& bot, Event<UpdateEntityPositionRotationS2CPacket>& event);
#endif
};
