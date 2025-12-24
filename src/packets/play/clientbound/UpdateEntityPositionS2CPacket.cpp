#include "UpdateEntityPositionS2CPacket.hpp"

#include "conversions/StandardTypes.hpp"
#include "conversions/VarInt.hpp"
#include "Bot.hpp"

UpdateEntityPositionS2CPacket::UpdateEntityPositionS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.entity_id = VarInt::from_bytes(bytes);
    // fixed point number with 12 fraction bits. 1 << 12 = 4096
    this->data.position_delta.x = static_cast<double>(StandardTypes::from_bytes<int16_t>(bytes)) / 4096;
    this->data.position_delta.y = static_cast<double>(StandardTypes::from_bytes<int16_t>(bytes)) / 4096;
    this->data.position_delta.z = static_cast<double>(StandardTypes::from_bytes<int16_t>(bytes)) / 4096;
    this->data.on_ground = StandardTypes::from_bytes<bool>(bytes);

    event_bus.emit<UpdateEntityPositionS2CPacket>(this->data);
}

#ifndef NO_REGISTRY
void UpdateEntityPositionS2CPacket::default_handler(Bot& bot, Event<UpdateEntityPositionS2CPacket>& event)
{
    EntityType type = bot.entity_id_to_type[event.data.entity_id];
    auto it = bot.entities[type].find(event.data.entity_id);
    if (it != bot.entities[type].end())
    {
        it->second = it->second.add(event.data.position_delta);
    }
}
#endif
