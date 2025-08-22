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

    [[nodiscard]] double length_squared() const
    {
        return x * x + y * y + z * z;
    }

    [[nodiscard]] double distance_to_squared(const Vec3<T>& other)
    {
        return std::pow(other.x - this->x, 2.0) + std::pow(other.y - this->y, 2.0) + std::pow(other.z - this->z, 2.0);
    }

    [[nodiscard]] Vec3<T> scale(T scale) const
    {
        return Vec3<T>(x * scale, y * scale, z * scale);
    }

    [[nodiscard]] T dot(const Vec3<T>& other) const
    {
        return x * other.x + y * other.y + z * other.z;
    }

    [[nodiscard]] T dot(T x, T y, T z) const
    {
        return this->x * x + this->y * y + this->z * z;
    }

    [[nodiscard]] Vec3<T> cross(const Vec3<T>& other) const
    {
        return Vec3<T>(y * other.z - z * other.y, -(x * other.z - z * other.x), x * other.y - y * other.x);
    }

    [[nodiscard]] Vec3<T> cross(const T x, const T y, const T z) const
    {
        return Vec3<T>(this->y * z - this->z * y, -(this->x * z - this->z * x), this->x * y - this->y * x);
    }

    [[nodiscard]] Vec3<T> multiply(const Vec3<T>& other) const
    {
        return Vec3<T>(this->x * other.x, this->y * other.y, this->z * other.z);
    }

    [[nodiscard]] Vec3<T> multiply(const T x, const T y, const T z) const
    {
        return Vec3<T>(this->x * x, this->y * y, this->z * z);
    }

    [[nodiscard]] Vec3<T> add(const Vec3<T>& other) const
    {
        return Vec3<T>(x + other.x, y + other.y, z + other.z);
    }

    [[nodiscard]] Vec3<T> add(T x, T y, T z) const
    {
        return Vec3<T>(this->x + x, this->y + y, this->z + z);
    }

    [[nodiscard]] Vec3<T> subtract(const Vec3<T>& other) const
    {
        return Vec3<T>(x - other.x, y - other.y, z - other.z);
    }

    [[nodiscard]] Vec3<T> subtract(T x, T y, T z) const
    {
        return Vec3<T>(this->x - x, this->y - y, this->z - z);
    }

    [[nodiscard]] Vec3<T> normalize() const
    {
        return this->scale(1 / this->length());
    }

    [[nodiscard]] Vec3<T> up(int amount = 1) const
    {
        return Vec3<T>(this->x, this->y + amount, this->z);
    }

    [[nodiscard]] Vec3<T> down(int amount = 1) const
    {
        return Vec3<T>(this->x, this->y - amount, this->z);
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
