#include <thread>
#include <chrono>

#include "Bot.hpp"

const char* SERVER_IP = "127.0.0.1";
const char* SERVER_PORT = "25565";

constexpr int NUMBER_OF_BOTS = 2;

// First bot uses ~29MB ram and each additional uses ~3MB

void run_bot(const std::string& save_name)
{
    Bot bot{SERVER_IP, SERVER_PORT, save_name, true}; // Using offline mode to test

    bot.start();
}


int main()
{
    std::vector<std::thread> threads;

    for (int i = 0; i < NUMBER_OF_BOTS; i++)
    {
        threads.emplace_back(run_bot, "Bot" + std::to_string(i));
        std::this_thread::sleep_for(std::chrono::milliseconds(100)); // Optional delay
    }

    for (std::thread& thread : threads)
    {
        thread.join();
    }
}
