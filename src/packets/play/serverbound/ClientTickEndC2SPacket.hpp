#pragma once
#include "packets/ServerboundPacket.hpp"

class ClientTickEndC2SPacket : public ServerboundPacket
{
public:
    ClientTickEndC2SPacket();

    static constexpr int id = 0x0B;
    int get_id() const override { return this->id; }
    std::vector<uint8_t> encode() override;

    using Data = struct
    {

    };

    Data data{};
};