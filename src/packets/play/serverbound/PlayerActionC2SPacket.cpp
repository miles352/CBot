#include "PlayerActionC2SPacket.hpp"

#include "conversions/Position.hpp"
#include "conversions/VarInt.hpp"

PlayerActionC2SPacket::PlayerActionC2SPacket(ActionStatus status, BlockPos position, BlockFace face, int sequence)
{
    this->data.status = status;
    this->data.position = position;
    this->data.face = face;
    this->data.sequence = sequence;
}

std::vector<uint8_t> PlayerActionC2SPacket::encode()
{
    std::vector<uint8_t> result = VarInt::to_bytes(static_cast<int>(this->data.status));
    std::vector<uint8_t> position_bytes = Position::to_bytes(this->data.position);
    std::vector<uint8_t> face_bytes = StandardTypes::to_bytes<int8_t>(static_cast<int8_t>(this->data.face));
    std::vector<uint8_t> sequence_bytes = VarInt::to_bytes(this->data.sequence);

    result.insert(result.end(), position_bytes.begin(), position_bytes.end());
    result.insert(result.end(), face_bytes.begin(), face_bytes.end());
    result.insert(result.end(), sequence_bytes.begin(), sequence_bytes.end());

    return result;
}
