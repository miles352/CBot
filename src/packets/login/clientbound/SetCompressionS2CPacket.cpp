#include "packets/login/clientbound/SetCompressionS2CPacket.hpp"
#include "conversions/VarInt.hpp"

SetCompressionS2CPacket::SetCompressionS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    uint8_t* data_ptr = data.data();
    this->data.compression_threshold = VarInt::from_bytes(data_ptr);

    event_bus.emit<SetCompressionS2CPacket>(this->data);
}

void SetCompressionS2CPacket::default_handler(Bot& bot, Event<SetCompressionS2CPacket>& event)
{
    bot.network_handler.enable_compression(event.data.compression_threshold);
    printf("Enabled compression\n");
}
