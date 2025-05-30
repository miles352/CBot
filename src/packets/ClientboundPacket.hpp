#pragma once

#include "packets/Packet.hpp"
#include <memory>
#include <vector>

class ClientboundPacket : public Packet
{
    public:
    virtual int get_id() const = 0;
    
    /** The size in bytes of the data in the packet. */
    int size;

    protected:
    ClientboundPacket() = default;
};