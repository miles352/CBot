#pragma once
#include <array>

#include "conversions/Slot.hpp"

class Inventory
{
public:
    Inventory();
    /** The 46 slots of the players inventory. */
    std::array<Slot, 46> player_slots;
    /** The slot that is being held by the mouse. */
    Slot carried_slot;
    /** The slot of the hotbar that is equipped, 0-8. */
    int hotbar_slot;
};
