#include "DisconnectS2CPacket.hpp"

#include "Bot.hpp"
#include "events/DisconnectEvent.hpp"

DisconnectS2CPacket::DisconnectS2CPacket(const std::vector<uint8_t>& data, EventBus &event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.reason = TextComponent::from_bytes(bytes);

    event_bus.emit<DisconnectS2CPacket>(this->data);
}

void DisconnectS2CPacket::default_handler(Bot& bot, Event<DisconnectS2CPacket>& event)
{
    bot.event_bus.emit<DisconnectEvent>({event.data.reason.to_string()});
}
