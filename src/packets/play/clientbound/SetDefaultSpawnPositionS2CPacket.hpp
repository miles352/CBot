#pragma once

#include <cstdint>
#include <vector>

#include "math/Vec3.hpp"
#include "packets/ClientboundPacket.hpp"
#include "EventBus.hpp"

class SetDefaultSpawnPositionS2CPacket : public ClientboundPacket
{
public:
    static constexpr int id = 0x5A;

    int get_id() const override { return this->id; }

    SetDefaultSpawnPositionS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    using Data = struct
    {
        Vec3i position;
        float angle;
    };

    Data data{};
};
