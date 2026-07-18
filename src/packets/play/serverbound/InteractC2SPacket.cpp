#include "InteractC2SPacket.hpp"

#include <utility>

#include "conversions/StandardTypes.hpp"
#include "conversions/VarInt.hpp"


std::vector<uint8_t> InteractC2SPacket::encode()
{
    std::vector<uint8_t> bytes = VarInt::to_bytes(data.entity_id);

    auto type_bytes = VarInt::to_bytes(std::to_underlying(data.type));
    bytes.insert(bytes.end(), type_bytes.begin(), type_bytes.end());
    if (data.type == Type::INTERACT_AT)
    {
        if (!data.target.has_value())
            throw std::invalid_argument("Target must be supplied if Type is INTERACT_AT.");
        auto target_bytes = data.target->to_bytes();
        bytes.insert(bytes.end(), target_bytes.begin(), target_bytes.end());
    }
    if (data.type == Type::INTERACT || data.type == Type::INTERACT_AT)
    {
        if (!data.offhand.has_value())
            throw std::invalid_argument("Offhand must be supplied if Type is INTERACT or INTERACT_AT.");
        auto hand_bytes = VarInt::to_bytes(*data.offhand);
        bytes.insert(bytes.end(), hand_bytes.begin(), hand_bytes.end());
    }
    bytes.push_back(data.sneaking);

    return bytes;
}
