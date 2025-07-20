#include "KeepAliveS2CPacket.hpp"

#include "Bot.hpp"
#include "KeepAliveC2SPacket.hpp"
#include "conversions/StandardTypes.hpp"

KeepAliveS2CPacket::KeepAliveS2CPacket(std::vector<uint8_t> data, EventBus &event_bus)
{
    uint8_t* ptr = data.data();
    this->data.keep_alive_id = StandardTypes::from_array<int64_t>(ptr);

    event_bus.emit<KeepAliveS2CPacket>(this->data);
}

void KeepAliveS2CPacket::default_handler(Bot &bot, Event<KeepAliveS2CPacket> &event)
{
    bot.network_handler->write_packet(KeepAliveC2SPacket(event.data.keep_alive_id));
}