#include "KeepAliveS2CPacket.hpp"

KeepAliveS2CPacket::KeepAliveS2CPacket(std::vector<uint8_t> data, EventBus &event_bus)
{
    printf("Keep Alive Packet\n");

    event_bus.emit<KeepAliveS2CPacket>(this->data);
}

void KeepAliveS2CPacket::default_handler(Bot &bot, Event<KeepAliveS2CPacket> &event)
{
    printf("Received keep alive!\n");
}