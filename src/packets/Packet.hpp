#pragma once

#include <cstdint>
#include <vector>


class Packet
{
    public:
    int id;
    std::vector<uint8_t> data;
    Packet(int id, std::vector<uint8_t> data) : id(id), data(data) {};
    Packet() = default;
};