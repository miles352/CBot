#include "KeepAliveC2SPacket.hpp"

#include <cstdio>

#include "conversions/StandardTypes.hpp"

KeepAliveC2SPacket::KeepAliveC2SPacket(int64_t keep_alive_id)
{
    this->data.keep_alive_id = keep_alive_id;
}

std::vector<uint8_t> KeepAliveC2SPacket::encode()
{
    std::vector<uint8_t> result = StandardTypes::to_bytes<int64_t>(this->data.keep_alive_id);
    return result;
}

