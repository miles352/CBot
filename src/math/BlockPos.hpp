#pragma once
#include "Vec3.hpp"

class BlockPos : public Vec3i
{
public:
    template <typename T>
    BlockPos(Vec3<T> vec) : Vec3i(std::floor(vec.x), std::floor(vec.y), std::floor(vec.z)) {};
    BlockPos(int x, int y, int z) : Vec3i(x, y, z) {};
    BlockPos() : Vec3i() {};
};