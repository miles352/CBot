#include "RegistryDataS2CPacket.hpp"

#include "conversions/MCString.hpp"

RegistryDataS2CPacket::RegistryDataS2CPacket(std::vector<uint8_t> data, EventBus &event_bus)
{
    uint8_t* bytes = data.data();
    std::string registry_id = MCString::from_bytes(bytes);
    printf("Registry Id: %s\n", registry_id.c_str());
}
