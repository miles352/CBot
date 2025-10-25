#include "Bot.hpp"

#include <mutex>
#include <thread>
#include <utility>

#include "Constants.hpp"
#include "events/BlockUpdateEvent.hpp"
#include "events/TickEvent.hpp"
#include "events/DisconnectEvent.hpp"
#include "math/AngleHelper.hpp"
#include "math/Physics.hpp"
#include "packets/configuration/clientbound/FinishConfigurationS2CPacket.hpp"
#include "packets/configuration/clientbound/KnownPacksS2CPacket.hpp"
#include "packets/handshaking/HandshakeC2SPacket.hpp"
#include "packets/login/clientbound/SetCompressionS2CPacket.hpp"
#include "packets/login/serverbound/LoginStartC2SPacket.hpp"
#include "packets/play/serverbound/SetPlayerPositionRotationC2SPacket.hpp"
#include "registry/PacketRegistry.hpp"
#include "registry/BlockRegistry.hpp"
#include "registry/BlockFace.hpp"

#include "packets/play/clientbound/DisconnectS2CPacket.hpp"
#include "packets/play/clientbound/KeepAliveS2CPacket.hpp"
#include "packets/play/serverbound/ClientTickEndC2SPacket.hpp"
#include "packets/play/serverbound/PlayerActionC2SPacket.hpp"
#include "packets/play/serverbound/PlayerInputC2SPacket.hpp"
#include "packets/play/serverbound/SetPlayerMovementFlagsC2SPacket.hpp"
#include "packets/play/serverbound/SetPlayerPositionC2SPacket.hpp"
#include "packets/play/serverbound/SetPlayerRotationC2SPacket.hpp"
#include "registry/BlockRegistryGenerated.hpp"

Bot::Bot(std::string server_ip, std::string server_port, const std::string& save_name) : event_bus(*this),
                                                                         network_handler(event_bus),
                                                                         pathfinder(*this), ticks(0),
                                                                         currently_mining(false), current_block_break_delay(0),
                                                                         is_alive(true), on_ground(true),
                                                                         last_on_ground(true), horizontal_collision(false),
                                                                         vertical_collision(false),
                                                                         last_horizontal_collision(false), use_gravity(true), jumping(false),
                                                                         sneaking(false),
                                                                         sprinting(false), ticks_since_last_position_packet_sent(0),
                                                                         disconnected(false), server_ip(std::move(server_ip)),
                                                                         server_port(std::move(server_port))
{
    this->account = FullAuth::login(save_name + ".txt");
    this->init();
    const auto& block_states = get_block_states();
    BlockRegistry::generate_block_states(block_states);

    this->last_tick_time = std::chrono::system_clock::now();
}

void Bot::init()
{
    register_clientbound_packets(this->event_bus);
    register_serverbound_packets(this->event_bus);
}


void Bot::start()
{
    network_handler.join_server(this->server_ip, this->server_port);
    //                                                               1.21.5
    this->network_handler.write_packet(HandshakeC2SPacket(770, this->server_ip, this->server_port, HandshakeC2SPacket::HandshakeIntent::LOGIN));

    this->network_handler.set_client_state(ClientState::LOGIN);

    this->network_handler.write_packet(LoginStartC2SPacket(this->account.username, this->account.uuid));

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
        if (raw_packet.id == SetCompressionS2CPacket::id && this->network_handler.client_state == ClientState::LOGIN)
        {
            const PacketRegistryKey key = std::make_pair(this->network_handler.client_state, raw_packet.id);
            const std::function<std::unique_ptr<ClientboundPacket>(std::vector<uint8_t>, EventBus& event_bus)> packet_ptr = clientbound_packet_registry[key];
            packet_ptr(raw_packet.data, this->event_bus);
        }
        else if (raw_packet.id == KeepAliveS2CPacket::id && this->network_handler.client_state == ClientState::PLAY)
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
        std::unique_lock<std::mutex> lock(this->loop_mutex);
        if (this->disconnected) return;




        auto current_time = std::chrono::system_clock::now();
        if (std::chrono::duration_cast<std::chrono::milliseconds>(current_time - this->last_tick_time).count() > 50)
        {
            this->last_tick_time = current_time;
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
            if (this->network_handler.client_state == ClientState::PLAY)
            {
                this->event_bus.emit<TickEvent>();
                this->tick();
                this->network_handler.write_packet(ClientTickEndC2SPacket());
            }
            this->ticks++;
        }

        lock.unlock();
        std::this_thread::sleep_for(std::chrono::milliseconds(3));
    }
}

void Bot::disconnect()
{
    this->event_bus.emit<DisconnectEvent>();
    this->disconnected = true;
}

Bot::Input Bot::get_input() const
{
    return this->input;
}

void Bot::set_input(Input input)
{
    if (input == this->input) return;

    this->input = input;
    this->network_handler.write_packet(PlayerInputC2SPacket(this->input.forwards, this->input.backwards,
        this->input.left, this->input.right, this->jumping, this->sneaking, this->sprinting));
}

void Bot::clear_input()
{
    this->input = Input();
    this->network_handler.write_packet(PlayerInputC2SPacket(false, false, false, false, false, false, false));
}

float Bot::get_movement_speed(float slipperiness)
{
    if (this->on_ground)
    {
        return Physics::PLAYER_MOVE_SPEED * (Physics::PLAYER_WALK_SPEED / (slipperiness * slipperiness * slipperiness));
    }
    return Physics::PLAYER_MOVE_SPEED * 0.1F;
}

Vec3d Bot::movement_input_to_velocity(Vec3d movement_input, float speed, float yaw)
{
    double length_squared = movement_input.length_squared();
    if (length_squared < 1.0e-7)
    {
        return Vec3d{};
    }

    Vec3d normalized_movement = length_squared > 1.0 ? movement_input.normalize() : movement_input;
    Vec3d movement_with_speed = normalized_movement.scale(speed);
    Vec3d direction = AngleHelper::unit_direction_vec(yaw);
    // printf("Direction: %s\n", direction.to_string().c_str());
    // F: 1.2246469E-16 G: -1.0
    // 1.2246467991473532e-16
    return Vec3d(movement_with_speed.x * direction.z + movement_with_speed.z * direction.x,
            movement_with_speed.y,
            movement_with_speed.z * direction.z - movement_with_speed.x * direction.x);
}

// Entity#move
void Bot::move()
{
    // TODO: Figure out how movementMuliplier gets used. In testing its not used. May be used for speed effects
    // TODO: adjustMovementForSneaking
    // printf("Velocity before: %s\n", this->velocity.to_string().c_str());
    Vec3d velocity_before_collision = this->velocity;
    this->velocity = Physics::adjust_movement_for_collisions(*this, this->velocity, this->get_bounding_box(), {});
    // printf("Velocity after: %s\n", this->velocity.to_string().c_str());
    // if the velocity of x or z changed by >= 1e-5 after the collision calculation
    this->horizontal_collision = std::fabs(this->velocity.x - velocity_before_collision.x) >= 1e-5 || std::fabs(this->velocity.z - velocity_before_collision.z) >= 1e-5;
    this->vertical_collision = velocity_before_collision.y != this->velocity.y;
    this->on_ground = this->vertical_collision && velocity_before_collision.y <= 0.0; // vertical collision thats not on the players head


    // TODO: getVelocityMultiplier stuff
    this->position = this->position.add(this->velocity);
}

// TODO: Keep going with movement input
Vec3d Bot::apply_movement_input(Vec3d movement_input, float slipperiness)
{
    float speed = this->get_movement_speed(slipperiness);
    Vec3d new_velocity = this->movement_input_to_velocity(movement_input, speed, this->yaw);
    // printf("Old velocity: %s. new velocity: %s\n", this->velocity.to_string().c_str(), this->velocity.add(new_velocity).to_string().c_str());
    this->velocity = this->velocity.add(new_velocity);
    // TODO: applyClimbingSpeed
    this->move();
    // if ((this.horizontalCollision || this.jumping) && (this.isClimbing() || this.wasInPowderSnow && PowderSnowBlock.canWalkOnPowderSnow(this))) {
    //     vec3d = new Vec3d(vec3d.x, 0.2, vec3d.z);
    // }

    return this->velocity;
}

double Bot::get_effective_gravity()
{
    if (this->velocity.y <= 0.0 && false /** TODO: hasSlowFallingEffect */)
    {
        return 0.01;
    }
    return Physics::PLAYER_GRAVITY;
}

// travelMidAir  // TODO: implement travelInFluid and travelGliding
void Bot::travel(Vec3d movement_input)
{
    // TODO: get effecting block slipperiness
    float slipperiness = 0.6F;
    float slipperiness_scaled = slipperiness * 0.91F;
    Vec3d new_velocity = this->apply_movement_input(movement_input, slipperiness);
    double y_velocity = new_velocity.y;
    // TODO: add levitation code
    if (this->use_gravity)
    {
        if (!this->world._loaded_chunks.contains(ChunkPos(this->get_block_pos())))
        {
            int minimum_y = this->world._dimension_types[this->world._current_dimension_index].data.read_int("min_y").value();
            if (this->position.y > minimum_y)
            {
                y_velocity = -0.1;
            }
            else
            {
                y_velocity = 0.0;
            }
        }
        else
        {
            y_velocity -= this->get_effective_gravity();
        }
    }

    float drag = 0.98F;
    this->velocity = { new_velocity.x * slipperiness_scaled, y_velocity * drag, new_velocity.z * slipperiness_scaled };
}

// ClientPlayerEntity#tick
void Bot::tick()
{

    // code from LivingEntity#tickMovement
    if (this->velocity.horizontal_length_squared() < 0.003 * 0.003)
    {
        this->velocity.x = 0.0;
        this->velocity.z = 0.0;
    }

    if (std::abs(this->velocity.y) < 0.003)
    {
        this->velocity.y = 0.0;
    }

    Vec3d movement_input = Vec3d((this->input.left - this->input.right) * 0.98, 0, (this->input.forwards - this->input.backwards) * 0.98);
    this->travel(movement_input);

    // printf("%s\n", this->position.to_string().c_str());

    // ClientPlayerEntity#sendMovementPackets
    Vec3d velocity = this->position - this->last_position;
    float yaw_change = this->yaw - this->last_yaw;
    float pitch_change = this->pitch - this->last_pitch;
    this->ticks_since_last_position_packet_sent++;
    bool send_position_packet = velocity.length_squared() > 0.0002 * 0.0002 || this->ticks_since_last_position_packet_sent >= 20;
    bool send_rotation_packet = yaw_change != 0.0F || pitch_change != 0.0F;
    if (send_position_packet && send_rotation_packet)
    {
        this->network_handler.write_packet(SetPlayerPositionRotationC2SPacket(this->position, this->yaw, this->pitch, this->on_ground, this->horizontal_collision));
    }
    else if (send_position_packet)
    {
        this->network_handler.write_packet(SetPlayerPositionC2SPacket(this->position, this->on_ground, this->horizontal_collision));
    }
    else if (send_rotation_packet)
    {
        this->network_handler.write_packet(SetPlayerRotationC2SPacket(this->yaw, this->pitch, this->on_ground, this->horizontal_collision));
    }
    else if (this->last_on_ground != this->on_ground || this->last_horizontal_collision != this->horizontal_collision)
    {
        this->network_handler.write_packet(SetPlayerMovementFlagsC2SPacket(this->on_ground, this->horizontal_collision));
    }

    if (send_position_packet)
    {
        this->last_position = this->position;
        this->ticks_since_last_position_packet_sent = 0;
    }

    if (send_rotation_packet)
    {
        this->last_yaw = this->yaw;
        this->last_pitch = this->pitch;
    }

    this->last_on_ground = this->on_ground;
    this->last_horizontal_collision = this->horizontal_collision;
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

    this->network_handler.write_packet<PlayerActionC2SPacket>({ActionStatus::STARTED_DIGGING, pos, BlockFace::TOP, this->temp_sequence});
    this->temp_sequence++;

    // printf("Started mining!\n");

    int block_break_ticks = Bot::calculate_block_break_ticks(block_state.value().get_block(), this->inventory.get_held_slot());
    printf("Block break ticks: %d\n", block_break_ticks);

    if (block_break_ticks <= 0) // Do not send finished digging if it is insta-minable
    {
        this->world.update_block(pos, 0); // Assume the block was successfully broken and set the block to air.
        return;
    }

    this->currently_mining = true;
    this->current_block_break_delay = this->BLOCK_BREAK_DELAY;
    printf("Set delay to: %d\n", this->current_block_break_delay);

    std::shared_ptr<int> tick_delay = std::make_shared<int>(block_break_ticks);


    this->event_bus.on<TickEvent>([tick_delay, pos](Bot& bot) {
        (*tick_delay)--;
        // if (*tick_delay < 0)
        // {
        //     bot.current_block_break_delay--;
        //     if (bot.current_block_break_delay <= 0)
        //     {
        //         bot.currently_mining = false;
        //     }
        // }
        if (*tick_delay <= 0)
        {
            bot.network_handler.write_packet<PlayerActionC2SPacket>({ActionStatus::FINISHED_DIGGING, pos, BlockFace::TOP, 0});
            printf("Send finished digging\n");
            bot.event_bus.remove_listener<TickEvent>("mine_block");
            bot.world.update_block(pos, 0); // Assume the block was successfully broken and set the block to air.
            if (bot.current_block_break_delay <= 0) bot.currently_mining = false;
            else
            {
                bot.event_bus.on<TickEvent>([](Bot& bot) {
                    bot.current_block_break_delay--;
                    if (bot.current_block_break_delay <= 0)
                    {
                        bot.event_bus.remove_listener<TickEvent>("mine_block_delay");
                        bot.currently_mining = false;
                        printf("finished delay\n");
                    }
                }, "mine_block_delay", 999);
            }
        }
    }, "mine_block", 0);
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
            auto it2 = enchantment_component.enchantments.find(EnchantmentComponent::EnchantmentIds::EFFICIENCY);
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


