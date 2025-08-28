#include "packets/play/clientbound/SetHealthS2CPacket.hpp"

#include "Bot.hpp"
#include "conversions/StandardTypes.hpp"
#include "conversions/VarInt.hpp"

SetHealthS2CPacket::SetHealthS2CPacket(std::vector<uint8_t> data, EventBus &event_bus)
{
    uint8_t* ptr = data.data();
    this->data.health = StandardTypes::from_bytes<float>(ptr);
    this->data.food = VarInt::from_bytes(ptr);
    this->data.saturation = StandardTypes::from_bytes<float>(ptr);

    // printf("Health: %f, food: %d, saturation: %f\n", this->data.health, this->data.food, this->data.saturation);

    event_bus.emit<SetHealthS2CPacket>(this->data);
}

void SetHealthS2CPacket::default_handler(Bot &bot, Event<SetHealthS2CPacket> &event)
{
    bot.health = event.data.health;
    bot.food = event.data.food;
    bot.saturation = event.data.saturation;
}
