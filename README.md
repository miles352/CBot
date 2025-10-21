A C++ library for creating bots that can connect to Minecraft servers. Mostly a work in progress.

Basic Usage:

```c++
const char* SERVER_IP = "127.0.0.1";
const char* SERVER_PORT = "25565";

int main()
{
    Bot bot(SERVER_IP, SERVER_PORT);
    
    
    bot.event_bus.on<TickEvent>([](Bot& bot) {
        // Do something every tick
    });
    
    
    bot.start();
}
```
