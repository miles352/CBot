#include "SetPlayerMovementFlagsC2SPacket.hpp"

SetPlayerMovementFlagsC2SPacket::SetPlayerMovementFlagsC2SPacket(bool on_ground, bool pushing_against_wall)
{
    this->data.on_ground = on_ground;
    this->data.pushing_against_wall = pushing_against_wall;
}

std::vector<uint8_t> SetPlayerMovementFlagsC2SPacket::encode()
{
    uint8_t bit_field = 0;
    constexpr uint8_t ON_GROUND_BIT = 0x01;
    constexpr uint8_t PUSHING_WALL_BIT = 0x02;
    if (this->data.on_ground) bit_field |= ON_GROUND_BIT;
    if (this->data.pushing_against_wall) bit_field |= PUSHING_WALL_BIT;
    return { bit_field };
}
