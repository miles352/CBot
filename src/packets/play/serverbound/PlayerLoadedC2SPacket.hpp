#pragma once
#include "packets/ServerboundPacket.hpp"

class PlayerLoadedC2SPacket : public ServerboundPacket
{
public:
    PlayerLoadedC2SPacket();
    static constexpr int id = 0x2A;
    int get_id() const override { return this->id; }
    std::vector<uint8_t> encode() override;

    using Data = struct
    {
    };

    Data data{};
};
