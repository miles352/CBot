#pragma once
#include "Bot.hpp"
#include "packets/ServerboundPacket.hpp"

class AcknowledgeConfigurationC2SPacket : public ServerboundPacket
{
public:
    AcknowledgeConfigurationC2SPacket();

    static constexpr int id = 0x0F;

    int get_id() const override { return this->id; }

    std::vector<uint8_t> encode() override;

    static void default_handler(Bot& bot);
};
