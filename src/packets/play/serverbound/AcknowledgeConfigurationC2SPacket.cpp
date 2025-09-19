#include "packets/play/serverbound/AcknowledgeConfigurationC2SPacket.hpp"


AcknowledgeConfigurationC2SPacket::AcknowledgeConfigurationC2SPacket()
{

}

std::vector<uint8_t> AcknowledgeConfigurationC2SPacket::encode()
{
    return std::vector<uint8_t>{};
}

void AcknowledgeConfigurationC2SPacket::default_handler(Bot& bot)
{
    bot.network_handler.set_client_state(ClientState::CONFIGURATION);
}
