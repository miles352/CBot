#include "PlayerAbilitiesS2CPacket.hpp"

#include "conversions/StandardTypes.hpp"

PlayerAbilitiesS2CPacket::PlayerAbilitiesS2CPacket(std::vector<uint8_t> data, EventBus &event_bus)
{
    uint8_t* ptr = data.data();
    int8_t bit_field = StandardTypes::from_array<int8_t>(ptr);

    this->data.invulnerable = bit_field & 0b0001;
    this->data.flying = bit_field & 0b0010;
    this->data.allow_flying = bit_field & 0b0100;
    this->data.instant_break = bit_field & 0b1000;

    this->data.flying_speed = StandardTypes::from_array<float>(ptr);
    this->data.fov_modifier = StandardTypes::from_array<float>(ptr);

    event_bus.emit<PlayerAbilitiesS2CPacket>(this->data);
}
