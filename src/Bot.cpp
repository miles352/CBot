#include "Bot.hpp"

#include <openssl/rand.h>

#include "config.hpp"
#include "MicrosoftAuth.hpp"
#include "conversions/Utils.hpp"
#include "packets/configuration/AcknowledgeFinishConfigurationC2SPacket.hpp"
#include "packets/configuration/FinishConfigurationS2CPacket.hpp"
#include "packets/configuration/KnownPacksC2SPacket.hpp"
#include "packets/configuration/KnownPacksS2CPacket.hpp"
#include "packets/handshaking/HandshakeC2SPacket.hpp"
#include "packets/login/EncryptionRequestS2CPacket.hpp"
#include "packets/login/EncryptionResponseC2SPacket.hpp"
#include "packets/login/LoginAcknowledgedC2SPacket.hpp"
#include "packets/login/LoginStartC2SPacket.hpp"
#include "packets/login/LoginSuccessS2CPacket.hpp"
#include "packets/login/SetCompressionS2CPacket.hpp"
#include "registry/PacketRegistry.hpp"



std::shared_ptr<Bot> Bot::create(const std::string &server_ip, const std::string &server_port)
{
    std::shared_ptr<Bot> bot = std::make_shared<Bot>(server_ip, server_port);
    bot->init();

    return bot;
}

Bot::Bot(const std::string& server_ip, const std::string& server_port):
    server_ip(server_ip), server_port(server_port)
{
    // Do authentication
}

void Bot::init()
{
    this->event_bus = std::make_unique<EventBus>(this->shared_from_this());
    // TODO: Change to pass shared/weak ptr
    this->network_handler = std::make_unique<NetworkHandler>(this->server_ip, this->server_port, *this->event_bus);
    register_clientbound_packets();
    register_serverbound_packets(*this->event_bus);
}

void Bot::start()
{
    network_handler->write_packet(std::make_unique<HandshakeC2SPacket>(770, this->server_ip, this->server_port, HandshakeC2SPacket::HandshakeIntent::LOGIN));

    network_handler->set_client_state(ClientState::LOGIN);

    network_handler->write_packet(std::make_unique<LoginStartC2SPacket>("0x658", UUID));

    while (true)
    {
        printf("\n");
        std::unique_ptr<ClientboundPacket> read_packet = network_handler->read_packet();

        printf("Received packet id 0x%02x with data size %d.\n", read_packet->get_id(), read_packet->size);
    }
}
