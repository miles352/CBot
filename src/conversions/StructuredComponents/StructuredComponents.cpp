#include "../VarInt.hpp"
#include "../Slot.hpp"
#include "../TextComponent.hpp"
#include "conversions/PrefixedArray.hpp"


void StructuredComponents::add(uint8_t*& bytes)
{
    int type = VarInt::from_bytes(bytes);
    auto component_id = static_cast<ComponentId>(type);
    printf("Component Id: %d\n", component_id);
    // This will crash if the reader isn't defined, but I don't think there's any way to skip a component because the size varies
    auto it = readers.find(component_id);
    if (it == readers.end())
    {
        throw std::runtime_error("Received unknown component id: " + std::to_string(static_cast<int>(component_id)));
    }
    this->values[component_id] = it->second(bytes);
}

std::unordered_map<StructuredComponents::ComponentId, std::function<StructuredComponents::ComponentTypes(uint8_t*&)>>
StructuredComponents::readers = {
    { ComponentId::DAMAGE, VarInt::from_bytes },
    { ComponentId::CUSTOM_DATA, NBT::read_root },
    { ComponentId::CUSTOM_NAME, TextComponent::from_string_bytes },
    { ComponentId::ENCHANTMENTS, EnchantmentComponent::from_bytes },
    { ComponentId::REPAIR_COST,  VarInt::from_bytes },
    { ComponentId::TRIM, TrimComponent::from_bytes },
    { ComponentId::FIREWORK, FireworkComponent::from_bytes },
    { ComponentId::CONTAINER, PrefixedArray::from_bytes_variable_typed<Slot> }
};
