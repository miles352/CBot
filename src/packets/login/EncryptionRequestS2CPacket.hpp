#pragma once

#include "packets/ClientboundPacket.hpp"

#include <string>
#include <vector>

#include "Bot.hpp"
#include "EventBus.hpp"

class EncryptionRequestS2CPacket : public ClientboundPacket
{
    public:
    EncryptionRequestS2CPacket(std::vector<uint8_t> data, EventBus& event_bus);

    static constexpr int id = 0x01;

    int get_id() const override { return this->id; };

    using Data = struct
    {
        std::string server_id;
        std::vector<uint8_t> public_key;
        std::vector<uint8_t> verify_token;
        bool should_authenticate;
    };

    Data data;

    static void default_handler(Bot& bot, Event<EncryptionRequestS2CPacket>& event);
};
