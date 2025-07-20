#pragma once

#include <cmath>
#include <format>

template <typename T>
class Vec3
{
public:
    T x;
    T y;
    T z;

    [[nodiscard]] double length() const
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    [[nodiscard]] Vec3<T> scale(T scale) const
    {
        return Vec3<T>(x * scale, y * scale, z * scale);
    }

    [[nodiscard]] T dot(const Vec3<T>& other) const
    {
        return x * other.x + y * other.y + z * other.z;
    }

    [[nodiscard]] T dot(int x, int y, int z) const
    {
        return this->x * x + this->y * y + this->z * z;
    }

    [[nodiscard]] Vec3<T> cross(const Vec3<T>& other) const
    {
        return Vec3<T>(y * other.z - z * other.y, -(x * other.z - z * other.x), x * other.y - y * other.x);
    }

    [[nodiscard]] Vec3<T> cross(int x, int y, int z) const
    {
        return Vec3<T>(this->y * z - this->z * y, -(this->x * z - this->z * x), this->x * y - this->y * x);
    }

    [[nodiscard]] Vec3<T> add(const Vec3<T>& other) const
    {
        return Vec3<T>(x + other.x, y + other.y, z + other.z);
    }

    [[nodiscard]] Vec3<T> add(int x, int y, int z) const
    {
        return Vec3<T>(this->x + x, this->y + y, this->z + z);
    }

    [[nodiscard]] Vec3<T> subtract(const Vec3<T>& other) const
    {
        return Vec3<T>(x - other.x, y - other.y, z - other.z);
    }

    [[nodiscard]] Vec3<T> subtract(int x, int y, int z) const
    {
        return Vec3<T>(this->x - x, this->y - y, this->z - z);
    }

    [[nodiscard]] Vec3<T> normalize() const
    {
        return this->scale(1 / this->length());
    }

    [[nodiscard]] std::string to_string() const
    {
        return std::format("({}, {}, {})", this->x, this->y, this->z);
    }

    [[nodiscard]] bool operator==(const Vec3& other) const = default;

    [[nodiscard]] Vec3<T> operator+(const Vec3<T>& other) const
    {
        return this->add(other);
    }

    [[nodiscard]] Vec3<T> operator-(const Vec3<T>& other) const
    {
        return this->subtract(other);
    }
};



using Vec3d = Vec3<double>;
using Vec3f = Vec3<float>;
using Vec3i = Vec3<int>;
