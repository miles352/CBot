#include "PlayerCommandC2SPacket.hpp"

PlayerCommandC2SPacket::PlayerCommandC2SPacket(int entity_id, Action action, int jump_boost) : data(entity_id, action, jump_boost)
{

}

std::vector<uint8_t> PlayerCommandC2SPacket::encode()
{
    std::vector<uint8_t> bytes = VarInt::to_bytes(this->data.entity_id);
    std::vector<uint8_t> action = VarInt::to_bytes(static_cast<int>(this->data.action));
    std::vector<uint8_t> jump_boost = VarInt::to_bytes(this->data.jump_boost);
    bytes.insert(bytes.end(), action.begin(), action.end());
    bytes.insert(bytes.end(), jump_boost.begin(), jump_boost.end());
    return bytes;
}
