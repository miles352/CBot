#pragma once

#include "packets/ClientboundPacket.hpp"

class FinishConfigurationS2CPacket : public ClientboundPacket
{
    public:
    FinishConfigurationS2CPacket(std::vector<uint8_t> data);

    static constexpr int id = 0x03;

    int get_id() const override { return this->id; };
};