#include "packets/configuration/KnownPacksS2CPacket.hpp"

#include "KnownPacksC2SPacket.hpp"


KnownPacksS2CPacket::KnownPacksS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    event_bus.emit<KnownPacksS2CPacket>(this->data);
    // need to be typed and be generic / cancellable

    // emit should be typed
    // .on should take the generic struct containing the typed data and the cancel method
}

void KnownPacksS2CPacket::default_handler(Bot& bot, Data data)
{
    bot.network_handler->write_packet(std::make_unique<KnownPacksC2SPacket>());
}