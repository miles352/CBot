#pragma once

#include "packets/ClientboundPacket.hpp"

class SetCompressionS2CPacket : public ClientboundPacket
{
    public:
    SetCompressionS2CPacket(std::vector<uint8_t> data);

    static constexpr int id = 0x03;

    int get_id() const override { return this->id; };

    /** The maximum size in bytes before a packet should be compressed. */
    int compression_threshold;
};