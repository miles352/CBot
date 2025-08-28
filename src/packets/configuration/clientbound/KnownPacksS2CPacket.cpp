#include "packets/configuration/clientbound/KnownPacksS2CPacket.hpp"

#include "../serverbound/KnownPacksC2SPacket.hpp"


KnownPacksS2CPacket::KnownPacksS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    event_bus.emit<KnownPacksS2CPacket>(this->data);
}

void KnownPacksS2CPacket::default_handler(Bot& bot, Event<KnownPacksS2CPacket>& event)
{
    bot.network_handler.write_packet(KnownPacksC2SPacket{});
}