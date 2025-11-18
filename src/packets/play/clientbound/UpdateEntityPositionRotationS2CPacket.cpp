#include "UpdateEntityPositionRotationS2CPacket.hpp"

#include "conversions/StandardTypes.hpp"
#include "conversions/VarInt.hpp"

static constexpr float BYTE_TO_DEGREES = 360.0 / 256.0;

UpdateEntityPositionRotationS2CPacket::UpdateEntityPositionRotationS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.entity_id = VarInt::from_bytes(bytes);
    this->data.position_delta.x = static_cast<double>(StandardTypes::from_bytes<int16_t>(bytes)) / 4096;
    this->data.position_delta.y = static_cast<double>(StandardTypes::from_bytes<int16_t>(bytes)) / 4096;
    this->data.position_delta.z = static_cast<double>(StandardTypes::from_bytes<int16_t>(bytes)) / 4096;
    this->data.yaw = *(bytes++) * BYTE_TO_DEGREES;
    this->data.pitch = *(bytes++) * BYTE_TO_DEGREES;
    this->data.on_ground = StandardTypes::from_bytes<bool>(bytes);

    event_bus.emit<UpdateEntityPositionRotationS2CPacket>(this->data);
}
