#include "UpdateTagsS2CPacket.hpp"

#include "conversions/MCString.hpp"
#include "conversions/PrefixedArray.hpp"
#include "conversions/VarInt.hpp"

UpdateTagsS2CPacket::UpdateTagsS2CPacket(const std::vector<uint8_t>& data, EventBus& event_bus)
{
    // uint8_t* bytes = data.data();
    // int count = VarInt::from_bytes(bytes);
    // for (int i = 0; i < count; i++)
    // {
    //     std::string identifier = MCString::from_bytes(bytes);
    //     printf("Identifier: %s\n", identifier.c_str());
    //     int count2 = VarInt::from_bytes(bytes);
    //     for (int j = 0; j < count2; j++)
    //     {
    //         std::string tag_identifier = MCString::from_bytes(bytes);
    //         if (identifier == "minecraft:enchantment")
    //         {
    //             printf("Identifier 2: %s\n", tag_identifier.c_str());
    //         }
    //         std::vector<int> tags = PrefixedArray::from_bytes_variable<VarInt>(bytes);
    //     }
    // }
    // TODO: Properly read/store this data
}
