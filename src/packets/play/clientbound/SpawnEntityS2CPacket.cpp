#include "SpawnEntityS2CPacket.hpp"

#include "conversions/VarInt.hpp"

static constexpr float BYTE_TO_DEGREES = 360.0 / 256.0;
static constexpr double SHORT_TO_BLOCKS_PER_TICK = 1.0 / 8000.0;

SpawnEntityS2CPacket::SpawnEntityS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    const uint8_t* bytes = data.data();
    this->data.entity_id = VarInt::from_bytes(bytes);
    this->data.entity_uuid = UUID::from_bytes(bytes);
    this->data.entity_type = VarInt::from_bytes(bytes);
    this->data.position.x = StandardTypes::from_bytes<double>(bytes);
    this->data.position.y = StandardTypes::from_bytes<double>(bytes);
    this->data.position.z = StandardTypes::from_bytes<double>(bytes);
    this->data.pitch = *(bytes++) * BYTE_TO_DEGREES;
    this->data.yaw = *(bytes++) * BYTE_TO_DEGREES;
    this->data.head_yaw = *(bytes++) * BYTE_TO_DEGREES;
    this->data.data = VarInt::from_bytes(bytes);
    this->data.velocity.x = StandardTypes::from_bytes<int16_t>(bytes) * SHORT_TO_BLOCKS_PER_TICK;
    this->data.velocity.y = StandardTypes::from_bytes<int16_t>(bytes) * SHORT_TO_BLOCKS_PER_TICK;
    this->data.velocity.z = StandardTypes::from_bytes<int16_t>(bytes) * SHORT_TO_BLOCKS_PER_TICK;

    event_bus.emit<SpawnEntityS2CPacket>(this->data);
}
