#include "Bot.hpp"

#include <mutex>
#include <thread>

#include "config.hpp"
#include "events/BlockUpdateEvent.hpp"
#include "events/TickEvent.hpp"
#include "events/DisconnectEvent.hpp"
#include "math/AngleHelper.hpp"
#include "math/Physics.hpp"
#include "packets/configuration/clientbound/FinishConfigurationS2CPacket.hpp"
#include "packets/configuration/clientbound/KnownPacksS2CPacket.hpp"
#include "packets/handshaking/HandshakeC2SPacket.hpp"
#include "packets/login/serverbound/LoginStartC2SPacket.hpp"
#include "packets/play/serverbound/SetPlayerPositionRotationC2SPacket.hpp"
#include "registry/PacketRegistry.hpp"
#include "registry/BlockRegistry.hpp"
#include "registry/BlockFace.hpp"

#include "packets/play/clientbound/DisconnectS2CPacket.hpp"
#include "packets/play/serverbound/PlayerActionC2SPacket.hpp"
#include "packets/play/serverbound/SetPlayerPositionC2SPacket.hpp"
#include "registry/BlockRegistryGenerated.hpp"

Bot::Bot(const std::string& server_ip, const std::string& server_port) : event_bus(*this),
                                                                         network_handler(
                                                                         server_ip, server_port, event_bus),
                                                                         pathfinder(*this), ticks(0),
                                                                         currently_mining(false), disconnected(false),
                                                                         server_ip(server_ip), server_port(server_port)
{
    this->init();
    const auto& block_states = get_block_states();
    BlockRegistry::generate_block_states(block_states);

    // Do authentication
}

void Bot::init()
{
    register_clientbound_packets(this->event_bus);
    register_serverbound_packets(this->event_bus);
}

void Bot::start()
{
    // TODO: actually start the network handler here. Right now its already started when its initialized in the constructor.
    // Bot instance should be able to sit for x seconds before connecting if it wants to.
    this->network_handler.write_packet(HandshakeC2SPacket(770, this->server_ip, this->server_port, HandshakeC2SPacket::HandshakeIntent::LOGIN));

    this->network_handler.set_client_state(ClientState::LOGIN);

    this->network_handler.write_packet(LoginStartC2SPacket("0x658", UUID));

    std::thread packet_thread(&Bot::packet_read_loop, this);
    std::thread tick_thread(&Bot::tick_loop, this);

    packet_thread.join();
    tick_thread.join();
}

void Bot::packet_read_loop()
{
    while (true)
    {
        RawPacket raw_packet = this->network_handler.read_packet();
        // printf("Read packet id: 0x%02x\n", raw_packet.id);

        std::lock_guard<std::mutex> lock(this->loop_mutex);
        if (this->disconnected) return;

        // if packet is set compression we need to instantly handle it before reading next packets
        if (raw_packet.id == 0x03 && this->network_handler.client_state == ClientState::LOGIN)
        {
            const PacketRegistryKey key = std::make_pair(this->network_handler.client_state, raw_packet.id);
            const std::function<std::unique_ptr<ClientboundPacket>(std::vector<uint8_t>, EventBus& event_bus)> packet_ptr = clientbound_packet_registry[key];
            packet_ptr(raw_packet.data, this->event_bus);
        }
        else
        {
            this->packets_to_process.emplace(raw_packet);
            if (raw_packet.id == DisconnectS2CPacket::id && this->network_handler.client_state == ClientState::PLAY)
            {
                this->network_handler.connection_closed = true;
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

        if (this->network_handler.client_state == ClientState::PLAY)
        {
            this->tick();
            this->event_bus.emit<TickEvent>();
        }


        for (; !this->packets_to_process.empty(); this->packets_to_process.pop())
        {
            RawPacket& raw_packet = this->packets_to_process.front();

            if (raw_packet.id == -1) // socket closed for some reason
            {
                this->disconnected = true;
                return;
            }

            const PacketRegistryKey key = std::make_pair(this->network_handler.client_state, raw_packet.id);

            if (!clientbound_packet_registry.contains(key))
            {
                // printf("Cannot find packet matching id: 0x%02x\n", raw_packet.id);
                continue;
            }

            const std::function<std::unique_ptr<ClientboundPacket>(std::vector<uint8_t>, EventBus& event_bus)> packet_ptr = clientbound_packet_registry[key];

            // printf("Received packet id 0x%02x\n", raw_packet.id);

            packet_ptr(raw_packet.data, this->event_bus);
            if (raw_packet.id == DisconnectS2CPacket::id && this->network_handler.client_state == ClientState::PLAY)
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
    this->event_bus.emit<DisconnectEvent>();
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
    this->velocity = Vec3d(movement_with_speed.x * direction.z + movement_with_speed.z * direction.x,
                            0,
                            movement_with_speed.z * direction.z - movement_with_speed.x * direction.x);

    if (velocity.length_squared() != 0.0)
    {
        // TODO: Pass entity collisions here if we need to care about that
        this->velocity = Physics::adjust_movement_for_collisions(*this, this->velocity, this->get_bounding_box(), {});
    }

    // printf("Velocity: %s\n", velocity.to_string().c_str());

    this->network_handler.write_packet(SetPlayerPositionC2SPacket(this->position + this->velocity, true, false));
}

Box Bot::get_bounding_box() const
{
    // Player is {0.6, 1.8, 0.6} blocks.
    // 1.5 tall when sneaking, and {0.6, 0.6, 0.6} when swimming or crawling
    static constexpr double PLAYER_WIDTH = 0.6;
    static constexpr double PLAYER_HEIGHT = 1.8;
    static constexpr double HALF_WIDTH = PLAYER_WIDTH / 2.0;
    return Box({ this->position.x - HALF_WIDTH, this->position.y, this->position.z - HALF_WIDTH }, { this->position.x + HALF_WIDTH, this->position.y + PLAYER_HEIGHT, this->position.z + HALF_WIDTH });
}

BlockPos Bot::get_block_pos() const
{
    return BlockPos(this->position);
}

void Bot::look_at(BlockPos pos)
{
    Vec3d vec = Vec3d(pos.x + 0.5, pos.y, pos.z + 0.5);
    Vec3d delta = vec - this->position;
    float yaw = static_cast<float>(std::atan2(-delta.x, delta.z) * 180.0 / M_PI);

    if (yaw < 0) {
        yaw += 360.0f;
    }

    this->yaw = yaw;
}

void Bot::mine_block(BlockPos pos)
{
    if (this->currently_mining) return;
    std::optional<BlockState> block_state = this->world.get_block_state(pos);
    if (!block_state.has_value())
    {
        return;
    }

    this->network_handler.write_packet<PlayerActionC2SPacket>({ActionStatus::STARTED_DIGGING, pos, BlockFace::TOP, 0});
    this->currently_mining = true;
    // printf("Started mining!\n");

    int block_break_ticks = Bot::calculate_block_break_ticks(block_state.value().get_block(), this->inventory.get_held_slot());
    // printf("Block break ticks: %d\n", block_break_ticks);

    std::shared_ptr<int> tick_delay = std::make_shared<int>(block_break_ticks);


    this->event_bus.on<TickEvent>([tick_delay, pos](Bot& bot) {
        (*tick_delay)--;
        if (*tick_delay <= 0)
        {
            bot.network_handler.write_packet<PlayerActionC2SPacket>({ActionStatus::FINISHED_DIGGING, pos, BlockFace::TOP, 0});
            bot.event_bus.remove_listener<TickEvent>("mine_block");
        }
    }, "mine_block");

    this->event_bus.on<BlockUpdateEvent>([old_block = block_state.value().get_block(), pos](Bot& bot, Event<BlockUpdateEvent>& event) {
        if (event.data.position == pos && event.data.new_state.get_block() != old_block)
        {
            // printf("Mined block!\n\n");
            bot.currently_mining = false;
            bot.event_bus.remove_listener<BlockUpdateEvent>("mine_block");
        }
    }, "mine_block");



}

int Bot::calculate_block_break_ticks(const Block& block, const InventorySlot& item_stack)
{
    // int speed_multiplier = 8; // for diamond pickaxe
    int speed_multiplier = 9; // for netherite
    if (*item_stack.item == Items::AIR)
    {
        speed_multiplier = 1;
    }
    if (speed_multiplier > 1)
    {
        auto it = item_stack.components.values.find(StructuredComponents::ComponentId::ENCHANTMENTS);
        if (it != item_stack.components.values.end())
        {
            EnchantmentComponent enchantment_component = std::get<EnchantmentComponent>(it->second);
            auto it2 = enchantment_component.enchantments.find(Enchantment::EFFICIENCY);
            if (it2 != enchantment_component.enchantments.end())
            {
                speed_multiplier += (it2->second * it2->second) + 1;
            }
        }
    }

    // TODO: Add haste/conduit

    // TODO: Add mining fatigue

    float hardness = block.get_hardness();
    float damage = (float)speed_multiplier / hardness;
    damage /= 30.; // assumes tool is correct

    if (damage >= 1)
    {
        return 0;
    }

    return std::ceil(1 / damage);
}


