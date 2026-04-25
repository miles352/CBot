#pragma once
#include <cstdint>
#include <vector>

#include "EventBus.hpp"
#include "conversions/TextComponent.hpp"
#include "packets/ClientboundPacket.hpp"

class SetTabHeaderFooterS2CPacket : public ClientboundPacket
{
public:
    static constexpr int id = 0x73;
    int get_id() const override { return this->id; }

    SetTabHeaderFooterS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    using Data = struct
    {
        TextComponent header;
        TextComponent footer;
    };

    Data data{};
};
