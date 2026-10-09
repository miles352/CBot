#include "RemoveEntitiesS2CPacket.hpp"

#include "Bot.hpp"
#include "events/EntityUnloaded.hpp"
#include "conversions/PrefixedArray.hpp"

RemoveEntitiesS2CPacket::RemoveEntitiesS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.entity_ids = PrefixedArray::from_bytes_variable<VarInt>(bytes);

    event_bus.emit<RemoveEntitiesS2CPacket>(this->data);
}

#ifndef NO_REGISTRY
void RemoveEntitiesS2CPacket::default_handler(Bot& bot, Event<RemoveEntitiesS2CPacket>& event)
{
    for (int entity_id : event.data.entity_ids)
    {
        auto entity = bot.entities.find(entity_id);
        if (entity != bot.entities.end())
        {
            bot.event_bus.emit<EntityUnloaded>(entity->second);
            bot.entities.erase(entity);
        }
    }
}
#endif
