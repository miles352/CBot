#pragma once

#include "packets/ServerboundPacket.hpp"

class KnownPacksC2SPacket : public ServerboundPacket
{
    public:

    static constexpr int id = 0x07;

    KnownPacksC2SPacket();

    std::vector<uint8_t> encode() override;

    using Data = struct
    {

    };

    Data data{};

    int get_id() const override { return this->id; };
};
