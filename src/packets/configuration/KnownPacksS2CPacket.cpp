#include "packets/configuration/KnownPacksS2CPacket.hpp"

#include "KnownPacksC2SPacket.hpp"


KnownPacksS2CPacket::KnownPacksS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    event_bus.emit<KnownPacksS2CPacket>(this->data);
}

void KnownPacksS2CPacket::default_handler(Bot& bot, Data data)
{
    bot.network_handler->write_packet(std::make_unique<KnownPacksC2SPacket>());
}