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

    [[nodiscard]] constexpr double length() const
    {
        return std::sqrt(x * x + y * y + z * z);
    }

    [[nodiscard]] constexpr double horizontal_length() const
    {
        return std::sqrt(x * x + z * z);
    }

    [[nodiscard]] constexpr double length_squared() const
    {
        return x * x + y * y + z * z;
    }

    [[nodiscard]] constexpr double horizontal_length_squared() const
    {
        return x * x + z * z;
    }

    [[nodiscard]] constexpr double distance_to_squared(const Vec3<T>& other) const
    {
        return std::pow(other.x - this->x, 2.0) + std::pow(other.y - this->y, 2.0) + std::pow(other.z - this->z, 2.0);
    }

    [[nodiscard]] constexpr double horizontal_distance_to_squared(const Vec3<T>& other) const
    {
        return std::pow(other.x - this->x, 2.0) + std::pow(other.z - this->z, 2.0);
    }

    [[nodiscard]] constexpr double distance_to(const Vec3<T>& other) const
    {
        return std::sqrt(std::pow(other.x - this->x, 2.0) + std::pow(other.y - this->y, 2.0) + std::pow(other.z - this->z, 2.0));
    }

    [[nodiscard]] constexpr double manhattan_distance_to(const Vec3<T>& other) const
    {
        return std::abs(other.x - this->x) + std::abs(other.y - this->y) + std::abs(other.z - this->z);
    }

    [[nodiscard]] constexpr Vec3<T> scale(T scale) const
    {
        return Vec3<T>(x * scale, y * scale, z * scale);
    }

    [[nodiscard]] constexpr T dot(const Vec3<T>& other) const
    {
        return x * other.x + y * other.y + z * other.z;
    }

    [[nodiscard]] constexpr T dot(T x, T y, T z) const
    {
        return this->x * x + this->y * y + this->z * z;
    }

    [[nodiscard]] constexpr Vec3<T> cross(const Vec3<T>& other) const
    {
        return Vec3<T>(y * other.z - z * other.y, -(x * other.z - z * other.x), x * other.y - y * other.x);
    }

    [[nodiscard]] constexpr Vec3<T> cross(const T x, const T y, const T z) const
    {
        return Vec3<T>(this->y * z - this->z * y, -(this->x * z - this->z * x), this->x * y - this->y * x);
    }

    [[nodiscard]] constexpr Vec3<T> multiply(const Vec3<T>& other) const
    {
        return Vec3<T>(this->x * other.x, this->y * other.y, this->z * other.z);
    }

    [[nodiscard]] constexpr Vec3<T> multiply(const T x, const T y, const T z) const
    {
        return Vec3<T>(this->x * x, this->y * y, this->z * z);
    }

    [[nodiscard]] constexpr Vec3<T> add(const Vec3<T>& other) const
    {
        return Vec3<T>(x + other.x, y + other.y, z + other.z);
    }

    [[nodiscard]] constexpr Vec3<T> add(T x, T y, T z) const
    {
        return Vec3<T>(this->x + x, this->y + y, this->z + z);
    }

    [[nodiscard]] constexpr Vec3<T> subtract(const Vec3<T>& other) const
    {
        return Vec3<T>(x - other.x, y - other.y, z - other.z);
    }

    [[nodiscard]] constexpr Vec3<T> subtract(T x, T y, T z) const
    {
        return Vec3<T>(this->x - x, this->y - y, this->z - z);
    }

    [[nodiscard]] constexpr Vec3<T> normalize() const
    {
        return this->scale(1 / this->length());
    }

    [[nodiscard]] constexpr Vec3<T> up(int amount = 1) const
    {
        return Vec3<T>(this->x, this->y + amount, this->z);
    }

    [[nodiscard]] constexpr Vec3<T> down(int amount = 1) const
    {
        return Vec3<T>(this->x, this->y - amount, this->z);
    }

    [[nodiscard]] constexpr std::string to_string() const
    {
        return std::format("({}, {}, {})", this->x, this->y, this->z);
    }

    [[nodiscard]] constexpr bool operator==(const Vec3& other) const = default;

    [[nodiscard]] constexpr bool operator<(const Vec3<T>& other) const
    {
        return this->length_squared() < other.length_squared();
    }

    [[nodiscard]] constexpr bool operator>(const Vec3<T>& other) const
    {
        return this->length_squared() > other.length_squared();
    }

    [[nodiscard]] constexpr Vec3<T> operator+(const Vec3<T>& other) const
    {
        return this->add(other);
    }

    [[nodiscard]] constexpr Vec3<T> operator-(const Vec3<T>& other) const
    {
        return this->subtract(other);
    }
};

template <typename T>
struct std::hash<Vec3<T>>
{
    std::size_t operator()(const Vec3<T>& vec) const noexcept
    {
        return std::hash<T>{}(vec.x) << 1 ^ std::hash<T>{}(vec.y) << 2 ^ std::hash<T>{}(vec.x) << 3;
    }
};



using Vec3d = Vec3<double>;
using Vec3f = Vec3<float>;
using Vec3i = Vec3<int>;
