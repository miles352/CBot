#pragma once
#include <vector>

#include "EventBus.hpp"
#include "math/Vec3.hpp"
#include "packets/ClientboundPacket.hpp"

class TeleportEntityS2CPacket final : public ClientboundPacket
{
public:
    TeleportEntityS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x1F;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        int entity_id;
        Vec3d position;
        Vec3d velocity;
        float yaw;
        float pitch;
        bool on_ground;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<TeleportEntityS2CPacket>& event);
};
