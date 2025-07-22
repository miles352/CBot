#include "conversions/MCString.hpp"

#include "Bot.hpp"
#include "events/DisconnectEvent.hpp"
#include "events/TickEvent.hpp"
#include "packets/configuration/KnownPacksC2SPacket.hpp"
#include "packets/login/LoginStartC2SPacket.hpp"
#include "packets/login/LoginSuccessS2CPacket.hpp"
#include "packets/play/SetHealthS2CPacket.hpp"
#include "packets/play/SetPlayerPositionRotationC2SPacket.hpp"
#include "packets/play/SetPlayerRotationC2SPacket.hpp"
#include "packets/play/SwingArmC2SPacket.hpp"
#include "packets/play/SynchronizePlayerPositionS2CPacket.hpp"
#include "math/Physics.hpp"


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
        // bot.network_handler->write_packet(SetPlayerRotationC2SPacket(bot.get_ticks(), 90, false, false));
        if (bot.ticks % 60 == 0)
        {
            bot.network_handler->write_packet(SwingArmC2SPacket());
        }

        Vec3d new_pos = bot.position.add(PLAYER_WALK_SPEED, 0, 0);
        bot.network_handler->write_packet(SetPlayerPositionRotationC2SPacket(new_pos, -90, 0, true, false));

        // movement * 0.2F if using item

        // Entity.java
        // boolean bl = !MathHelper.approximatelyEquals(movement.x, vec3d.x);
        // boolean bl2 = !MathHelper.approximatelyEquals(movement.z, vec3d.z);
        // this.horizontalCollision = bl || bl2;
        // this.verticalCollision = movement.y != vec3d.y;
        // this.groundCollision = this.verticalCollision && movement.y < 0.0;

        // PlayerEntity.java
        // adjustMovementForSneaking


    });

    bot->event_bus->on<SetHealthS2CPacket>([](Bot& bot, Event<SetHealthS2CPacket>& event) {
        if (event.data.health < 15)
        {
            bot.disconnect();
        }
        printf("Health: %f, Food: %d\n", event.data.health, event.data.food);
    });

    bot->start();
}