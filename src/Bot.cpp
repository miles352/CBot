#include "Bot.hpp"

#include <mutex>
#include <thread>
#include <openssl/rand.h>

#include "config.hpp"
#include "conversions/Utils.hpp"
#include "events/TickEvent.hpp"
#include "events/DisconnectEvent.hpp"
#include "math/AngleHelper.hpp"
#include "math/Physics.hpp"
#include "packets/configuration/FinishConfigurationS2CPacket.hpp"
#include "packets/configuration/KnownPacksS2CPacket.hpp"
#include "packets/handshaking/HandshakeC2SPacket.hpp"
#include "packets/login/LoginStartC2SPacket.hpp"
#include "packets/play/SetPlayerPositionRotationC2SPacket.hpp"
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
    this->ticks = 0;
    this->disconnected = false;
    // Do authentication
}

void Bot::init()
{
    this->event_bus = std::make_unique<EventBus>(this->shared_from_this());
    // TODO: Change to pass shared/weak ptr
    this->network_handler = std::make_unique<NetworkHandler>(this->server_ip, this->server_port, *this->event_bus);
    register_clientbound_packets(*this->event_bus);
    register_serverbound_packets(*this->event_bus);
}

void Bot::start()
{
    network_handler->write_packet(HandshakeC2SPacket(770, this->server_ip, this->server_port, HandshakeC2SPacket::HandshakeIntent::LOGIN));

    network_handler->set_client_state(ClientState::LOGIN);

    network_handler->write_packet(LoginStartC2SPacket("0x658", UUID));

    std::thread packet_thread(&Bot::packet_read_loop, this);
    std::thread tick_thread(&Bot::tick_loop, this);

    packet_thread.join();
    tick_thread.join();
}

void Bot::packet_read_loop()
{
    while (true)
    {
        RawPacket raw_packet = network_handler->read_packet();
        // printf("Read packet id: 0x%02x\n", raw_packet.id);

        std::lock_guard<std::mutex> lock(this->loop_mutex);
        if (this->disconnected) return;

        // if packet is set compression we need to instantly handle it before reading next packets
        if (raw_packet.id == 0x03 && this->network_handler->client_state == ClientState::LOGIN)
        {
            const PacketRegistryKey key = std::make_pair(this->network_handler->client_state, raw_packet.id);
            const std::function<std::unique_ptr<ClientboundPacket>(std::vector<uint8_t>, EventBus& event_bus)> packet_ptr = clientbound_packet_registry[key];
            packet_ptr(raw_packet.data, *this->event_bus);
        }
        else
        {
            this->packets_to_process.emplace(raw_packet);
            if (raw_packet.id == 0x1C && this->network_handler->client_state == ClientState::PLAY)
            {
                this->network_handler->connection_closed = true;
                return;
            }; // disconnect packet, stop reading from stream
        }
    }
}



void Bot::tick_loop()
{
    while (true)
    {
        std::chrono::time_point<std::chrono::system_clock> current_time = std::chrono::system_clock::now();

        std::unique_lock<std::mutex> lock(this->loop_mutex);
        if (this->disconnected) return;

        if (this->network_handler->client_state == ClientState::PLAY)
        {
            this->tick();
            this->event_bus->emit<TickEvent>();
        }


        for (; !this->packets_to_process.empty(); this->packets_to_process.pop())
        {
            RawPacket& raw_packet = this->packets_to_process.front();

            if (raw_packet.id == -1) // socket closed for some reason
            {
                this->disconnected = true;
                return;
            }

            const PacketRegistryKey key = std::make_pair(this->network_handler->client_state, raw_packet.id);

            if (!clientbound_packet_registry.contains(key))
            {
                // printf("Cannot find packet matching id: 0x%02x\n", raw_packet.id);
                continue;
            }

            const std::function<std::unique_ptr<ClientboundPacket>(std::vector<uint8_t>, EventBus& event_bus)> packet_ptr = clientbound_packet_registry[key];

            // printf("Received packet id 0x%02x\n", raw_packet.id);

            packet_ptr(raw_packet.data, *this->event_bus);
            if (raw_packet.id == 0x1C && this->network_handler->client_state == ClientState::PLAY)
            {
                this->disconnected = true;
                return;
            }
        }

        lock.unlock();

        std::this_thread::sleep_until(current_time + std::chrono::milliseconds(50));

        this->ticks++;
    }

}

void Bot::disconnect()
{
    this->event_bus->emit<DisconnectEvent>();
    this->disconnected = true;
}

void Bot::clear_input()
{
    this->input = Input();
}

void Bot::tick()
{
    Vec3d movement_input = Vec3d(this->input.left - this->input.right, 0, this->input.forwards - this->input.backwards);
    Vec3d movement_with_speed = (movement_input.length_squared() > 1.0 ? movement_input.normalize() : movement_input).scale(Physics::PLAYER_WALK_SPEED);
    Vec3d direction = AngleHelper::unit_direction_vec(this->yaw);
    Vec3d velocity = Vec3d(movement_with_speed.x * direction.z + movement_with_speed.z * direction.x,
                            0,
                            movement_with_speed.z * direction.z - movement_with_speed.x * direction.x);

    this->network_handler->write_packet(SetPlayerPositionRotationC2SPacket(this->position + velocity, this->yaw, this->pitch, true, false));

}

BlockPos Bot::get_block_pos() const
{
    return BlockPos(this->position);
}

