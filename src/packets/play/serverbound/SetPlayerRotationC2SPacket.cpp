#include "packets/play/serverbound/SetPlayerRotationC2SPacket.hpp"

#include "conversions/StandardTypes.hpp"

SetPlayerRotationC2SPacket::SetPlayerRotationC2SPacket(float yaw, float pitch, bool on_ground, bool pushing_against_wall)
{
    this->data.yaw = yaw;
    this->data.pitch = pitch;
    this->data.on_ground = on_ground;
    this->data.pushing_against_wall = pushing_against_wall;
}

std::vector<uint8_t> SetPlayerRotationC2SPacket::encode()
{
    std::vector<uint8_t> result = StandardTypes::to_bytes<float>(this->data.yaw);
    std::vector<uint8_t> pitch = StandardTypes::to_bytes<float>(this->data.pitch);
    result.insert(result.end(), pitch.begin(), pitch.end());
    uint8_t bit_field = 0;
    constexpr uint8_t ON_GROUND_BIT = 0x01;
    constexpr uint8_t PUSHING_WALL_BIT = 0x02;
    if (this->data.on_ground) bit_field |= ON_GROUND_BIT;
    if (this->data.pushing_against_wall) bit_field |= PUSHING_WALL_BIT;
    result.push_back(bit_field);
    return result;
}


