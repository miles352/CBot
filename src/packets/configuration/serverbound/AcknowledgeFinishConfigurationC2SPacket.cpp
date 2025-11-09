#include "AcknowledgeFinishConfigurationC2SPacket.hpp"

AcknowledgeFinishConfigurationC2SPacket::AcknowledgeFinishConfigurationC2SPacket()
{

}

std::vector<uint8_t> AcknowledgeFinishConfigurationC2SPacket::encode()
{   
    return std::vector<uint8_t>();
}

void AcknowledgeFinishConfigurationC2SPacket::default_handler(Bot& bot, Event<AcknowledgeFinishConfigurationC2SPacket>& event)
{
    // Event.cancel();
}