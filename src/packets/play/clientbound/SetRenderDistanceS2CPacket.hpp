#pragma once
#include <cstdint>
#include <vector>

#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"


class SetRenderDistanceS2CPacket : public ClientboundPacket
{
public:
    static constexpr int id = 0x58;

    int get_id() const override { return this->id; }

    SetRenderDistanceS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    using Data = struct
    {
        int render_distance;
    };

    Data data{};
};
