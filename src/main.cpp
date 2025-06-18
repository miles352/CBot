#include "conversions/MCString.hpp"

#include "Bot.hpp"


// const char* SERVER_IP = "connect.2b2t.org";
const char* SERVER_PORT = "25565";
const char* SERVER_IP = "tcpshield.horizonanarchy.net";

// 197db9ea-56e4-4cce-a4d5-3e0da590476a
const char* PLAYER_UUID = "197db9ea56e44ccea4d53e0da590476a";

int main()
{

    std::shared_ptr<Bot> bot = Bot::create(SERVER_IP, SERVER_PORT);

    bot->start();
}