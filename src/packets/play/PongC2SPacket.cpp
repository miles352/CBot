#include "PongC2SPacket.hpp"

#include <cstdio>

#include "conversions/StandardTypes.hpp"

PongC2SPacket::PongC2SPacket(int id)
{
    this->data.id = id;
}

std::vector<uint8_t> PongC2SPacket::encode()
{
    return StandardTypes::to_bytes<int>(this->data.id);
}

