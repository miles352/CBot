#ifndef NO_REGISTRY

#include "InventorySlot.hpp"

#include "registry/ItemRegistryGenerated.hpp"

InventorySlot::InventorySlot(const Slot& slot)
{
    if (slot.item_count == 0 || !slot.item_data.has_value())
    {
        this->item = &Items::AIR;
    }
    else
    {
        const ItemData& data = slot.item_data.value();
        this->item = &Items::ItemRegistry[data.item_id];
        this->components = data.components_to_add; // TODO: Subtract removed components if they ever get used
    }
}

InventorySlot::InventorySlot()
{
    this->item = &Items::AIR;
}

#endif