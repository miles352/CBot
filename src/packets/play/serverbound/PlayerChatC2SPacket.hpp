#pragma once

#include "Bot.hpp"
#include "packets/ServerboundPacket.hpp"


class PlayerChatC2SPacket final : public ServerboundPacket
{
public:
    PlayerChatC2SPacket(std::string message, int64_t timestamp, int64_t salt);

    static constexpr int id = 0x07;
    int get_id() const override { return this->id; }
    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        /** The chat message, maximum of 256 characters */
        std::string message;
        int64_t timestamp;
        int64_t salt;

    };

    Data data{};

    static void default_handler(Bot& bot, Event<PlayerChatC2SPacket>& event);
};