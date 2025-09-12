#include "PlayerInputC2SPacket.hpp"

PlayerInputC2SPacket::PlayerInputC2SPacket(bool forward, bool backward, bool left, bool right, bool jump, bool sneak, bool sprint)
{
    this->data = {
        forward,
        backward,
        left,
        right,
        jump,
        sneak,
        sprint
    };
}

std::vector<uint8_t> PlayerInputC2SPacket::encode()
{
    uint8_t result = 0;
    result |= this->data.forward * 0x01;
    result |= this->data.backward * 0x02;
    result |= this->data.left * 0x04;
    result |= this->data.right * 0x08;
    result |= this->data.jump * 0x10;
    result |= this->data.sneak * 0x20;
    result |= this->data.sprint * 0x40;
    return { result };
}
