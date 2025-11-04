#include "packets/configuration/clientbound/RegistryDataS2CPacket.hpp"

#include "conversions/MCString.hpp"
#include "conversions/PrefixedArray.hpp"

RegistryDataS2CPacket::RegistryDataS2CPacket(const std::vector<uint8_t>& data, EventBus &event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.registry_id = MCString::from_bytes(bytes);

    this->data.entries = PrefixedArray::from_bytes_variable_typed<RegistryEntry>(bytes);

    event_bus.emit<RegistryDataS2CPacket>(this->data);
}

void RegistryDataS2CPacket::default_handler(Bot& bot, Event<RegistryDataS2CPacket>& event)
{
    if (event.data.registry_id == "minecraft:dimension_type")
    {
        bot.world._dimension_types = event.data.entries;
    }
}
