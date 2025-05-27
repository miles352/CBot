// every packet type includes encode and parse method.

#include <cstdint>
#include <vector>


struct Packet
{
    int id;
    std::vector<uint8_t> data;
    Packet(int id, std::vector<uint8_t> data) : id(id), data(data) {};
};