#include "DisconnectS2CPacket.hpp"

#include "conversions/MCString.hpp"
#include "libs/nbt.hpp"

DisconnectS2CPacket::DisconnectS2CPacket(std::vector<uint8_t> data, EventBus &event_bus)
{
    uint8_t* bytes = data.data();
    // printf("Size: %lu\n", data.size());
    std::string reason = MCString::from_bytes(bytes);
    // printf("Disconnect msg: %s\n", reason.c_str());
    // printf("Size: %d\n", reason.size());
}
