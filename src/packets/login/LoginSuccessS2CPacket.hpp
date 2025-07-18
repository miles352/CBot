#pragma once

#include <cstdint>
#include <vector>

#include "EventBus.hpp"
#include "packets/ClientboundPacket.hpp"

class LoginSuccessS2CPacket : public ClientboundPacket
{
    public:
    LoginSuccessS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    using Data = struct
    {
        std::string uuid;
        std::string username;
        // TODO: Add this: https://minecraft.wiki/w/Mojang_API#UUID_to_Profile_and_Skin/Cape
    };

    Data data{};

    static void default_handler(Bot& bot, Event<LoginSuccessS2CPacket>& event);

    static constexpr int id = 0x02;

    int get_id() const override { return this->id; };
};