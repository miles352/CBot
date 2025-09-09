#pragma once
#include <cstdint>
#include <optional>
#include <vector>

#include "StructuredComponents.hpp"
#include "VarInt.hpp"
#include "registry/ItemRegistryGenerated.hpp"

struct ItemData
{
    int item_id;
    int num_components_to_add;
    int num_components_to_remove;
    StructuredComponents components_to_add;
    // std::vector<StructuredComponents> components_to_remove;
};

class Slot
{
public:
    int item_count{};

    std::optional<ItemData> item_data;

    static Slot from_bytes(uint8_t*& bytes)
    {
        Slot slot;

        slot.item_count = VarInt::from_bytes(bytes);
        // printf("Item count: %d\n", slot.item_count);
        if (slot.item_count > 0)
        {
            ItemData item_data{};
            item_data.item_id = VarInt::from_bytes(bytes);
            // printf("Item name: %s\n", ItemRegistry[item_data.item_id]->get_name().c_str());
            item_data.num_components_to_add = VarInt::from_bytes(bytes);
            item_data.num_components_to_remove = VarInt::from_bytes(bytes);
            if (item_data.num_components_to_remove > 0)
            {
                printf("Num components to remove!! %d\n", item_data.num_components_to_remove);
            }
           // printf("Item id: %d, add: %d, remove: %d\n", item_data.item_id, item_data.num_components_to_add, item_data.num_components_to_remove);
           for (int i = 0; i < item_data.num_components_to_add; i++)
           {
                item_data.components_to_add.add(bytes);
           }
            // for (int i = 0; i < item_data.num_components_to_remove; i++)
            // {
            //     item_data.components_to_remove.emplace_back(static_cast<StructuredComponents>(VarInt::from_bytes(bytes)));
            // }
            slot.item_data = item_data;
        }

        return slot;
    }
};
