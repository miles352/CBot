#pragma once

#include "packets/ServerboundPacket.hpp"

#include <string>

class HandshakeC2SPacket : public ServerboundPacket
{
    public:
    enum HandshakeIntent
    {
        STATUS = 1,
        LOGIN = 2,
        TRANSFER = 3
    };

    static const int id = 0x00;

    HandshakeC2SPacket(int protocol_version, const std::string& server_address, const std::string& server_port, HandshakeIntent intent);

    using Data = struct
    {
        int protocol_version;
        std::string server_address;
        std::string server_port;
        HandshakeIntent intent;
    };

    Data data{};

    std::vector<uint8_t> encode() override;
    int get_id() const override { return this->id; };
};