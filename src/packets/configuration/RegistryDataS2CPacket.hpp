#pragma once
#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"

class RegistryDataS2CPacket : public ClientboundPacket
{
public:
    RegistryDataS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x07;
    int get_id() const override { return this->id; }

    using Data = struct
    {
    };

    Data data{};
};