#pragma once
#include <vector>

#include "EventBus.hpp"
#include "math/Vec3.hpp"
#include "packets/ClientboundPacket.hpp"

class SynchronizePlayerPositionS2CPacket : public ClientboundPacket
{
    public:

    static constexpr int id = 0x41;

    int get_id() const override { return this->id; }


    SynchronizePlayerPositionS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    using Data = struct
    {
        int teleport_id;
        Vec3d position;
        Vec3d velocity;
        float yaw;
        float pitch;
        int teleport_flags;
    };

    Data data{};

    static void default_handler(Bot& bot, const Event<SynchronizePlayerPositionS2CPacket>& event);
};