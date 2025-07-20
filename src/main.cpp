#include "conversions/MCString.hpp"

#include "Bot.hpp"
#include "events/TickEvent.hpp"
#include "packets/configuration/KnownPacksC2SPacket.hpp"
#include "packets/login/LoginStartC2SPacket.hpp"
#include "packets/login/LoginSuccessS2CPacket.hpp"
#include "packets/play/SetPlayerRotationC2SPacket.hpp"
#include "packets/play/SwingArmC2SPacket.hpp"
#include "packets/play/SynchronizePlayerPositionS2CPacket.hpp"


// const char* SERVER_IP = "connect.2b2t.org";
const char* SERVER_PORT = "25565";
const char* SERVER_IP = "tcpshield.horizonanarchy.net";

// 197db9ea-56e4-4cce-a4d5-3e0da590476a
const char* PLAYER_UUID = "197db9ea56e44ccea4d53e0da590476a";

int main()
{

    std::shared_ptr<Bot> bot = Bot::create(SERVER_IP, SERVER_PORT);

    bot->event_bus->on<SynchronizePlayerPositionS2CPacket>([](Bot& bot, Event<SynchronizePlayerPositionS2CPacket>& event) {
       printf("Position: %s\n", event.data.position.to_string().c_str());
    });

    bot->event_bus->on<TickEvent>([](Bot& bot) {
        // printf("Tick %d\n", bot.get_ticks());
        // bot.network_handler->write_packet(SetPlayerRotationC2SPacket(69, 88, false, false));
        bot.network_handler->write_packet(SwingArmC2SPacket());
    });

    bot->start();
}