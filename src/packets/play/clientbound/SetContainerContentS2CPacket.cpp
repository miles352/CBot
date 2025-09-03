#include "SetContainerContentS2CPacket.hpp"

#include "conversions/PrefixedArray.hpp"
#include "conversions/VarInt.hpp"

SetContainerContentS2CPacket::SetContainerContentS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    printf("Set container packet!\n");
    uint8_t* ptr = data.data();
    this->data.window_id = VarInt::from_bytes(ptr);
    this->data.state_id = VarInt::from_bytes(ptr);
    this->data.slot_data = PrefixedArray::from_bytes_variable_typed<Slot>(ptr);
    this->data.carried_item = Slot::from_bytes(ptr);
}

void SetContainerContentS2CPacket::default_handler(Bot& bot, Event<SetContainerContentS2CPacket>& event)
{

}

