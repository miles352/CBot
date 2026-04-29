#pragma once

#include "EventBus.hpp"
#include "conversions/MCString.hpp"
#include "conversions/TextComponent.hpp"
#include "packets/ClientboundPacket.hpp"

class LoginDisconnectS2CPacket : public ClientboundPacket
{
public:
    LoginDisconnectS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus);

    static constexpr int id = 0x00;
    int get_id() const override { return this->id; }

    using Data = struct
    {
        std::string reason;
    };

    Data data{};

    static void default_handler(Bot& bot, Event<LoginDisconnectS2CPacket>& event);
};
