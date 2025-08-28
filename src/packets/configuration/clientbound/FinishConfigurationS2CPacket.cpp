#include "FinishConfigurationS2CPacket.hpp"

#include "../serverbound/AcknowledgeFinishConfigurationC2SPacket.hpp"


FinishConfigurationS2CPacket::FinishConfigurationS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    event_bus.emit<FinishConfigurationS2CPacket>();
}

void FinishConfigurationS2CPacket::default_handler(Bot &bot)
{
    bot.network_handler.write_packet(AcknowledgeFinishConfigurationC2SPacket{});

    bot.network_handler.set_client_state(ClientState::PLAY);
}
