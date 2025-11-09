#pragma once

#ifndef NO_REGISTRY

#include "ItemStack.hpp"
#include "conversions/Slot.hpp"

struct ItemData;

/** Stores the same information as conversions/Slot.hpp, but in a more user-friendly way */
class InventorySlot
{
public:
    explicit InventorySlot(const Slot& slot);
    InventorySlot();

    const ItemStack* item;
    StructuredComponents components;
};

#endif