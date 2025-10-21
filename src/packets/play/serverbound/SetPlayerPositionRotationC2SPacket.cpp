#include "packets/play/serverbound/SetPlayerPositionRotationC2SPacket.hpp"

#include "conversions/StandardTypes.hpp"

SetPlayerPositionRotationC2SPacket::SetPlayerPositionRotationC2SPacket(Vec3d position, float yaw, float pitch, bool on_ground, bool pushing_against_wall)
{
    this->data.position = position;
    this->data.yaw = yaw;
    this->data.pitch = pitch;
    this->data.on_ground = on_ground;
    this->data.pushing_against_wall = pushing_against_wall;
}

std::vector<uint8_t> SetPlayerPositionRotationC2SPacket::encode()
{
    std::vector<uint8_t> x_bytes = StandardTypes::to_bytes<double>(this->data.position.x);
    std::vector<uint8_t> y_bytes = StandardTypes::to_bytes<double>(this->data.position.y);
    std::vector<uint8_t> z_bytes = StandardTypes::to_bytes<double>(this->data.position.z);
    std::vector<uint8_t> yaw_bytes = StandardTypes::to_bytes<float>(this->data.yaw);
    std::vector<uint8_t> pitch_bytes = StandardTypes::to_bytes<float>(this->data.pitch);
    x_bytes.insert(x_bytes.end(), y_bytes.begin(), y_bytes.end());
    x_bytes.insert(x_bytes.end(), z_bytes.begin(), z_bytes.end());
    x_bytes.insert(x_bytes.end(), yaw_bytes.begin(), yaw_bytes.end());
    x_bytes.insert(x_bytes.end(), pitch_bytes.begin(), pitch_bytes.end());
    uint8_t bit_field = 0;
    constexpr uint8_t ON_GROUND_BIT = 0x01;
    constexpr uint8_t PUSHING_WALL_BIT = 0x02;
    if (this->data.on_ground) bit_field |= ON_GROUND_BIT;
    if (this->data.pushing_against_wall) bit_field |= PUSHING_WALL_BIT;
    x_bytes.push_back(bit_field);
    return x_bytes;
}
