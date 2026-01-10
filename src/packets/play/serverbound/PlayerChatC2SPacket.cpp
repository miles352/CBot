#include "PlayerChatC2SPacket.hpp"

#include "conversions/MCString.hpp"
#include "conversions/StandardTypes.hpp"

PlayerChatC2SPacket::PlayerChatC2SPacket(std::string message, int64_t timestamp, int64_t salt)
    : data(std::move(message), timestamp, salt) {};

std::vector<uint8_t> PlayerChatC2SPacket::encode()
{
    std::vector<uint8_t> bytes = MCString::to_bytes(this->data.message);
    auto timestamp = StandardTypes::to_bytes<int64_t>(this->data.timestamp);
    auto salt = StandardTypes::to_bytes<int64_t>(this->data.salt);

    // bytes.append_range(timestamp);
    // bytes.append_range(salt);
    bytes.insert(bytes.end(), timestamp.begin(), timestamp.end());
    bytes.insert(bytes.end(), salt.begin(), salt.end());
    bytes.push_back(0); // prefixed signature (false, so no signature)

    bytes.push_back(0); // amount of previous messages seen

    bytes.push_back(0); // 3 bytes for empty 20 bit acknowledge set
    bytes.push_back(0);
    bytes.push_back(0);

    bytes.push_back(0); // checksum

    return bytes;
}

void PlayerChatC2SPacket::default_handler(Bot& bot, Event<PlayerChatC2SPacket>& event)
{
    // TODO: Store chat messages for the signing stuff
}
