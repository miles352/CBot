#include "UpdateEntityPositionS2CPacket.hpp"

#include "conversions/StandardTypes.hpp"
#include "conversions/VarInt.hpp"

UpdateEntityPositionS2CPacket::UpdateEntityPositionS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.entity_id = VarInt::from_bytes(bytes);
    // fixed point number with 12 fraction bits. 1 << 12 = 4096
    this->data.position_delta.x = static_cast<double>(StandardTypes::from_bytes<int16_t>(bytes)) / 4096;
    this->data.position_delta.y = static_cast<double>(StandardTypes::from_bytes<int16_t>(bytes)) / 4096;
    this->data.position_delta.z = static_cast<double>(StandardTypes::from_bytes<int16_t>(bytes)) / 4096;
    this->data.on_ground = StandardTypes::from_bytes<bool>(bytes);

    event_bus.emit<UpdateEntityPositionS2CPacket>(this->data);
}
