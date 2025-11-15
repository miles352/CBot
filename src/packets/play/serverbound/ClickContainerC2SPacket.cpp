#include "ClickContainerC2SPacket.hpp"

#include "conversions/StandardTypes.hpp"

ClickContainerC2SPacket::ClickContainerC2SPacket(int window_id, int state_id, int16_t slot, int8_t button, Mode mode, std::vector<int> changed_slots, int carried_item)
    : data(window_id, state_id, slot, button, mode, std::move(changed_slots), carried_item)
{

}

std::vector<uint8_t> ClickContainerC2SPacket::encode()
{
    std::vector<uint8_t> bytes = VarInt::to_bytes(this->data.window_id);
    std::vector<uint8_t> state_id = VarInt::to_bytes(this->data.state_id);
    std::vector<uint8_t> slot = StandardTypes::to_bytes<int16_t>(this->data.slot);
    std::vector<uint8_t> mode = VarInt::to_bytes(this->data.mode);

    bytes.insert(bytes.end(), state_id.begin(), state_id.end());
    bytes.insert(bytes.end(), slot.begin(), slot.end());
    bytes.push_back(static_cast<uint8_t>(this->data.button));
    bytes.insert(bytes.end(), mode.begin(), mode.end());
    bytes.push_back(0); // changed slots array size 0 because it is not implemented yet
    bytes.push_back(0); // hashed slot is not implemented, so 0 here means the slot does not have an item

    return bytes;
}

void ClickContainerC2SPacket::default_handler(Bot& bot, Event<ClickContainerC2SPacket>& event)
{
    // TODO: Update Inventory
}
