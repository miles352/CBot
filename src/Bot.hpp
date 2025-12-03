#pragma once

#include <chrono>
#include <queue>

#include "EventBus.hpp"
#include "NetworkHandler.hpp"
#include "Pathfinder.hpp"
#include "Inventory.hpp"
#include "math/Vec3.hpp"
#include "World.hpp"
#include "math/Box.hpp"
#include "authentication/FullAuth.hpp"
#include "registry/EntityRegistryGenerated.hpp"


class Bot
{
public:
    /** Must be constructed before the bot can connect to a server.
     * @param server_ip The server ip, for example: connect.2b2t.org
     * @param server_port The server port, for example: 25565
     * @param save_name The name used to load and save auth tokens to a file. Must be a valid file name prefix.
     * If offline is true, then this name is used as the username for the bot.
     * @param offline A boolean deciding whether online authentication will be done.
     */
    explicit Bot(std::string server_ip, std::string server_port = "25565", const std::string& save_name = "saved_account", bool offline = false);

    void start();

    EventBus event_bus;
    NetworkHandler network_handler;

#ifndef NO_REGISTRY
    World world;

    Pathfinder pathfinder;
    Inventory inventory;
#endif
    /** The number of ticks that have passed since the bot was started */
    int ticks;
    /** The amount of health the bot has. 0-20 */
    float health{};
    /** The amount of food the bot has. 0-20 */
    int food{};
    /** The amount of saturation the bot has. 0-5 */
    float saturation{};
    /** The bots exact position. */
    Vec3d position{};
    /** The bots position on the previous tick. */
    Vec3d last_position{};
    /** The bots velocity. */
    Vec3d velocity{};
    /** The bots yaw. */
    float yaw{};
    /** The bots yaw on the previous tick */
    float last_yaw{};
    /** The bots pitch. */
    float pitch{};
    /** The bots pitch on the previous tick. */
    float last_pitch{};
    /** True if the bot is currently mining. This gets set when calling Bot::mine_block. */
    bool currently_mining;
    /** The delay in ticks before starting breaking a block. */
    int current_block_break_delay;
    /** The tick delay between mining blocks. If the block is insta-minable, then the delay is ignored. */
    int BLOCK_BREAK_DELAY = 6;
    int entity_id;
    /** If the bot is alive or not. */
    bool is_alive;

    bool on_ground;
    bool last_on_ground;

    bool horizontal_collision;
    bool vertical_collision;
    bool last_horizontal_collision;

    std::chrono::time_point<std::chrono::system_clock> _last_keepalive_time;

    /** Controls whether gravity is used in the collision calculations. */
    bool use_gravity;

    /** Do not write to this value, instead use Bot::set_render_distance */
    int _render_distance;
    /** Used in the vanilla client for certain things. Unused here, but will store the value the server sends. */
    int simulation_distance;

    void set_render_distance(int8_t distance);

    int temp_sequence = 1;

    struct Input
    {
        bool forwards;
        bool backwards;
        bool left;
        bool right;

        bool operator==(const Input& input) const = default;
    };

    /** A list where each index corresponds to an entity type id. Each one contains a map of entity id to position in the world. */
    // TODO: Fix this shit wtf 9kb array
    std::array<std::unordered_map<int, Vec3d>, static_cast<int>(EntityType::COUNT)> entities;
    /** A helper map for when you only know the id of the entity. */
    std::unordered_map<int, EntityType> entity_id_to_type;

    /** Returns the current input state of the bot. */
    Input get_input() const;
    /** Used to change the input state of the bot, which will cause it to move. PlayerInput packets will automatically be sent when the state changes. */
    void set_input(Input input);
    /** Clears the input by disabling each direction. */
    void clear_input();

    /** Disconnects the bot by closing the TCP connection like the vanilla client. */
    void disconnect();

    BlockPos get_block_pos() const;

    /** Changes the bots yaw and pitch to look at the given position in the world. */
    void look_at(Vec3d pos);
    /** Changes the bots yaw and pitch to look at the center of the block position passed to this method. */
    void look_at_block(BlockPos pos);

#ifndef NO_REGISTRY
    void mine_block(BlockPos pos);
#endif

    Box get_bounding_box() const;

    MCAccount account;
    bool offline;

private:
    void init();

    void tick_loop();

    void packet_read_loop();

    void tick();

    /** The input for the bot, used for movement. */
    Input input{};

    bool jumping;
    bool sneaking;
    bool sprinting;

    bool disconnected;

    int ticks_since_last_position_packet_sent;

#ifndef NO_REGISTRY
    /** Calculates the time needed to break a block. Assumes you are using a diamond pickaxe and breaking blocks that drop items when using a pickaxe. Otherwise, uses hand breaking time.*/
    static int calculate_block_break_ticks(const Block& block, const InventorySlot& item_stack);
#endif

    float get_movement_speed(float slipperiness);
    Vec3d movement_input_to_velocity(Vec3d movement_input, float speed, float yaw);
    Vec3d apply_movement_input(Vec3d movement_input, float slipperiness);
    void move();
    double get_effective_gravity();
    void travel(Vec3d movement_input);

    std::mutex loop_mutex;

    std::queue<RawPacket> packets_to_process;

    std::string server_ip;
    std::string server_port;

    std::chrono::time_point<std::chrono::system_clock> last_tick_time;
};
