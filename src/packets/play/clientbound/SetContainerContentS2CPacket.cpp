#include "SetContainerContentS2CPacket.hpp"

#include "Bot.hpp"
#include "conversions/PrefixedArray.hpp"
#include "conversions/VarInt.hpp"

SetContainerContentS2CPacket::SetContainerContentS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus)
{
    const uint8_t* ptr = data.data();
    this->data.window_id = VarInt::from_bytes(ptr);
    this->data.state_id = VarInt::from_bytes(ptr);
    this->data.slot_data = PrefixedArray::from_bytes_variable_typed<Slot>(ptr);
    this->data.carried_item = Slot::from_bytes(ptr);

    event_bus.emit<SetContainerContentS2CPacket>(this->data);
}

#ifndef NO_REGISTRY
void SetContainerContentS2CPacket::default_handler(Bot& bot, Event<SetContainerContentS2CPacket>& event)
{
    if (event.data.window_id == 0) // Player inventory window id
    {
        std::vector<Slot>& data = event.data.slot_data;
        for (int i = 0; i < data.size(); i++)
        {
            bot.inventory.player_slots[i] = InventorySlot(data[i]);
        }
    }
    bot.inventory.carried_slot = InventorySlot(event.data.carried_item);
}
#endif
