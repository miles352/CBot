#include "StartConfigurationS2CPacket.hpp"

#include "AcknowledgeConfigurationC2SPacket.hpp"

StartConfigurationS2CPacket::StartConfigurationS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    event_bus.emit<StartConfigurationS2CPacket>();
}


void StartConfigurationS2CPacket::default_handler(Bot& bot)
{
    bot.network_handler->write_packet(AcknowledgeConfigurationC2SPacket{});
}
