#pragma once

#include "EventBus.hpp"
#include "conversions/UUID.hpp"
#include "packets/ClientboundPacket.hpp"

class PlayerInfoRemoveS2CPacket : public ClientboundPacket
{
public:
    PlayerInfoRemoveS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x3E;

    int get_id() const override { return this->id; }

    using Data = struct
    {
        std::vector<UUID> uuids_to_remove;
    };

    Data data{};
};
