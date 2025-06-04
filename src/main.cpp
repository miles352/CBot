#include "conversions/MCString.hpp"

#include "Bot.hpp"


// const char* SERVER_IP = "connect.2b2t.org";
const char* SERVER_PORT = "25565";
const char* SERVER_IP = "tcpshield.horizonanarchy.net";

// 197db9ea-56e4-4cce-a4d5-3e0da590476a
const char* PLAYER_UUID = "197db9ea56e44ccea4d53e0da590476a";

// TODO:

// packets also in event bus,
// implement priority system, default events get priority level 0
// allow the data to be modified
// emit packet event before writing so it gets modified

// give each packet unique event name
// move all this code into Bot default event handler
// create 50 ms tick delay event handler

// incoming packet events are emitted inside of decode method / constructor

// outgoing packet events are emitted inside of the default event handlers

int main()
{

    Bot bot = Bot(SERVER_IP, SERVER_PORT);

    bot.start();
}