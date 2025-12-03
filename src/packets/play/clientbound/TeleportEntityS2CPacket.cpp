#include "TeleportEntityS2CPacket.hpp"

#include "conversions/StandardTypes.hpp"
#include "conversions/VarInt.hpp"
#include <Bot.hpp>

TeleportEntityS2CPacket::TeleportEntityS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.entity_id = VarInt::from_bytes(bytes);
    this->data.position.x = StandardTypes::from_bytes<double>(bytes);
    this->data.position.y = StandardTypes::from_bytes<double>(bytes);
    this->data.position.z = StandardTypes::from_bytes<double>(bytes);
    this->data.velocity.x = StandardTypes::from_bytes<double>(bytes);
    this->data.velocity.y = StandardTypes::from_bytes<double>(bytes);
    this->data.velocity.z = StandardTypes::from_bytes<double>(bytes);
    this->data.yaw = StandardTypes::from_bytes<float>(bytes);
    this->data.pitch = StandardTypes::from_bytes<float>(bytes);
    this->data.on_ground = StandardTypes::from_bytes<bool>(bytes);

    event_bus.emit<TeleportEntityS2CPacket>(this->data);
}

void TeleportEntityS2CPacket::default_handler(Bot& bot, Event<TeleportEntityS2CPacket>& event)
{
    EntityType type = bot.entity_id_to_type[event.data.entity_id];
    auto it = bot.entities[type].find(event.data.entity_id);
    if (it != bot.entities[type].end())
    {
        it->second = event.data.position;
    }
}
