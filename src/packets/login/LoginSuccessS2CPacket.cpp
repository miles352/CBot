#include "packets/login/LoginSuccessS2CPacket.hpp"

#include "Bot.hpp"
#include "LoginAcknowledgedC2SPacket.hpp"

LoginSuccessS2CPacket::LoginSuccessS2CPacket(std::vector<uint8_t> data, EventBus& event_bus)
{
    // TODO: decode data
    event_bus.emit<LoginSuccessS2CPacket>(this->data);
}

void LoginSuccessS2CPacket::default_handler(Bot& bot, Data data)
{
    bot.network_handler->write_packet(std::make_unique<LoginAcknowledgedC2SPacket>());

    bot.network_handler->set_client_state(ClientState::CONFIGURATION);
}