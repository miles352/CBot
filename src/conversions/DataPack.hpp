#pragma once
#include <cstdint>
#include <string>
#include <vector>

#include "MCString.hpp"

class DataPack
{
public:
    std::string datapack_namespace;
    std::string id;
    std::string version;

    using type = DataPack;

    static std::vector<std::uint8_t> to_array(const std::string& datapack_namespace, const std::string& id, const std::string& version)
    {
        std::vector<uint8_t> namespace_bytes = MCString::to_bytes(datapack_namespace);
        std::vector<uint8_t> id_bytes = MCString::to_bytes(id);
        std::vector<uint8_t> version_bytes = MCString::to_bytes(version);

        std::vector<uint8_t> pack = namespace_bytes;
        pack.insert(pack.end(), id_bytes.begin(), id_bytes.end());
        pack.insert(pack.end(), version_bytes.begin(), version_bytes.end());

        return pack;
    }
};
