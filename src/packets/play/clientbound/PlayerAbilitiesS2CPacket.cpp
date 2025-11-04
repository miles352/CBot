#include "PlayerAbilitiesS2CPacket.hpp"

#include "conversions/StandardTypes.hpp"

PlayerAbilitiesS2CPacket::PlayerAbilitiesS2CPacket(const std::vector<uint8_t>& data, EventBus &event_bus)
{
    const uint8_t* ptr = data.data();
    auto bit_field = StandardTypes::from_bytes<int8_t>(ptr);

    this->data.invulnerable = bit_field & 0b0001;
    this->data.flying = bit_field & 0b0010;
    this->data.allow_flying = bit_field & 0b0100;
    this->data.instant_break = bit_field & 0b1000;

    this->data.flying_speed = StandardTypes::from_bytes<float>(ptr);
    this->data.fov_modifier = StandardTypes::from_bytes<float>(ptr);

    // printf("Invulnerable: %d, flying: %d, allow flying: %d, instant break: %d\n", this->data.invulnerable, this->data.flying, this->data.allow_flying, this->data.instant_break);

    event_bus.emit<PlayerAbilitiesS2CPacket>(this->data);
}
