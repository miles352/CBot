#pragma once

#ifndef NO_REGISTRY

#include <array>

#include "InventorySlot.hpp"

class Inventory
{
public:
    Inventory();
    /** The 46 slots of the players inventory. */
    std::array<InventorySlot, 46> player_slots;
    /** The slot that is being held by the mouse. */
    InventorySlot carried_slot;
    /** The slot of the hotbar that is equipped, 0-8. */
    int hotbar_slot;

    /** Returns the InventorySlot of the currently selected hotbar slot. */
    const InventorySlot& get_held_slot() const;
};

#endif
