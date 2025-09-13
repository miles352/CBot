#include "SetPlayerPositionC2SPacket.hpp"

SetPlayerPositionC2SPacket::SetPlayerPositionC2SPacket(Vec3d position, bool on_ground, bool pushing_against_wall)
{
    this->data.position = position;
    this->data.on_ground = on_ground;
    this->data.pushing_against_wall = pushing_against_wall;
}

std::vector<uint8_t> SetPlayerPositionC2SPacket::encode()
{
    std::vector<uint8_t> x_bytes = StandardTypes::to_bytes<double>(this->data.position.x);
    std::vector<uint8_t> y_bytes = StandardTypes::to_bytes<double>(this->data.position.y);
    std::vector<uint8_t> z_bytes = StandardTypes::to_bytes<double>(this->data.position.z);
    x_bytes.insert(x_bytes.end(), y_bytes.begin(), y_bytes.end());
    x_bytes.insert(x_bytes.end(), z_bytes.begin(), z_bytes.end());
    uint8_t bit_field = 0;
    constexpr uint8_t ON_GROUND_BIT = 0x01;
    constexpr uint8_t PUSHING_WALL_BIT = 0x02;
    if (this->data.on_ground) bit_field |= ON_GROUND_BIT;
    if (this->data.pushing_against_wall) bit_field |= PUSHING_WALL_BIT;
    x_bytes.push_back(bit_field);
    return x_bytes;
}

void SetPlayerPositionC2SPacket::default_handler(Bot& bot, Event<SetPlayerPositionC2SPacket>& event)
{
    bot.position = event.data.position;
    bot.on_ground = event.data.on_ground;
    bot.horizontal_collision = event.data.pushing_against_wall;
}
