#pragma once

#include "BlockPos.hpp"
#include "Vec3.hpp"

/** An Axis-Aligned Bounding Box */
class Box
{
public:
    Vec3d min;
    Vec3d max;

    Box(Vec3d min, Vec3d max) : min(min), max(max) {};
    explicit Box(BlockPos min) : min({(double)min.x, (double)min.y, (double)min.z}), max({ (double)(min.x + 1), (double)(min.y + 1), (double)(min.z + 1) }) {};

    Box stretch(const Vec3d& scale) const;

    Box stretch(double x, double y, double z) const;

    Box offset(const Vec3d& offset) const;

    Box offset(double x, double y, double z) const;

    Box expand(double value) const;

    Box expand(double x, double y, double z ) const;

    bool intersects (const Box& box) const;
};