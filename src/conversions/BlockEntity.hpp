#pragma once
#include "Conversion.hpp"

class BlockEntity : public Conversion<BlockEntity>
{
public:
    std::vector<uint8_t> to_bytes() override
    {

    }
};