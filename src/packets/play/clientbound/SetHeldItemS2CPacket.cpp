#include "packets/play/clientbound/SetHeldItemS2CPacket.hpp"

#include "conversions/VarInt.hpp"
#include "Bot.hpp"

SetHeldItemS2CPacket::SetHeldItemS2CPacket(std::vector<uint8_t> data, EventBus &event_bus)
{
    uint8_t* ptr = data.data();
    this->data.slot = VarInt::from_bytes(ptr);

    event_bus.emit<SetHeldItemS2CPacket>(this->data);
}

void SetHeldItemS2CPacket::default_handler(Bot& bot, Event<SetHeldItemS2CPacket>& event)
{
    bot.inventory.hotbar_slot = event.data.slot;
}
