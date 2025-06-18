#pragma once

#include "packets/ServerboundPacket.hpp"
#include <cstdint>

class AcknowledgeFinishConfigurationC2SPacket : public ServerboundPacket
{
    public:

    static const int id = 0x03;

    AcknowledgeFinishConfigurationC2SPacket();

    std::vector<uint8_t> encode() override;

    int get_id() const override { return this->id; };
};
