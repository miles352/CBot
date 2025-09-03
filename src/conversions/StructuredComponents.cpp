#include "StructuredComponents.hpp"

#include "VarInt.hpp"
#include "Slot.hpp"

EnchantmentComponent EnchantmentComponent::from_bytes(uint8_t*& bytes)
{
    int count = VarInt::from_bytes(bytes);
    EnchantmentComponent component;
    for (int i = 0; i < count; i++)
    {
        int id = VarInt::from_bytes(bytes);
        int level = VarInt::from_bytes(bytes);
        component.enchantments[static_cast<Enchantment>(id)] = level;
    }
    return component;
}

void StructuredComponents::add(uint8_t*& bytes)
{
    int x = VarInt::from_bytes(bytes);
    ComponentId component_id = static_cast<ComponentId>(x);
    printf("Component Id: %d\n", component_id);
    this->values[component_id] = readers[component_id](bytes);
}

std::unordered_map<StructuredComponents::ComponentId, std::function<StructuredComponents::ComponentTypes(uint8_t*&)>>
StructuredComponents::readers = {
    { ComponentId::DAMAGE, VarInt::from_bytes },
    { ComponentId::CUSTOM_DATA, NBT::read_root },
    { ComponentId::CUSTOM_NAME, TextComponent::from_string_bytes },
    { ComponentId::ENCHANTMENTS, EnchantmentComponent::from_bytes },
    { ComponentId::REPAIR_COST,  VarInt::from_bytes },
    { ComponentId::TRIM, Trim::from_bytes },
    { ComponentId::CONTAINER, PrefixedArray::from_bytes_variable_typed<Slot> }
};

