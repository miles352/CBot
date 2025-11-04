#pragma once
#include <vector>

#include "EventBus.hpp"
#include "conversions/TeleportFlags.hpp"
#include "math/Vec3.hpp"
#include "packets/ClientboundPacket.hpp"

class SynchronizePlayerPositionS2CPacket : public ClientboundPacket
{
public:
    SynchronizePlayerPositionS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus);

    static constexpr int id = 0x41;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        int teleport_id;
        Vec3d position;
        Vec3d velocity;
        float yaw;
        float pitch;
        TeleportFlags teleport_flags;
    };

    Data data{};

    static void default_handler(Bot& bot, const Event<SynchronizePlayerPositionS2CPacket>& event);
};