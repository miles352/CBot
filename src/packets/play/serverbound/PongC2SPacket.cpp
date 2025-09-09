#include "packets/play/serverbound/PongC2SPacket.hpp"

#include <cstdio>

#include "conversions/StandardTypes.hpp"

PongC2SPacket::PongC2SPacket(int id)
{
    this->data.id = id;
}

std::vector<uint8_t> PongC2SPacket::encode()
{
    // printf("Sending pong with id: %d\n", this->data.id);
    return StandardTypes::to_bytes<int>(this->data.id);
}

