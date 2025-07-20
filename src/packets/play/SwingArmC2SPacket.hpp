#pragma once
#include "packets/ServerboundPacket.hpp"

class SwingArmC2SPacket : public ServerboundPacket
{
public:
    SwingArmC2SPacket(bool offhand = false);

    static constexpr int id = 0x3C;
    int get_id() const override { return this->id; }
    std::vector<uint8_t> encode() override;

    using Data = struct
    {
        bool offhand;
    };

    Data data{};
};
