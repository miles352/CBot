#include "Inventory.hpp"

Inventory::Inventory() : player_slots({}), carried_slot(), hotbar_slot(0)
{

}

const InventorySlot& Inventory::get_held_slot() const
{
    return this->player_slots[36 + this->hotbar_slot];
}
