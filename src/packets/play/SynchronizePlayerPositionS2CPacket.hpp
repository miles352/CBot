#pragma once
#include <vector>

#include "EventBus.hpp"
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
        double x;
        double y;
        double z;
        double velocity_x;
        double velocity_y;
        double velocity_z;
        float yaw;
        float pitch;
        int teleport_flags;
    };

    Data data{};

    // Optional default handler for the packet:
    static void default_handler(Bot& bot, Event<SynchronizePlayerPositionS2CPacket>& event);
};