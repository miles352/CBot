// every packet type includes encode and parse method.

#include <cstdint>


#include "conversions/VarInt.hpp"

class Packet
{
    std::vector<uint8_t> length;
    std::vector<uint8_t> id;
    std::vector<uint8_t> data;

    Packet(int id, std::vector<uint8_t> data);

    virtual std::vector<uint8_t> encode() = 0;

};