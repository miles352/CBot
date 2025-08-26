#pragma once
#include "Vec3.hpp"

class BlockPos : public Vec3i
{
public:
    template <typename T>
    BlockPos(Vec3<T> vec) : Vec3i(std::floor(vec.x), std::floor(vec.y), std::floor(vec.z)) {};
    BlockPos(int x, int y, int z) : Vec3i(x, y, z) {};
    BlockPos() : Vec3i() {};

    /** Returns a vector of the block position with the x and z positions increased by 0.5 */
    [[nodiscard]] Vec3d to_center_pos() const
    {
        return Vec3d(this->x + 0.5, this->y, this->z + 0.5);
    }
};