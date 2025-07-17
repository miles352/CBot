#pragma once

class ClientboundPacket
{
    public:
    virtual ~ClientboundPacket() = default;

    virtual int get_id() const = 0;

    /** The size in bytes of the data in the packet. */
    int size;

    // Possibly methods/members:

    // static constexpr int id = packet-id

    //  PacketName(std::vector<uint8_t> data, EventBus& event_bus);

    // using Data = struct
    //{
    //      Whatever data that gets decoded from the bytes
    //};

    // Data data;

    // Optional default handler for the packet:
    // static void default_handler(Bot& bot, Data data);
    // static void default_handler(Bot& bot); is also valid



    protected:
    ClientboundPacket() = default;
};