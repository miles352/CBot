#include "LoginDisconnectS2CPacket.hpp"

#include "Bot.hpp"
#include "conversions/MCString.hpp"
#include "events/DisconnectEvent.hpp"

LoginDisconnectS2CPacket::LoginDisconnectS2CPacket(const std::vector<uint8_t>& data, EventBus &event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.reason = MCString::from_bytes(bytes);

    event_bus.emit<LoginDisconnectS2CPacket>(this->data);
}

void LoginDisconnectS2CPacket::default_handler(Bot& bot, Event<LoginDisconnectS2CPacket>& event)
{
    bot.event_bus.emit<DisconnectEvent>({event.data.reason});
}
