#pragma once

#include "packets/ClientboundPacket.hpp"

class KnownPacksS2CPacket : public ClientboundPacket
{
    public:
    KnownPacksS2CPacket(std::vector<uint8_t> data);

    // TODO: convert the stuff

    static constexpr int id = 0x0E;

    int get_id() const override { return this->id; };
};