#include "SetHeldItemC2SPacket.hpp"

#include "conversions/StandardTypes.hpp"
#include "Bot.hpp"

SetHeldItemC2SPacket::SetHeldItemC2SPacket(int16_t slot)
{
    this->data.slot = slot;
}

std::vector<uint8_t> SetHeldItemC2SPacket::encode()
{
    return StandardTypes::to_bytes<int16_t>(this->data.slot);
}

void SetHeldItemC2SPacket::default_handler(Bot& bot, Event<SetHeldItemC2SPacket>& event)
{
    bot.inventory.hotbar_slot = event.data.slot;
}
