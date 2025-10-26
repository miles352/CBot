#include "PlayerInfoUpdateS2CPacket.hpp"

#include <variant>

#include "conversions/PlayerTabActions.hpp"
#include "conversions/PrefixedArray.hpp"
#include "conversions/UUID.hpp"



PlayerInfoUpdateS2CPacket::PlayerInfoUpdateS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    uint8_t* bytes = data.data();
    this->data.actions = StandardTypes::from_bytes<uint8_t>(bytes);
    // Cannot use PrefixedArray helpers here because the actions EnumSet is needed to decode each action
    int length = VarInt::from_bytes(bytes);
    for (int i = 0; i < length; i++)
    {
        this->data.player_actions.push_back(PlayerTabActions::from_bytes(bytes, this->data.actions));
    }

    event_bus.emit<PlayerInfoUpdateS2CPacket>(this->data);
}
