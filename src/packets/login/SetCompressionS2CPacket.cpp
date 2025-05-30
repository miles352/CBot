#include "packets/login/SetCompressionS2CPacket.hpp"
#include "conversions/VarInt.hpp"

SetCompressionS2CPacket::SetCompressionS2CPacket(std::vector<uint8_t> data)
{
    uint8_t* data_ptr = data.data();
    this->compression_threshold = VarInt::from_array(data_ptr, nullptr);
}
