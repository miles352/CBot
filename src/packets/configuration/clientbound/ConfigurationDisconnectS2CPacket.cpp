#include "ConfigurationDisconnectS2CPacket.hpp"

#include "Bot.hpp"
#include "events/DisconnectEvent.hpp"

ConfigurationDisconnectS2CPacket::ConfigurationDisconnectS2CPacket(const std::vector<uint8_t>& data, EventBus &event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.reason = TextComponent::from_bytes(bytes);

    event_bus.emit<ConfigurationDisconnectS2CPacket>(this->data);
}

void ConfigurationDisconnectS2CPacket::default_handler(Bot& bot, Event<ConfigurationDisconnectS2CPacket>& event)
{
    bot.event_bus.emit<DisconnectEvent>({event.data.reason.to_string()});
}
