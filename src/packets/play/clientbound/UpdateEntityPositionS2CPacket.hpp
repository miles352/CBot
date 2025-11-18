#pragma once
#include <vector>

#include "EventBus.hpp"
#include "math/Vec3.hpp"
#include "packets/ClientboundPacket.hpp"

class UpdateEntityPositionS2CPacket final : public ClientboundPacket
{
public:
    UpdateEntityPositionS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x2E;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        int entity_id;
        Vec3d position_delta;
        bool on_ground;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<UpdateEntityPositionS2CPacket>& event);
};
