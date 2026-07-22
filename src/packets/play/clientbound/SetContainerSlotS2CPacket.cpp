#include "SetContainerSlotS2CPacket.hpp"

#include "Bot.hpp"

SetContainerSlotS2CPacket::SetContainerSlotS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.window_id = VarInt::from_bytes(bytes);
    this->data.state_id = VarInt::from_bytes(bytes);
    this->data.slot = StandardTypes::from_bytes<int16_t>(bytes);
    this->data.slot_data = Slot::from_bytes(bytes);

    event_bus.emit<SetContainerSlotS2CPacket>(this->data);
}

#ifndef NO_REGISTRY
void SetContainerSlotS2CPacket::default_handler(Bot& bot, Event<SetContainerSlotS2CPacket>& event)
{
    // TODO: Implement other container ids
    if (event.data.window_id == 0) // Player inventory window id
    {
        bot.inventory.player_slots[event.data.slot] = InventorySlot{event.data.slot_data};
    }
    else if (event.data.window_id == -1) // Mouse slot updated
    {
        bot.inventory.carried_slot = InventorySlot{event.data.slot_data};
    }
    // else if (event.data.window_id == -2) // Pick Item
    // {
    //     bot.inventory.player_slots[event.data.slot] = InventorySlot{event.data.slot_data};
    // }
}
#endif
