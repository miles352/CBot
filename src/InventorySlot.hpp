#pragma once
#include "ItemStack.hpp"
// #include "conversions/StructuredComponents.hpp"
#include "conversions/Slot.hpp"

struct ItemData;

/** Stores the same information as conversions/Slot.hpp, but in a more user-friendly way */
class InventorySlot
{
public:
    explicit InventorySlot(Slot& slot);
    InventorySlot();

    const ItemStack* item;
    StructuredComponents components;
};