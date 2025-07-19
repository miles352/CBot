#include "KeepAliveC2SPacket.hpp"

#include <cstdio>

KeepAliveC2SPacket::KeepAliveC2SPacket(long keep_alive_id)
{
    this->data.keep_alive_id = keep_alive_id;
}

std::vector<uint8_t> KeepAliveC2SPacket::encode()
{
    std::vector<uint8_t> long_bytes;

    for (int i = 0; i < 8; i++)
    {
        long_bytes.emplace_back(static_cast<uint8_t>(this->data.keep_alive_id >> 8 * (7 - i)));
    }

    printf("returning from keep alive %d\n", long_bytes.size());

    return long_bytes;
}

