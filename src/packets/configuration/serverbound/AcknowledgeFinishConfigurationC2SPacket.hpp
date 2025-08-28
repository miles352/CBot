#pragma once

#include "packets/ServerboundPacket.hpp"
#include <cstdint>

#include "Bot.hpp"

class AcknowledgeFinishConfigurationC2SPacket : public ServerboundPacket
{
    public:

    static const int id = 0x03;

    AcknowledgeFinishConfigurationC2SPacket();

    std::vector<uint8_t> encode() override;

    using Data = struct
    {

    };

    Data data{};

    static void default_handler(Bot& bot, Event<AcknowledgeFinishConfigurationC2SPacket>& event);

    int get_id() const override { return this->id; };
};
