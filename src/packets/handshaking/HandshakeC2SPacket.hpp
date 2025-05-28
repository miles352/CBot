#pragma once

#include "packets/Packet.hpp"

#include <string>

class HandshakeC2SPacket : public Packet
{
    public:
    enum HandshakeIntent
    {
        STATUS = 1,
        LOGIN = 2,
        TRANSFER = 3
    };

    HandshakeC2SPacket(int protocol_version, const std::string& server_address, const std::string& server_port, HandshakeIntent intent);
};