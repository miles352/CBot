#include "packets/login/SetCompressionS2CPacket.hpp"
#include "conversions/VarInt.hpp"

SetCompressionS2CPacket::SetCompressionS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    uint8_t* data_ptr = data.data();
    this->data.compression_threshold = VarInt::from_array(data_ptr, nullptr);

    event_bus.emit<SetCompressionS2CPacket>(this->data);
}

void SetCompressionS2CPacket::default_handler(Bot& bot, Data data)
{
    bot.network_handler->enable_compression(data.compression_threshold);
    printf("Enabled compression\n");
}
