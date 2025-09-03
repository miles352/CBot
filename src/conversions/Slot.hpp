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
        printf("Item count: %d\n", slot.item_count);
        if (slot.item_count > 0)
        {
            ItemData item_data{};
            item_data.item_id = VarInt::from_bytes(bytes);
            item_data.num_components_to_add = VarInt::from_bytes(bytes);
            item_data.num_components_to_remove = VarInt::from_bytes(bytes);
            printf("Item id: %d, add: %d, remove: %d\n", item_data.item_id, item_data.num_components_to_add, item_data.num_components_to_remove);
            if (item_data.item_id < ItemRegistry.size())
            {
                printf("Item name: %s\n", ItemRegistry[item_data.item_id]->get_name().c_str());
            }
            for (int i = 0; i < item_data.num_components_to_add; i++)
           {
                // int type = VarInt::from_bytes(bytes);
                // printf("Read structured component with id: %d\n", type);

                item_data.components_to_add.add(bytes);
                // StructuredComponents::ComponentTypes comp = item_data.components_to_add.values[StructuredComponents::ComponentId::CUSTOM_NAME];
                // if (const NBT::TagCompound* name = std::get_if<NBT::TagCompound>(&comp))
                // {
                //     // printf("Custom name: %s\n", name->get().c_str());
                //     printf("printing\n");
                //     fflush(stdout);
                //     std::string nbt_string = name->to_string();
                //     printf("%s\n", nbt_string.c_str());
                //     // for (auto it = name->data.begin(); it != name->data.end(); it++)
                //     // {
                //     //     // printf("NBT: %s\n", it->first.c_str());
                //     //     // printf("INdex: %d\n", it->second.index());
                //     // }
                // }
                // else if (const int* damage = std::get_if<int>(&comp))
                // {
                //     printf("Damage: %d\n", *damage);
                // }

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
