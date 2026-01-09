#pragma once

#include <vector>

#include "EventBus.hpp"
#include "conversions/TextComponent.hpp"
#include "packets/ClientboundPacket.hpp"

class SystemChatS2CPacket final : public ClientboundPacket
{
public:
    static constexpr int id = 0x72;
    int get_id() const override { return this->id; }


    SystemChatS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    using Data = struct
    {
        TextComponent content;
        bool overlay;
    };

    Data data{};
};