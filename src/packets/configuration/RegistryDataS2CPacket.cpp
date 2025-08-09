#include "RegistryDataS2CPacket.hpp"

#include "conversions/MCString.hpp"
#include "conversions/PrefixedArray.hpp"

RegistryDataS2CPacket::RegistryDataS2CPacket(std::vector<uint8_t> data, EventBus &event_bus)
{
    uint8_t* bytes = data.data();
    this->data.registry_id = MCString::from_bytes(bytes);
    printf("Registry Id: %s\n", this->data.registry_id.c_str());
    // this->data.entries = PrefixedArray::from_bytes_variable_typed<RegistryEntry>(bytes);

    event_bus.emit<RegistryDataS2CPacket>(this->data);
}

void RegistryDataS2CPacket::default_handler(Bot& bot, Event<RegistryDataS2CPacket>& event)
{

}
