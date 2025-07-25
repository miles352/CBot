#pragma once
#include <vector>

/** An abstract class that represents a type that can be converted to and from an array of bytes.
 * Used in PrefixedArray parsing to have a generic parent class.
 */
template <typename T>
class Conversion
{
public:
    virtual ~Conversion() = default;

    T from_bytes(uint8_t*& bytes)
    requires std::is_invocable_r_v<T, decltype(T::from_bytes), uint8_t*&>
    {
        return T::from_bytes(bytes);
    }

    virtual std::vector<uint8_t> to_bytes() = 0;
};
