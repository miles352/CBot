#pragma once

#include <vector>
#include <cstdint>

class ServerboundPacket
{
    public:
    virtual ~ServerboundPacket() = default;

    // static constexpr int id = packet-id;
    virtual int get_id() const = 0;
    virtual std::vector<uint8_t> encode() = 0;

    // using Data = struct
    // {
        // the data
    // };

    // Data data{};

    // Set data to these
    // PacketName(int Param1, String Param2)

    // Optional default handler for the packet:
    // static void default_handler(Bot& bot, Event<PacketName>& event);
    // static void default_handler(Bot& bot); is also valid

    protected:
    ServerboundPacket() = default;
};   