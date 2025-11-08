#pragma once

#include <vector>
#include <typeindex>
#include "Block.hpp"

enum class Face 
{
    FLOOR,
    WALL,
    CEILING,
};

enum class Facing4 
{
    NORTH,
    SOUTH,
    WEST,
    EAST,
};

enum class Facing5 
{
    DOWN,
    NORTH,
    SOUTH,
    WEST,
    EAST,
};

enum class Facing6 
{
    NORTH,
    EAST,
    SOUTH,
    WEST,
    UP,
    DOWN,
};

enum class Powered 
{
    TRUE,
    FALSE,
};

enum class DoorHalf 
{
    UPPER,
    LOWER,
};

enum class Hinge 
{
    LEFT,
    RIGHT,
};

enum class Open 
{
    TRUE,
    FALSE,
};

enum class East 
{
    TRUE,
    FALSE,
};

enum class WallEast 
{
    NONE,
    LOW,
    TALL,
};

enum class RedstoneEast 
{
    UP,
    SIDE,
    NONE,
};

enum class North 
{
    TRUE,
    FALSE,
};

enum class WallNorth 
{
    NONE,
    LOW,
    TALL,
};

enum class RedstoneNorth 
{
    UP,
    SIDE,
    NONE,
};

enum class South 
{
    TRUE,
    FALSE,
};

enum class WallSouth 
{
    NONE,
    LOW,
    TALL,
};

enum class RedstoneSouth 
{
    UP,
    SIDE,
    NONE,
};

enum class West 
{
    TRUE,
    FALSE,
};

enum class WallWest 
{
    NONE,
    LOW,
    TALL,
};

enum class RedstoneWest 
{
    UP,
    SIDE,
    NONE,
};

enum class Up 
{
    TRUE,
    FALSE,
};

enum class Down 
{
    TRUE,
    FALSE,
};

enum class Waterlogged 
{
    TRUE,
    FALSE,
};

enum class InWall 
{
    TRUE,
    FALSE,
};

enum class Attached 
{
    TRUE,
    FALSE,
};

enum class Rotation 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
    _8,
    _9,
    _10,
    _11,
    _12,
    _13,
    _14,
    _15,
};

enum class Distance8 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
};

enum class Distance7 
{
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
};

enum class Persistent 
{
    TRUE,
    FALSE,
};

enum class AxisXYZ 
{
    X,
    Y,
    Z,
};

enum class AxisXZ 
{
    X,
    Z,
};

enum class Stage 
{
    _0,
    _1,
};

enum class SlabType 
{
    TOP,
    BOTTOM,
    DOUBLE,
};

enum class Half 
{
    TOP,
    BOTTOM,
};

enum class StairShape 
{
    STRAIGHT,
    INNER_LEFT,
    INNER_RIGHT,
    OUTER_LEFT,
    OUTER_RIGHT,
};

enum class RailShape 
{
    NORTH_SOUTH,
    EAST_WEST,
    ASCENDING_EAST,
    ASCENDING_WEST,
    ASCENDING_NORTH,
    ASCENDING_SOUTH,
};

enum class RailShapeFull 
{
    NORTH_SOUTH,
    EAST_WEST,
    ASCENDING_EAST,
    ASCENDING_WEST,
    ASCENDING_NORTH,
    ASCENDING_SOUTH,
    SOUTH_EAST,
    SOUTH_WEST,
    NORTH_WEST,
    NORTH_EAST,
};

enum class Age2 
{
    _0,
    _1,
};

enum class Age3 
{
    _0,
    _1,
    _2,
};

enum class Age4 
{
    _0,
    _1,
    _2,
    _3,
};

enum class Age5 
{
    _0,
    _1,
    _2,
    _3,
    _4,
};

enum class Age6 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
};

enum class Age8 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
};

enum class Age16 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
    _8,
    _9,
    _10,
    _11,
    _12,
    _13,
    _14,
    _15,
};

enum class Age26 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
    _8,
    _9,
    _10,
    _11,
    _12,
    _13,
    _14,
    _15,
    _16,
    _17,
    _18,
    _19,
    _20,
    _21,
    _22,
    _23,
    _24,
    _25,
};

enum class Leaves 
{
    NONE,
    SMALL,
    LARGE,
};

enum class HoneyLevel 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
};

enum class Attachment 
{
    FLOOR,
    CEILING,
    SINGLE_WALL,
    DOUBLE_WALL,
};

enum class Tilt 
{
    NONE,
    UNSTABLE,
    PARTIAL,
    FULL,
};

enum class Occupied 
{
    TRUE,
    FALSE,
};

enum class Part 
{
    HEAD,
    FOOT,
};

enum class Candles 
{
    _1,
    _2,
    _3,
    _4,
};

enum class Lit 
{
    TRUE,
    FALSE,
};

enum class HasBottle0 
{
    TRUE,
    FALSE,
};

enum class HasBottle1 
{
    TRUE,
    FALSE,
};

enum class HasBottle2 
{
    TRUE,
    FALSE,
};

enum class Drag 
{
    TRUE,
    FALSE,
};

enum class Bites 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
};

enum class Power 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
    _8,
    _9,
    _10,
    _11,
    _12,
    _13,
    _14,
    _15,
};

enum class SculkSensorPhase 
{
    INACTIVE,
    ACTIVE,
    COOLDOWN,
};

enum class SignalFire 
{
    TRUE,
    FALSE,
};

enum class Berries 
{
    TRUE,
    FALSE,
};

enum class Conditional 
{
    TRUE,
    FALSE,
};

enum class ChestType 
{
    SINGLE,
    LEFT,
    RIGHT,
};

enum class Slot0Occupied 
{
    TRUE,
    FALSE,
};

enum class Slot1Occupied 
{
    TRUE,
    FALSE,
};

enum class Slot2Occupied 
{
    TRUE,
    FALSE,
};

enum class Slot3Occupied 
{
    TRUE,
    FALSE,
};

enum class Slot4Occupied 
{
    TRUE,
    FALSE,
};

enum class Slot5Occupied 
{
    TRUE,
    FALSE,
};

enum class ComparatorMode 
{
    COMPARE,
    SUBTRACT,
};

enum class StructureBlockMode 
{
    SAVE,
    LOAD,
    CORNER,
    DATA,
};

enum class TestBlockMode 
{
    START,
    LOG,
    FAIL,
    ACCEPT,
};

enum class Level3 
{
    _1,
    _2,
    _3,
};

enum class Level9 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
    _8,
};

enum class Level16 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
    _8,
    _9,
    _10,
    _11,
    _12,
    _13,
    _14,
    _15,
};

enum class Crafting 
{
    TRUE,
    FALSE,
};

enum class Orientation 
{
    DOWN_EAST,
    DOWN_NORTH,
    DOWN_SOUTH,
    DOWN_WEST,
    UP_EAST,
    UP_NORTH,
    UP_SOUTH,
    UP_WEST,
    WEST_UP,
    EAST_UP,
    NORTH_UP,
    SOUTH_UP,
};

enum class Triggered 
{
    TRUE,
    FALSE,
};

enum class CreakingHeartState 
{
    UPROOTED,
    DORMANT,
    AWAKE,
};

enum class Natural 
{
    TRUE,
    FALSE,
};

enum class Inverted 
{
    TRUE,
    FALSE,
};

enum class Cracked 
{
    TRUE,
    FALSE,
};

enum class Eye 
{
    TRUE,
    FALSE,
};

enum class Snowy 
{
    TRUE,
    FALSE,
};

enum class Enabled 
{
    TRUE,
    FALSE,
};

enum class HasRecord 
{
    TRUE,
    FALSE,
};

enum class Hanging 
{
    TRUE,
    FALSE,
};

enum class HasBook 
{
    TRUE,
    FALSE,
};

enum class Moisture 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
};

enum class SegmentAmount 
{
    _1,
    _2,
    _3,
    _4,
};

enum class PistonType 
{
    NORMAL,
    STICKY,
};

enum class Instrument 
{
    HARP,
    BASEDRUM,
    SNARE,
    HAT,
    BASS,
    FLUTE,
    BELL,
    GUITAR,
    CHIME,
    XYLOPHONE,
    IRON_XYLOPHONE,
    COW_BELL,
    DIDGERIDOO,
    BIT,
    BANJO,
    PLING,
    ZOMBIE,
    SKELETON,
    CREEPER,
    DRAGON,
    WITHER_SKELETON,
    PIGLIN,
    CUSTOM_HEAD,
};

enum class Note 
{
    _0,
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
    _8,
    _9,
    _10,
    _11,
    _12,
    _13,
    _14,
    _15,
    _16,
    _17,
    _18,
    _19,
    _20,
    _21,
    _22,
    _23,
    _24,
};

enum class Tip 
{
    TRUE,
    FALSE,
};

enum class Bottom 
{
    TRUE,
    FALSE,
};

enum class FlowerAmount 
{
    _1,
    _2,
    _3,
    _4,
};

enum class Extended 
{
    TRUE,
    FALSE,
};

enum class Short 
{
    TRUE,
    FALSE,
};

enum class Thickness 
{
    TIP_MERGE,
    TIP,
    FRUSTUM,
    MIDDLE,
    BASE,
};

enum class VerticalDirection 
{
    UP,
    DOWN,
};

enum class Delay 
{
    _1,
    _2,
    _3,
    _4,
};

enum class Locked 
{
    TRUE,
    FALSE,
};

enum class Charges 
{
    _0,
    _1,
    _2,
    _3,
    _4,
};

enum class Bloom 
{
    TRUE,
    FALSE,
};

enum class CanSummon 
{
    TRUE,
    FALSE,
};

enum class Shrieking 
{
    TRUE,
    FALSE,
};

enum class Pickles 
{
    _1,
    _2,
    _3,
    _4,
};

enum class Hatch 
{
    _0,
    _1,
    _2,
};

enum class Layers 
{
    _1,
    _2,
    _3,
    _4,
    _5,
    _6,
    _7,
    _8,
};

enum class Dusted 
{
    _0,
    _1,
    _2,
    _3,
};

enum class Unstable 
{
    TRUE,
    FALSE,
};

enum class Ominous 
{
    TRUE,
    FALSE,
};

enum class TrialSpawnerState 
{
    INACTIVE,
    WAITING_FOR_PLAYERS,
    ACTIVE,
    WAITING_FOR_REWARD_EJECTION,
    EJECTING_REWARD,
    COOLDOWN,
};

enum class Disarmed 
{
    TRUE,
    FALSE,
};

enum class Eggs 
{
    _1,
    _2,
    _3,
    _4,
};

enum class VaultState 
{
    INACTIVE,
    ACTIVE,
    UNLOCKING,
    EJECTING,
};

namespace Blocks
{
    constexpr Block ACACIA_BUTTON("acacia_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ACACIA_DOOR("acacia_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ACACIA_FENCE("acacia_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ACACIA_FENCE_GATE("acacia_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ACACIA_HANGING_SIGN("acacia_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ACACIA_LEAVES("acacia_leaves", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ACACIA_LOG("acacia_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ACACIA_PLANKS("acacia_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ACACIA_PRESSURE_PLATE("acacia_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ACACIA_SAPLING("acacia_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ACACIA_SIGN("acacia_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ACACIA_SLAB("acacia_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ACACIA_STAIRS("acacia_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ACACIA_TRAPDOOR("acacia_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ACACIA_WALL_HANGING_SIGN("acacia_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ACACIA_WALL_SIGN("acacia_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ACACIA_WOOD("acacia_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ACTIVATOR_RAIL("activator_rail", Block::BlockSetting().set_resistance(0.7).set_hardness(0.7).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block AIR("air", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ALLIUM("allium", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block AMETHYST_BLOCK("amethyst_block", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block AMETHYST_CLUSTER("amethyst_cluster", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ANCIENT_DEBRIS("ancient_debris", Block::BlockSetting().set_resistance(1200.0).set_hardness(30.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ANDESITE("andesite", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ANDESITE_SLAB("andesite_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ANDESITE_STAIRS("andesite_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ANDESITE_WALL("andesite_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ANVIL("anvil", Block::BlockSetting().set_resistance(1200.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ATTACHED_MELON_STEM("attached_melon_stem", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ATTACHED_PUMPKIN_STEM("attached_pumpkin_stem", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block AZALEA("azalea", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block AZALEA_LEAVES("azalea_leaves", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block AZURE_BLUET("azure_bluet", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BAMBOO("bamboo", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_BLOCK("bamboo_block", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_BUTTON("bamboo_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BAMBOO_DOOR("bamboo_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_FENCE("bamboo_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_FENCE_GATE("bamboo_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_HANGING_SIGN("bamboo_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BAMBOO_MOSAIC("bamboo_mosaic", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_MOSAIC_SLAB("bamboo_mosaic_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_MOSAIC_STAIRS("bamboo_mosaic_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_PLANKS("bamboo_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_PRESSURE_PLATE("bamboo_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BAMBOO_SAPLING("bamboo_sapling", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BAMBOO_SIGN("bamboo_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BAMBOO_SLAB("bamboo_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_STAIRS("bamboo_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_TRAPDOOR("bamboo_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BAMBOO_WALL_HANGING_SIGN("bamboo_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BAMBOO_WALL_SIGN("bamboo_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BARREL("barrel", Block::BlockSetting().set_resistance(2.5).set_hardness(2.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BARRIER("barrier", Block::BlockSetting().set_resistance(3600000.8).set_hardness(-1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BASALT("basalt", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BEACON("beacon", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BEDROCK("bedrock", Block::BlockSetting().set_resistance(3600000.0).set_hardness(-1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BEE_NEST("bee_nest", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BEEHIVE("beehive", Block::BlockSetting().set_resistance(0.6).set_hardness(0.6).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BEETROOTS("beetroots", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BELL("bell", Block::BlockSetting().set_resistance(5.0).set_hardness(5.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BIG_DRIPLEAF("big_dripleaf", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BIG_DRIPLEAF_STEM("big_dripleaf_stem", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BIRCH_BUTTON("birch_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BIRCH_DOOR("birch_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BIRCH_FENCE("birch_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BIRCH_FENCE_GATE("birch_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BIRCH_HANGING_SIGN("birch_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BIRCH_LEAVES("birch_leaves", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BIRCH_LOG("birch_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BIRCH_PLANKS("birch_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BIRCH_PRESSURE_PLATE("birch_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BIRCH_SAPLING("birch_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BIRCH_SIGN("birch_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BIRCH_SLAB("birch_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BIRCH_STAIRS("birch_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BIRCH_TRAPDOOR("birch_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BIRCH_WALL_HANGING_SIGN("birch_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BIRCH_WALL_SIGN("birch_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BIRCH_WOOD("birch_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_BANNER("black_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BLACK_BED("black_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_CANDLE("black_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_CANDLE_CAKE("black_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_CARPET("black_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_CONCRETE("black_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_CONCRETE_POWDER("black_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_GLAZED_TERRACOTTA("black_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_SHULKER_BOX("black_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_STAINED_GLASS("black_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_STAINED_GLASS_PANE("black_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_TERRACOTTA("black_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACK_WALL_BANNER("black_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BLACK_WOOL("black_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACKSTONE("blackstone", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACKSTONE_SLAB("blackstone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACKSTONE_STAIRS("blackstone_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLACKSTONE_WALL("blackstone_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLAST_FURNACE("blast_furnace", Block::BlockSetting().set_resistance(3.5).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_BANNER("blue_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BLUE_BED("blue_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_CANDLE("blue_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_CANDLE_CAKE("blue_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_CARPET("blue_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_CONCRETE("blue_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_CONCRETE_POWDER("blue_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_GLAZED_TERRACOTTA("blue_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_ICE("blue_ice", Block::BlockSetting().set_resistance(2.8).set_hardness(2.8).requires_tool(false).set_slipperiness(0.989).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_ORCHID("blue_orchid", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BLUE_SHULKER_BOX("blue_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_STAINED_GLASS("blue_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_STAINED_GLASS_PANE("blue_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_TERRACOTTA("blue_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BLUE_WALL_BANNER("blue_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BLUE_WOOL("blue_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BONE_BLOCK("bone_block", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BOOKSHELF("bookshelf", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BRAIN_CORAL("brain_coral", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BRAIN_CORAL_BLOCK("brain_coral_block", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BRAIN_CORAL_FAN("brain_coral_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BRAIN_CORAL_WALL_FAN("brain_coral_wall_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BREWING_STAND("brewing_stand", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BRICK_SLAB("brick_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BRICK_STAIRS("brick_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BRICK_WALL("brick_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BRICKS("bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_BANNER("brown_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BROWN_BED("brown_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_CANDLE("brown_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_CANDLE_CAKE("brown_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_CARPET("brown_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_CONCRETE("brown_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_CONCRETE_POWDER("brown_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_GLAZED_TERRACOTTA("brown_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_MUSHROOM("brown_mushroom", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BROWN_MUSHROOM_BLOCK("brown_mushroom_block", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_SHULKER_BOX("brown_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_STAINED_GLASS("brown_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_STAINED_GLASS_PANE("brown_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_TERRACOTTA("brown_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BROWN_WALL_BANNER("brown_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BROWN_WOOL("brown_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BUBBLE_COLUMN("bubble_column", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BUBBLE_CORAL("bubble_coral", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BUBBLE_CORAL_BLOCK("bubble_coral_block", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BUBBLE_CORAL_FAN("bubble_coral_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BUBBLE_CORAL_WALL_FAN("bubble_coral_wall_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block BUDDING_AMETHYST("budding_amethyst", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block BUSH("bush", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CACTUS("cactus", Block::BlockSetting().set_resistance(0.4).set_hardness(0.4).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CACTUS_FLOWER("cactus_flower", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CAKE("cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CALCITE("calcite", Block::BlockSetting().set_resistance(0.75).set_hardness(0.75).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CALIBRATED_SCULK_SENSOR("calibrated_sculk_sensor", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CAMPFIRE("campfire", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CANDLE("candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CANDLE_CAKE("candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CARROTS("carrots", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CARTOGRAPHY_TABLE("cartography_table", Block::BlockSetting().set_resistance(2.5).set_hardness(2.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CARVED_PUMPKIN("carved_pumpkin", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CAULDRON("cauldron", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CAVE_AIR("cave_air", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CAVE_VINES("cave_vines", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CAVE_VINES_PLANT("cave_vines_plant", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CHAIN("chain", Block::BlockSetting().set_resistance(6.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHAIN_COMMAND_BLOCK("chain_command_block", Block::BlockSetting().set_resistance(3600000.0).set_hardness(-1.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHERRY_BUTTON("cherry_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CHERRY_DOOR("cherry_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHERRY_FENCE("cherry_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHERRY_FENCE_GATE("cherry_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHERRY_HANGING_SIGN("cherry_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CHERRY_LEAVES("cherry_leaves", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHERRY_LOG("cherry_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHERRY_PLANKS("cherry_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHERRY_PRESSURE_PLATE("cherry_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CHERRY_SAPLING("cherry_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CHERRY_SIGN("cherry_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CHERRY_SLAB("cherry_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHERRY_STAIRS("cherry_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHERRY_TRAPDOOR("cherry_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHERRY_WALL_HANGING_SIGN("cherry_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CHERRY_WALL_SIGN("cherry_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CHERRY_WOOD("cherry_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHEST("chest", Block::BlockSetting().set_resistance(2.5).set_hardness(2.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHIPPED_ANVIL("chipped_anvil", Block::BlockSetting().set_resistance(1200.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_BOOKSHELF("chiseled_bookshelf", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_COPPER("chiseled_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_DEEPSLATE("chiseled_deepslate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_NETHER_BRICKS("chiseled_nether_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_POLISHED_BLACKSTONE("chiseled_polished_blackstone", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_QUARTZ_BLOCK("chiseled_quartz_block", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_RED_SANDSTONE("chiseled_red_sandstone", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_RESIN_BRICKS("chiseled_resin_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_SANDSTONE("chiseled_sandstone", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_STONE_BRICKS("chiseled_stone_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_TUFF("chiseled_tuff", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHISELED_TUFF_BRICKS("chiseled_tuff_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHORUS_FLOWER("chorus_flower", Block::BlockSetting().set_resistance(0.4).set_hardness(0.4).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CHORUS_PLANT("chorus_plant", Block::BlockSetting().set_resistance(0.4).set_hardness(0.4).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CLAY("clay", Block::BlockSetting().set_resistance(0.6).set_hardness(0.6).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CLOSED_EYEBLOSSOM("closed_eyeblossom", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block COAL_BLOCK("coal_block", Block::BlockSetting().set_resistance(6.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COAL_ORE("coal_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COARSE_DIRT("coarse_dirt", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COBBLED_DEEPSLATE("cobbled_deepslate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COBBLED_DEEPSLATE_SLAB("cobbled_deepslate_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COBBLED_DEEPSLATE_STAIRS("cobbled_deepslate_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COBBLED_DEEPSLATE_WALL("cobbled_deepslate_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COBBLESTONE("cobblestone", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COBBLESTONE_SLAB("cobblestone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COBBLESTONE_STAIRS("cobblestone_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COBBLESTONE_WALL("cobblestone_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COBWEB("cobweb", Block::BlockSetting().set_resistance(4.0).set_hardness(4.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block COCOA("cocoa", Block::BlockSetting().set_resistance(3.0).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COMMAND_BLOCK("command_block", Block::BlockSetting().set_resistance(3600000.0).set_hardness(-1.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COMPARATOR("comparator", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COMPOSTER("composter", Block::BlockSetting().set_resistance(0.6).set_hardness(0.6).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CONDUIT("conduit", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COPPER_BLOCK("copper_block", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COPPER_BULB("copper_bulb", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COPPER_DOOR("copper_door", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COPPER_GRATE("copper_grate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COPPER_ORE("copper_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block COPPER_TRAPDOOR("copper_trapdoor", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CORNFLOWER("cornflower", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CRACKED_DEEPSLATE_BRICKS("cracked_deepslate_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRACKED_DEEPSLATE_TILES("cracked_deepslate_tiles", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRACKED_NETHER_BRICKS("cracked_nether_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRACKED_POLISHED_BLACKSTONE_BRICKS("cracked_polished_blackstone_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRACKED_STONE_BRICKS("cracked_stone_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRAFTER("crafter", Block::BlockSetting().set_resistance(3.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRAFTING_TABLE("crafting_table", Block::BlockSetting().set_resistance(2.5).set_hardness(2.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CREAKING_HEART("creaking_heart", Block::BlockSetting().set_resistance(10.0).set_hardness(10.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CREEPER_HEAD("creeper_head", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CREEPER_WALL_HEAD("creeper_wall_head", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRIMSON_BUTTON("crimson_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CRIMSON_DOOR("crimson_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRIMSON_FENCE("crimson_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRIMSON_FENCE_GATE("crimson_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRIMSON_FUNGUS("crimson_fungus", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CRIMSON_HANGING_SIGN("crimson_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CRIMSON_HYPHAE("crimson_hyphae", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRIMSON_NYLIUM("crimson_nylium", Block::BlockSetting().set_resistance(0.4).set_hardness(0.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRIMSON_PLANKS("crimson_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRIMSON_PRESSURE_PLATE("crimson_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CRIMSON_ROOTS("crimson_roots", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CRIMSON_SIGN("crimson_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CRIMSON_SLAB("crimson_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRIMSON_STAIRS("crimson_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRIMSON_STEM("crimson_stem", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRIMSON_TRAPDOOR("crimson_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CRIMSON_WALL_HANGING_SIGN("crimson_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CRIMSON_WALL_SIGN("crimson_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CRYING_OBSIDIAN("crying_obsidian", Block::BlockSetting().set_resistance(1200.0).set_hardness(50.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CUT_COPPER("cut_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CUT_COPPER_SLAB("cut_copper_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CUT_COPPER_STAIRS("cut_copper_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CUT_RED_SANDSTONE("cut_red_sandstone", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CUT_RED_SANDSTONE_SLAB("cut_red_sandstone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CUT_SANDSTONE("cut_sandstone", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CUT_SANDSTONE_SLAB("cut_sandstone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_BANNER("cyan_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CYAN_BED("cyan_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_CANDLE("cyan_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_CANDLE_CAKE("cyan_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_CARPET("cyan_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_CONCRETE("cyan_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_CONCRETE_POWDER("cyan_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_GLAZED_TERRACOTTA("cyan_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_SHULKER_BOX("cyan_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_STAINED_GLASS("cyan_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_STAINED_GLASS_PANE("cyan_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_TERRACOTTA("cyan_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block CYAN_WALL_BANNER("cyan_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block CYAN_WOOL("cyan_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DAMAGED_ANVIL("damaged_anvil", Block::BlockSetting().set_resistance(1200.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DANDELION("dandelion", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DARK_OAK_BUTTON("dark_oak_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DARK_OAK_DOOR("dark_oak_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_OAK_FENCE("dark_oak_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_OAK_FENCE_GATE("dark_oak_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_OAK_HANGING_SIGN("dark_oak_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DARK_OAK_LEAVES("dark_oak_leaves", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_OAK_LOG("dark_oak_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_OAK_PLANKS("dark_oak_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_OAK_PRESSURE_PLATE("dark_oak_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DARK_OAK_SAPLING("dark_oak_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DARK_OAK_SIGN("dark_oak_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DARK_OAK_SLAB("dark_oak_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_OAK_STAIRS("dark_oak_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_OAK_TRAPDOOR("dark_oak_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_OAK_WALL_HANGING_SIGN("dark_oak_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DARK_OAK_WALL_SIGN("dark_oak_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DARK_OAK_WOOD("dark_oak_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_PRISMARINE("dark_prismarine", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_PRISMARINE_SLAB("dark_prismarine_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DARK_PRISMARINE_STAIRS("dark_prismarine_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DAYLIGHT_DETECTOR("daylight_detector", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEAD_BRAIN_CORAL("dead_brain_coral", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_BRAIN_CORAL_BLOCK("dead_brain_coral_block", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEAD_BRAIN_CORAL_FAN("dead_brain_coral_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_BRAIN_CORAL_WALL_FAN("dead_brain_coral_wall_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_BUBBLE_CORAL("dead_bubble_coral", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_BUBBLE_CORAL_BLOCK("dead_bubble_coral_block", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEAD_BUBBLE_CORAL_FAN("dead_bubble_coral_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_BUBBLE_CORAL_WALL_FAN("dead_bubble_coral_wall_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_BUSH("dead_bush", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_FIRE_CORAL("dead_fire_coral", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_FIRE_CORAL_BLOCK("dead_fire_coral_block", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEAD_FIRE_CORAL_FAN("dead_fire_coral_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_FIRE_CORAL_WALL_FAN("dead_fire_coral_wall_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_HORN_CORAL("dead_horn_coral", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_HORN_CORAL_BLOCK("dead_horn_coral_block", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEAD_HORN_CORAL_FAN("dead_horn_coral_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_HORN_CORAL_WALL_FAN("dead_horn_coral_wall_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_TUBE_CORAL("dead_tube_coral", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_TUBE_CORAL_BLOCK("dead_tube_coral_block", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEAD_TUBE_CORAL_FAN("dead_tube_coral_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DEAD_TUBE_CORAL_WALL_FAN("dead_tube_coral_wall_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DECORATED_POT("decorated_pot", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE("deepslate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_BRICK_SLAB("deepslate_brick_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_BRICK_STAIRS("deepslate_brick_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_BRICK_WALL("deepslate_brick_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_BRICKS("deepslate_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_COAL_ORE("deepslate_coal_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(4.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_COPPER_ORE("deepslate_copper_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(4.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_DIAMOND_ORE("deepslate_diamond_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(4.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_EMERALD_ORE("deepslate_emerald_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(4.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_GOLD_ORE("deepslate_gold_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(4.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_IRON_ORE("deepslate_iron_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(4.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_LAPIS_ORE("deepslate_lapis_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(4.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_REDSTONE_ORE("deepslate_redstone_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(4.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_TILE_SLAB("deepslate_tile_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_TILE_STAIRS("deepslate_tile_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_TILE_WALL("deepslate_tile_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DEEPSLATE_TILES("deepslate_tiles", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DETECTOR_RAIL("detector_rail", Block::BlockSetting().set_resistance(0.7).set_hardness(0.7).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block DIAMOND_BLOCK("diamond_block", Block::BlockSetting().set_resistance(6.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DIAMOND_ORE("diamond_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DIORITE("diorite", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DIORITE_SLAB("diorite_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DIORITE_STAIRS("diorite_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DIORITE_WALL("diorite_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DIRT("dirt", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DIRT_PATH("dirt_path", Block::BlockSetting().set_resistance(0.65).set_hardness(0.65).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DISPENSER("dispenser", Block::BlockSetting().set_resistance(3.5).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DRAGON_EGG("dragon_egg", Block::BlockSetting().set_resistance(9.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DRAGON_HEAD("dragon_head", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DRAGON_WALL_HEAD("dragon_wall_head", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DRIED_KELP_BLOCK("dried_kelp_block", Block::BlockSetting().set_resistance(2.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DRIPSTONE_BLOCK("dripstone_block", Block::BlockSetting().set_resistance(1.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block DROPPER("dropper", Block::BlockSetting().set_resistance(3.5).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block EMERALD_BLOCK("emerald_block", Block::BlockSetting().set_resistance(6.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block EMERALD_ORE("emerald_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ENCHANTING_TABLE("enchanting_table", Block::BlockSetting().set_resistance(1200.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block END_GATEWAY("end_gateway", Block::BlockSetting().set_resistance(3600000.0).set_hardness(-1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block END_PORTAL("end_portal", Block::BlockSetting().set_resistance(3600000.0).set_hardness(-1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block END_PORTAL_FRAME("end_portal_frame", Block::BlockSetting().set_resistance(3600000.0).set_hardness(-1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block END_ROD("end_rod", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block END_STONE("end_stone", Block::BlockSetting().set_resistance(9.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block END_STONE_BRICK_SLAB("end_stone_brick_slab", Block::BlockSetting().set_resistance(9.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block END_STONE_BRICK_STAIRS("end_stone_brick_stairs", Block::BlockSetting().set_resistance(9.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block END_STONE_BRICK_WALL("end_stone_brick_wall", Block::BlockSetting().set_resistance(9.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block END_STONE_BRICKS("end_stone_bricks", Block::BlockSetting().set_resistance(9.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ENDER_CHEST("ender_chest", Block::BlockSetting().set_resistance(600.0).set_hardness(22.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block EXPOSED_CHISELED_COPPER("exposed_chiseled_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block EXPOSED_COPPER("exposed_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block EXPOSED_COPPER_BULB("exposed_copper_bulb", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block EXPOSED_COPPER_DOOR("exposed_copper_door", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block EXPOSED_COPPER_GRATE("exposed_copper_grate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block EXPOSED_COPPER_TRAPDOOR("exposed_copper_trapdoor", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block EXPOSED_CUT_COPPER("exposed_cut_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block EXPOSED_CUT_COPPER_SLAB("exposed_cut_copper_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block EXPOSED_CUT_COPPER_STAIRS("exposed_cut_copper_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block FARMLAND("farmland", Block::BlockSetting().set_resistance(0.6).set_hardness(0.6).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block FERN("fern", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block FIRE("fire", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block FIRE_CORAL("fire_coral", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block FIRE_CORAL_BLOCK("fire_coral_block", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block FIRE_CORAL_FAN("fire_coral_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block FIRE_CORAL_WALL_FAN("fire_coral_wall_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block FIREFLY_BUSH("firefly_bush", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block FLETCHING_TABLE("fletching_table", Block::BlockSetting().set_resistance(2.5).set_hardness(2.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block FLOWER_POT("flower_pot", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block FLOWERING_AZALEA("flowering_azalea", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block FLOWERING_AZALEA_LEAVES("flowering_azalea_leaves", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block FROGSPAWN("frogspawn", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block FROSTED_ICE("frosted_ice", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.98).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block FURNACE("furnace", Block::BlockSetting().set_resistance(3.5).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GILDED_BLACKSTONE("gilded_blackstone", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GLASS("glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GLASS_PANE("glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GLOW_LICHEN("glow_lichen", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block GLOWSTONE("glowstone", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GOLD_BLOCK("gold_block", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GOLD_ORE("gold_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRANITE("granite", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRANITE_SLAB("granite_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRANITE_STAIRS("granite_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRANITE_WALL("granite_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRASS_BLOCK("grass_block", Block::BlockSetting().set_resistance(0.6).set_hardness(0.6).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAVEL("gravel", Block::BlockSetting().set_resistance(0.6).set_hardness(0.6).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_BANNER("gray_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block GRAY_BED("gray_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_CANDLE("gray_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_CANDLE_CAKE("gray_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_CARPET("gray_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_CONCRETE("gray_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_CONCRETE_POWDER("gray_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_GLAZED_TERRACOTTA("gray_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_SHULKER_BOX("gray_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_STAINED_GLASS("gray_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_STAINED_GLASS_PANE("gray_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_TERRACOTTA("gray_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRAY_WALL_BANNER("gray_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block GRAY_WOOL("gray_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_BANNER("green_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block GREEN_BED("green_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_CANDLE("green_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_CANDLE_CAKE("green_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_CARPET("green_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_CONCRETE("green_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_CONCRETE_POWDER("green_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_GLAZED_TERRACOTTA("green_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_SHULKER_BOX("green_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_STAINED_GLASS("green_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_STAINED_GLASS_PANE("green_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_TERRACOTTA("green_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GREEN_WALL_BANNER("green_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block GREEN_WOOL("green_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block GRINDSTONE("grindstone", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block HANGING_ROOTS("hanging_roots", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block HAY_BLOCK("hay_block", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block HEAVY_CORE("heavy_core", Block::BlockSetting().set_resistance(1200.0).set_hardness(10.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block HEAVY_WEIGHTED_PRESSURE_PLATE("heavy_weighted_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block HONEY_BLOCK("honey_block", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(0.4).set_jump_velocity_multiplier(0.5).set_collidable(true));
    constexpr Block HONEYCOMB_BLOCK("honeycomb_block", Block::BlockSetting().set_resistance(0.6).set_hardness(0.6).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block HOPPER("hopper", Block::BlockSetting().set_resistance(4.8).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block HORN_CORAL("horn_coral", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block HORN_CORAL_BLOCK("horn_coral_block", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block HORN_CORAL_FAN("horn_coral_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block HORN_CORAL_WALL_FAN("horn_coral_wall_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ICE("ice", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.98).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block INFESTED_CHISELED_STONE_BRICKS("infested_chiseled_stone_bricks", Block::BlockSetting().set_resistance(0.75).set_hardness(0.75).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block INFESTED_COBBLESTONE("infested_cobblestone", Block::BlockSetting().set_resistance(0.75).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block INFESTED_CRACKED_STONE_BRICKS("infested_cracked_stone_bricks", Block::BlockSetting().set_resistance(0.75).set_hardness(0.75).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block INFESTED_DEEPSLATE("infested_deepslate", Block::BlockSetting().set_resistance(0.75).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block INFESTED_MOSSY_STONE_BRICKS("infested_mossy_stone_bricks", Block::BlockSetting().set_resistance(0.75).set_hardness(0.75).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block INFESTED_STONE("infested_stone", Block::BlockSetting().set_resistance(0.75).set_hardness(0.75).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block INFESTED_STONE_BRICKS("infested_stone_bricks", Block::BlockSetting().set_resistance(0.75).set_hardness(0.75).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block IRON_BARS("iron_bars", Block::BlockSetting().set_resistance(6.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block IRON_BLOCK("iron_block", Block::BlockSetting().set_resistance(6.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block IRON_DOOR("iron_door", Block::BlockSetting().set_resistance(5.0).set_hardness(5.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block IRON_ORE("iron_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block IRON_TRAPDOOR("iron_trapdoor", Block::BlockSetting().set_resistance(5.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JACK_O_LANTERN("jack_o_lantern", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JIGSAW("jigsaw", Block::BlockSetting().set_resistance(3600000.0).set_hardness(-1.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JUKEBOX("jukebox", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JUNGLE_BUTTON("jungle_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block JUNGLE_DOOR("jungle_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JUNGLE_FENCE("jungle_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JUNGLE_FENCE_GATE("jungle_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JUNGLE_HANGING_SIGN("jungle_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block JUNGLE_LEAVES("jungle_leaves", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JUNGLE_LOG("jungle_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JUNGLE_PLANKS("jungle_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JUNGLE_PRESSURE_PLATE("jungle_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block JUNGLE_SAPLING("jungle_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block JUNGLE_SIGN("jungle_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block JUNGLE_SLAB("jungle_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JUNGLE_STAIRS("jungle_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JUNGLE_TRAPDOOR("jungle_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block JUNGLE_WALL_HANGING_SIGN("jungle_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block JUNGLE_WALL_SIGN("jungle_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block JUNGLE_WOOD("jungle_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block KELP("kelp", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block KELP_PLANT("kelp_plant", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LADDER("ladder", Block::BlockSetting().set_resistance(0.4).set_hardness(0.4).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LANTERN("lantern", Block::BlockSetting().set_resistance(3.5).set_hardness(3.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LAPIS_BLOCK("lapis_block", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LAPIS_ORE("lapis_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LARGE_AMETHYST_BUD("large_amethyst_bud", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LARGE_FERN("large_fern", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LAVA("lava", Block::BlockSetting().set_resistance(100.0).set_hardness(100.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LAVA_CAULDRON("lava_cauldron", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LEAF_LITTER("leaf_litter", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LECTERN("lectern", Block::BlockSetting().set_resistance(2.5).set_hardness(2.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LEVER("lever", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LIGHT("light", Block::BlockSetting().set_resistance(3600000.8).set_hardness(-1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_BANNER("light_blue_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LIGHT_BLUE_BED("light_blue_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_CANDLE("light_blue_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_CANDLE_CAKE("light_blue_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_CARPET("light_blue_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_CONCRETE("light_blue_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_CONCRETE_POWDER("light_blue_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_GLAZED_TERRACOTTA("light_blue_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_SHULKER_BOX("light_blue_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_STAINED_GLASS("light_blue_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_STAINED_GLASS_PANE("light_blue_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_TERRACOTTA("light_blue_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_BLUE_WALL_BANNER("light_blue_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LIGHT_BLUE_WOOL("light_blue_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_BANNER("light_gray_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LIGHT_GRAY_BED("light_gray_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_CANDLE("light_gray_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_CANDLE_CAKE("light_gray_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_CARPET("light_gray_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_CONCRETE("light_gray_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_CONCRETE_POWDER("light_gray_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_GLAZED_TERRACOTTA("light_gray_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_SHULKER_BOX("light_gray_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_STAINED_GLASS("light_gray_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_STAINED_GLASS_PANE("light_gray_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_TERRACOTTA("light_gray_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_GRAY_WALL_BANNER("light_gray_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LIGHT_GRAY_WOOL("light_gray_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIGHT_WEIGHTED_PRESSURE_PLATE("light_weighted_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LIGHTNING_ROD("lightning_rod", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LILAC("lilac", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LILY_OF_THE_VALLEY("lily_of_the_valley", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LILY_PAD("lily_pad", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_BANNER("lime_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LIME_BED("lime_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_CANDLE("lime_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_CANDLE_CAKE("lime_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_CARPET("lime_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_CONCRETE("lime_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_CONCRETE_POWDER("lime_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_GLAZED_TERRACOTTA("lime_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_SHULKER_BOX("lime_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_STAINED_GLASS("lime_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_STAINED_GLASS_PANE("lime_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_TERRACOTTA("lime_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LIME_WALL_BANNER("lime_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block LIME_WOOL("lime_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LODESTONE("lodestone", Block::BlockSetting().set_resistance(3.5).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block LOOM("loom", Block::BlockSetting().set_resistance(2.5).set_hardness(2.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_BANNER("magenta_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block MAGENTA_BED("magenta_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_CANDLE("magenta_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_CANDLE_CAKE("magenta_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_CARPET("magenta_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_CONCRETE("magenta_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_CONCRETE_POWDER("magenta_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_GLAZED_TERRACOTTA("magenta_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_SHULKER_BOX("magenta_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_STAINED_GLASS("magenta_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_STAINED_GLASS_PANE("magenta_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_TERRACOTTA("magenta_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGENTA_WALL_BANNER("magenta_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block MAGENTA_WOOL("magenta_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MAGMA_BLOCK("magma_block", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MANGROVE_BUTTON("mangrove_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block MANGROVE_DOOR("mangrove_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MANGROVE_FENCE("mangrove_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MANGROVE_FENCE_GATE("mangrove_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MANGROVE_HANGING_SIGN("mangrove_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block MANGROVE_LEAVES("mangrove_leaves", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MANGROVE_LOG("mangrove_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MANGROVE_PLANKS("mangrove_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MANGROVE_PRESSURE_PLATE("mangrove_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block MANGROVE_PROPAGULE("mangrove_propagule", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block MANGROVE_ROOTS("mangrove_roots", Block::BlockSetting().set_resistance(0.7).set_hardness(0.7).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MANGROVE_SIGN("mangrove_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block MANGROVE_SLAB("mangrove_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MANGROVE_STAIRS("mangrove_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MANGROVE_TRAPDOOR("mangrove_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MANGROVE_WALL_HANGING_SIGN("mangrove_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block MANGROVE_WALL_SIGN("mangrove_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block MANGROVE_WOOD("mangrove_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MEDIUM_AMETHYST_BUD("medium_amethyst_bud", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MELON("melon", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MELON_STEM("melon_stem", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block MOSS_BLOCK("moss_block", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MOSS_CARPET("moss_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MOSSY_COBBLESTONE("mossy_cobblestone", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MOSSY_COBBLESTONE_SLAB("mossy_cobblestone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MOSSY_COBBLESTONE_STAIRS("mossy_cobblestone_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MOSSY_COBBLESTONE_WALL("mossy_cobblestone_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MOSSY_STONE_BRICK_SLAB("mossy_stone_brick_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MOSSY_STONE_BRICK_STAIRS("mossy_stone_brick_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MOSSY_STONE_BRICK_WALL("mossy_stone_brick_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MOSSY_STONE_BRICKS("mossy_stone_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MOVING_PISTON("moving_piston", Block::BlockSetting().set_resistance(0.0).set_hardness(-1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MUD("mud", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MUD_BRICK_SLAB("mud_brick_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MUD_BRICK_STAIRS("mud_brick_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MUD_BRICK_WALL("mud_brick_wall", Block::BlockSetting().set_resistance(3.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MUD_BRICKS("mud_bricks", Block::BlockSetting().set_resistance(3.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MUDDY_MANGROVE_ROOTS("muddy_mangrove_roots", Block::BlockSetting().set_resistance(0.7).set_hardness(0.7).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MUSHROOM_STEM("mushroom_stem", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block MYCELIUM("mycelium", Block::BlockSetting().set_resistance(0.6).set_hardness(0.6).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block NETHER_BRICK_FENCE("nether_brick_fence", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block NETHER_BRICK_SLAB("nether_brick_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block NETHER_BRICK_STAIRS("nether_brick_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block NETHER_BRICK_WALL("nether_brick_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block NETHER_BRICKS("nether_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block NETHER_GOLD_ORE("nether_gold_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block NETHER_PORTAL("nether_portal", Block::BlockSetting().set_resistance(0.0).set_hardness(-1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block NETHER_QUARTZ_ORE("nether_quartz_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block NETHER_SPROUTS("nether_sprouts", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block NETHER_WART("nether_wart", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block NETHER_WART_BLOCK("nether_wart_block", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block NETHERITE_BLOCK("netherite_block", Block::BlockSetting().set_resistance(1200.0).set_hardness(50.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block NETHERRACK("netherrack", Block::BlockSetting().set_resistance(0.4).set_hardness(0.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block NOTE_BLOCK("note_block", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OAK_BUTTON("oak_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block OAK_DOOR("oak_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OAK_FENCE("oak_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OAK_FENCE_GATE("oak_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OAK_HANGING_SIGN("oak_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block OAK_LEAVES("oak_leaves", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OAK_LOG("oak_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OAK_PLANKS("oak_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OAK_PRESSURE_PLATE("oak_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block OAK_SAPLING("oak_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block OAK_SIGN("oak_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block OAK_SLAB("oak_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OAK_STAIRS("oak_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OAK_TRAPDOOR("oak_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OAK_WALL_HANGING_SIGN("oak_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block OAK_WALL_SIGN("oak_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block OAK_WOOD("oak_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OBSERVER("observer", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OBSIDIAN("obsidian", Block::BlockSetting().set_resistance(1200.0).set_hardness(50.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OCHRE_FROGLIGHT("ochre_froglight", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OPEN_EYEBLOSSOM("open_eyeblossom", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ORANGE_BANNER("orange_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ORANGE_BED("orange_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ORANGE_CANDLE("orange_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ORANGE_CANDLE_CAKE("orange_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ORANGE_CARPET("orange_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ORANGE_CONCRETE("orange_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ORANGE_CONCRETE_POWDER("orange_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ORANGE_GLAZED_TERRACOTTA("orange_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ORANGE_SHULKER_BOX("orange_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ORANGE_STAINED_GLASS("orange_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ORANGE_STAINED_GLASS_PANE("orange_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ORANGE_TERRACOTTA("orange_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ORANGE_TULIP("orange_tulip", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ORANGE_WALL_BANNER("orange_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block ORANGE_WOOL("orange_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OXEYE_DAISY("oxeye_daisy", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block OXIDIZED_CHISELED_COPPER("oxidized_chiseled_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OXIDIZED_COPPER("oxidized_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OXIDIZED_COPPER_BULB("oxidized_copper_bulb", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OXIDIZED_COPPER_DOOR("oxidized_copper_door", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OXIDIZED_COPPER_GRATE("oxidized_copper_grate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OXIDIZED_COPPER_TRAPDOOR("oxidized_copper_trapdoor", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OXIDIZED_CUT_COPPER("oxidized_cut_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OXIDIZED_CUT_COPPER_SLAB("oxidized_cut_copper_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block OXIDIZED_CUT_COPPER_STAIRS("oxidized_cut_copper_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PACKED_ICE("packed_ice", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.98).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PACKED_MUD("packed_mud", Block::BlockSetting().set_resistance(3.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_HANGING_MOSS("pale_hanging_moss", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PALE_MOSS_BLOCK("pale_moss_block", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_MOSS_CARPET("pale_moss_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_OAK_BUTTON("pale_oak_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PALE_OAK_DOOR("pale_oak_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_OAK_FENCE("pale_oak_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_OAK_FENCE_GATE("pale_oak_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_OAK_HANGING_SIGN("pale_oak_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PALE_OAK_LEAVES("pale_oak_leaves", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_OAK_LOG("pale_oak_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_OAK_PLANKS("pale_oak_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_OAK_PRESSURE_PLATE("pale_oak_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PALE_OAK_SAPLING("pale_oak_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PALE_OAK_SIGN("pale_oak_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PALE_OAK_SLAB("pale_oak_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_OAK_STAIRS("pale_oak_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_OAK_TRAPDOOR("pale_oak_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PALE_OAK_WALL_HANGING_SIGN("pale_oak_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PALE_OAK_WALL_SIGN("pale_oak_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PALE_OAK_WOOD("pale_oak_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PEARLESCENT_FROGLIGHT("pearlescent_froglight", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PEONY("peony", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PETRIFIED_OAK_SLAB("petrified_oak_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PIGLIN_HEAD("piglin_head", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PIGLIN_WALL_HEAD("piglin_wall_head", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_BANNER("pink_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PINK_BED("pink_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_CANDLE("pink_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_CANDLE_CAKE("pink_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_CARPET("pink_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_CONCRETE("pink_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_CONCRETE_POWDER("pink_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_GLAZED_TERRACOTTA("pink_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_PETALS("pink_petals", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PINK_SHULKER_BOX("pink_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_STAINED_GLASS("pink_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_STAINED_GLASS_PANE("pink_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_TERRACOTTA("pink_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PINK_TULIP("pink_tulip", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PINK_WALL_BANNER("pink_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PINK_WOOL("pink_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PISTON("piston", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PISTON_HEAD("piston_head", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PITCHER_CROP("pitcher_crop", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PITCHER_PLANT("pitcher_plant", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PLAYER_HEAD("player_head", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PLAYER_WALL_HEAD("player_wall_head", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PODZOL("podzol", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POINTED_DRIPSTONE("pointed_dripstone", Block::BlockSetting().set_resistance(3.0).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_ANDESITE("polished_andesite", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_ANDESITE_SLAB("polished_andesite_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_ANDESITE_STAIRS("polished_andesite_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_BASALT("polished_basalt", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_BLACKSTONE("polished_blackstone", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_BLACKSTONE_BRICK_SLAB("polished_blackstone_brick_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_BLACKSTONE_BRICK_STAIRS("polished_blackstone_brick_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_BLACKSTONE_BRICK_WALL("polished_blackstone_brick_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_BLACKSTONE_BRICKS("polished_blackstone_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_BLACKSTONE_BUTTON("polished_blackstone_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block POLISHED_BLACKSTONE_PRESSURE_PLATE("polished_blackstone_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block POLISHED_BLACKSTONE_SLAB("polished_blackstone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_BLACKSTONE_STAIRS("polished_blackstone_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_BLACKSTONE_WALL("polished_blackstone_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_DEEPSLATE("polished_deepslate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_DEEPSLATE_SLAB("polished_deepslate_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_DEEPSLATE_STAIRS("polished_deepslate_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_DEEPSLATE_WALL("polished_deepslate_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_DIORITE("polished_diorite", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_DIORITE_SLAB("polished_diorite_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_DIORITE_STAIRS("polished_diorite_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_GRANITE("polished_granite", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_GRANITE_SLAB("polished_granite_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_GRANITE_STAIRS("polished_granite_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_TUFF("polished_tuff", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_TUFF_SLAB("polished_tuff_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_TUFF_STAIRS("polished_tuff_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POLISHED_TUFF_WALL("polished_tuff_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POPPY("poppy", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block POTATOES("potatoes", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block POTTED_ACACIA_SAPLING("potted_acacia_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_ALLIUM("potted_allium", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_AZALEA_BUSH("potted_azalea_bush", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_AZURE_BLUET("potted_azure_bluet", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_BAMBOO("potted_bamboo", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_BIRCH_SAPLING("potted_birch_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_BLUE_ORCHID("potted_blue_orchid", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_BROWN_MUSHROOM("potted_brown_mushroom", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_CACTUS("potted_cactus", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_CHERRY_SAPLING("potted_cherry_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_CLOSED_EYEBLOSSOM("potted_closed_eyeblossom", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_CORNFLOWER("potted_cornflower", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_CRIMSON_FUNGUS("potted_crimson_fungus", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_CRIMSON_ROOTS("potted_crimson_roots", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_DANDELION("potted_dandelion", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_DARK_OAK_SAPLING("potted_dark_oak_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_DEAD_BUSH("potted_dead_bush", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_FERN("potted_fern", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_FLOWERING_AZALEA_BUSH("potted_flowering_azalea_bush", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_JUNGLE_SAPLING("potted_jungle_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_LILY_OF_THE_VALLEY("potted_lily_of_the_valley", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_MANGROVE_PROPAGULE("potted_mangrove_propagule", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_OAK_SAPLING("potted_oak_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_OPEN_EYEBLOSSOM("potted_open_eyeblossom", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_ORANGE_TULIP("potted_orange_tulip", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_OXEYE_DAISY("potted_oxeye_daisy", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_PALE_OAK_SAPLING("potted_pale_oak_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_PINK_TULIP("potted_pink_tulip", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_POPPY("potted_poppy", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_RED_MUSHROOM("potted_red_mushroom", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_RED_TULIP("potted_red_tulip", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_SPRUCE_SAPLING("potted_spruce_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_TORCHFLOWER("potted_torchflower", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_WARPED_FUNGUS("potted_warped_fungus", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_WARPED_ROOTS("potted_warped_roots", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_WHITE_TULIP("potted_white_tulip", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POTTED_WITHER_ROSE("potted_wither_rose", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POWDER_SNOW("powder_snow", Block::BlockSetting().set_resistance(0.25).set_hardness(0.25).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POWDER_SNOW_CAULDRON("powder_snow_cauldron", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block POWERED_RAIL("powered_rail", Block::BlockSetting().set_resistance(0.7).set_hardness(0.7).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PRISMARINE("prismarine", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PRISMARINE_BRICK_SLAB("prismarine_brick_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PRISMARINE_BRICK_STAIRS("prismarine_brick_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PRISMARINE_BRICKS("prismarine_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PRISMARINE_SLAB("prismarine_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PRISMARINE_STAIRS("prismarine_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PRISMARINE_WALL("prismarine_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PUMPKIN("pumpkin", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PUMPKIN_STEM("pumpkin_stem", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PURPLE_BANNER("purple_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PURPLE_BED("purple_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPLE_CANDLE("purple_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPLE_CANDLE_CAKE("purple_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPLE_CARPET("purple_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPLE_CONCRETE("purple_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPLE_CONCRETE_POWDER("purple_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPLE_GLAZED_TERRACOTTA("purple_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPLE_SHULKER_BOX("purple_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPLE_STAINED_GLASS("purple_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPLE_STAINED_GLASS_PANE("purple_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPLE_TERRACOTTA("purple_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPLE_WALL_BANNER("purple_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block PURPLE_WOOL("purple_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPUR_BLOCK("purpur_block", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPUR_PILLAR("purpur_pillar", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPUR_SLAB("purpur_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block PURPUR_STAIRS("purpur_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block QUARTZ_BLOCK("quartz_block", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block QUARTZ_BRICKS("quartz_bricks", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block QUARTZ_PILLAR("quartz_pillar", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block QUARTZ_SLAB("quartz_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block QUARTZ_STAIRS("quartz_stairs", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RAIL("rail", Block::BlockSetting().set_resistance(0.7).set_hardness(0.7).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block RAW_COPPER_BLOCK("raw_copper_block", Block::BlockSetting().set_resistance(6.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RAW_GOLD_BLOCK("raw_gold_block", Block::BlockSetting().set_resistance(6.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RAW_IRON_BLOCK("raw_iron_block", Block::BlockSetting().set_resistance(6.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_BANNER("red_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block RED_BED("red_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_CANDLE("red_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_CANDLE_CAKE("red_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_CARPET("red_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_CONCRETE("red_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_CONCRETE_POWDER("red_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_GLAZED_TERRACOTTA("red_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_MUSHROOM("red_mushroom", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block RED_MUSHROOM_BLOCK("red_mushroom_block", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_NETHER_BRICK_SLAB("red_nether_brick_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_NETHER_BRICK_STAIRS("red_nether_brick_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_NETHER_BRICK_WALL("red_nether_brick_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_NETHER_BRICKS("red_nether_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_SAND("red_sand", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_SANDSTONE("red_sandstone", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_SANDSTONE_SLAB("red_sandstone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_SANDSTONE_STAIRS("red_sandstone_stairs", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_SANDSTONE_WALL("red_sandstone_wall", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_SHULKER_BOX("red_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_STAINED_GLASS("red_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_STAINED_GLASS_PANE("red_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_TERRACOTTA("red_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RED_TULIP("red_tulip", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block RED_WALL_BANNER("red_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block RED_WOOL("red_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block REDSTONE_BLOCK("redstone_block", Block::BlockSetting().set_resistance(6.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block REDSTONE_LAMP("redstone_lamp", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block REDSTONE_ORE("redstone_ore", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block REDSTONE_TORCH("redstone_torch", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block REDSTONE_WALL_TORCH("redstone_wall_torch", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block REDSTONE_WIRE("redstone_wire", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block REINFORCED_DEEPSLATE("reinforced_deepslate", Block::BlockSetting().set_resistance(1200.0).set_hardness(55.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block REPEATER("repeater", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block REPEATING_COMMAND_BLOCK("repeating_command_block", Block::BlockSetting().set_resistance(3600000.0).set_hardness(-1.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RESIN_BLOCK("resin_block", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RESIN_BRICK_SLAB("resin_brick_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RESIN_BRICK_STAIRS("resin_brick_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RESIN_BRICK_WALL("resin_brick_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RESIN_BRICKS("resin_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block RESIN_CLUMP("resin_clump", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block RESPAWN_ANCHOR("respawn_anchor", Block::BlockSetting().set_resistance(1200.0).set_hardness(50.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ROOTED_DIRT("rooted_dirt", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ROSE_BUSH("rose_bush", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SAND("sand", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SANDSTONE("sandstone", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SANDSTONE_SLAB("sandstone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SANDSTONE_STAIRS("sandstone_stairs", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SANDSTONE_WALL("sandstone_wall", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SCAFFOLDING("scaffolding", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SCULK("sculk", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SCULK_CATALYST("sculk_catalyst", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SCULK_SENSOR("sculk_sensor", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SCULK_SHRIEKER("sculk_shrieker", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SCULK_VEIN("sculk_vein", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SEA_LANTERN("sea_lantern", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SEA_PICKLE("sea_pickle", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SEAGRASS("seagrass", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SHORT_DRY_GRASS("short_dry_grass", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SHORT_GRASS("short_grass", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SHROOMLIGHT("shroomlight", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SHULKER_BOX("shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SKELETON_SKULL("skeleton_skull", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SKELETON_WALL_SKULL("skeleton_wall_skull", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SLIME_BLOCK("slime_block", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.8).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMALL_AMETHYST_BUD("small_amethyst_bud", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMALL_DRIPLEAF("small_dripleaf", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SMITHING_TABLE("smithing_table", Block::BlockSetting().set_resistance(2.5).set_hardness(2.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOKER("smoker", Block::BlockSetting().set_resistance(3.5).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_BASALT("smooth_basalt", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_QUARTZ("smooth_quartz", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_QUARTZ_SLAB("smooth_quartz_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_QUARTZ_STAIRS("smooth_quartz_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_RED_SANDSTONE("smooth_red_sandstone", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_RED_SANDSTONE_SLAB("smooth_red_sandstone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_RED_SANDSTONE_STAIRS("smooth_red_sandstone_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_SANDSTONE("smooth_sandstone", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_SANDSTONE_SLAB("smooth_sandstone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_SANDSTONE_STAIRS("smooth_sandstone_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_STONE("smooth_stone", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SMOOTH_STONE_SLAB("smooth_stone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SNIFFER_EGG("sniffer_egg", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SNOW("snow", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SNOW_BLOCK("snow_block", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SOUL_CAMPFIRE("soul_campfire", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SOUL_FIRE("soul_fire", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SOUL_LANTERN("soul_lantern", Block::BlockSetting().set_resistance(3.5).set_hardness(3.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SOUL_SAND("soul_sand", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(0.4).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SOUL_SOIL("soul_soil", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SOUL_TORCH("soul_torch", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SOUL_WALL_TORCH("soul_wall_torch", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SPAWNER("spawner", Block::BlockSetting().set_resistance(5.0).set_hardness(5.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SPONGE("sponge", Block::BlockSetting().set_resistance(0.6).set_hardness(0.6).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SPORE_BLOSSOM("spore_blossom", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SPRUCE_BUTTON("spruce_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SPRUCE_DOOR("spruce_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SPRUCE_FENCE("spruce_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SPRUCE_FENCE_GATE("spruce_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SPRUCE_HANGING_SIGN("spruce_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SPRUCE_LEAVES("spruce_leaves", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SPRUCE_LOG("spruce_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SPRUCE_PLANKS("spruce_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SPRUCE_PRESSURE_PLATE("spruce_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SPRUCE_SAPLING("spruce_sapling", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SPRUCE_SIGN("spruce_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SPRUCE_SLAB("spruce_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SPRUCE_STAIRS("spruce_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SPRUCE_TRAPDOOR("spruce_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SPRUCE_WALL_HANGING_SIGN("spruce_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SPRUCE_WALL_SIGN("spruce_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SPRUCE_WOOD("spruce_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STICKY_PISTON("sticky_piston", Block::BlockSetting().set_resistance(1.5).set_hardness(1.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STONE("stone", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STONE_BRICK_SLAB("stone_brick_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STONE_BRICK_STAIRS("stone_brick_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STONE_BRICK_WALL("stone_brick_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STONE_BRICKS("stone_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STONE_BUTTON("stone_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block STONE_PRESSURE_PLATE("stone_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block STONE_SLAB("stone_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STONE_STAIRS("stone_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STONECUTTER("stonecutter", Block::BlockSetting().set_resistance(3.5).set_hardness(3.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_ACACIA_LOG("stripped_acacia_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_ACACIA_WOOD("stripped_acacia_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_BAMBOO_BLOCK("stripped_bamboo_block", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_BIRCH_LOG("stripped_birch_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_BIRCH_WOOD("stripped_birch_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_CHERRY_LOG("stripped_cherry_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_CHERRY_WOOD("stripped_cherry_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_CRIMSON_HYPHAE("stripped_crimson_hyphae", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_CRIMSON_STEM("stripped_crimson_stem", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_DARK_OAK_LOG("stripped_dark_oak_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_DARK_OAK_WOOD("stripped_dark_oak_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_JUNGLE_LOG("stripped_jungle_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_JUNGLE_WOOD("stripped_jungle_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_MANGROVE_LOG("stripped_mangrove_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_MANGROVE_WOOD("stripped_mangrove_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_OAK_LOG("stripped_oak_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_OAK_WOOD("stripped_oak_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_PALE_OAK_LOG("stripped_pale_oak_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_PALE_OAK_WOOD("stripped_pale_oak_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_SPRUCE_LOG("stripped_spruce_log", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_SPRUCE_WOOD("stripped_spruce_wood", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_WARPED_HYPHAE("stripped_warped_hyphae", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRIPPED_WARPED_STEM("stripped_warped_stem", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRUCTURE_BLOCK("structure_block", Block::BlockSetting().set_resistance(3600000.0).set_hardness(-1.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block STRUCTURE_VOID("structure_void", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SUGAR_CANE("sugar_cane", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SUNFLOWER("sunflower", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block SUSPICIOUS_GRAVEL("suspicious_gravel", Block::BlockSetting().set_resistance(0.25).set_hardness(0.25).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SUSPICIOUS_SAND("suspicious_sand", Block::BlockSetting().set_resistance(0.25).set_hardness(0.25).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block SWEET_BERRY_BUSH("sweet_berry_bush", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TALL_DRY_GRASS("tall_dry_grass", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TALL_GRASS("tall_grass", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TALL_SEAGRASS("tall_seagrass", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TARGET("target", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TERRACOTTA("terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TEST_BLOCK("test_block", Block::BlockSetting().set_resistance(3600000.0).set_hardness(-1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TEST_INSTANCE_BLOCK("test_instance_block", Block::BlockSetting().set_resistance(3600000.0).set_hardness(-1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TINTED_GLASS("tinted_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TNT("tnt", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TORCH("torch", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TORCHFLOWER("torchflower", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TORCHFLOWER_CROP("torchflower_crop", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TRAPPED_CHEST("trapped_chest", Block::BlockSetting().set_resistance(2.5).set_hardness(2.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TRIAL_SPAWNER("trial_spawner", Block::BlockSetting().set_resistance(50.0).set_hardness(50.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TRIPWIRE("tripwire", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TRIPWIRE_HOOK("tripwire_hook", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TUBE_CORAL("tube_coral", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TUBE_CORAL_BLOCK("tube_coral_block", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TUBE_CORAL_FAN("tube_coral_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TUBE_CORAL_WALL_FAN("tube_coral_wall_fan", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TUFF("tuff", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TUFF_BRICK_SLAB("tuff_brick_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TUFF_BRICK_STAIRS("tuff_brick_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TUFF_BRICK_WALL("tuff_brick_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TUFF_BRICKS("tuff_bricks", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TUFF_SLAB("tuff_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TUFF_STAIRS("tuff_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TUFF_WALL("tuff_wall", Block::BlockSetting().set_resistance(6.0).set_hardness(1.5).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TURTLE_EGG("turtle_egg", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block TWISTING_VINES("twisting_vines", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block TWISTING_VINES_PLANT("twisting_vines_plant", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block VAULT("vault", Block::BlockSetting().set_resistance(50.0).set_hardness(50.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block VERDANT_FROGLIGHT("verdant_froglight", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block VINE("vine", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block VOID_AIR("void_air", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WALL_TORCH("wall_torch", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WARPED_BUTTON("warped_button", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WARPED_DOOR("warped_door", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WARPED_FENCE("warped_fence", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WARPED_FENCE_GATE("warped_fence_gate", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WARPED_FUNGUS("warped_fungus", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WARPED_HANGING_SIGN("warped_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WARPED_HYPHAE("warped_hyphae", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WARPED_NYLIUM("warped_nylium", Block::BlockSetting().set_resistance(0.4).set_hardness(0.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WARPED_PLANKS("warped_planks", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WARPED_PRESSURE_PLATE("warped_pressure_plate", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WARPED_ROOTS("warped_roots", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WARPED_SIGN("warped_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WARPED_SLAB("warped_slab", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WARPED_STAIRS("warped_stairs", Block::BlockSetting().set_resistance(3.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WARPED_STEM("warped_stem", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WARPED_TRAPDOOR("warped_trapdoor", Block::BlockSetting().set_resistance(3.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WARPED_WALL_HANGING_SIGN("warped_wall_hanging_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WARPED_WALL_SIGN("warped_wall_sign", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WARPED_WART_BLOCK("warped_wart_block", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WATER("water", Block::BlockSetting().set_resistance(100.0).set_hardness(100.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WATER_CAULDRON("water_cauldron", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_CHISELED_COPPER("waxed_chiseled_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_COPPER_BLOCK("waxed_copper_block", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_COPPER_BULB("waxed_copper_bulb", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_COPPER_DOOR("waxed_copper_door", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_COPPER_GRATE("waxed_copper_grate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_COPPER_TRAPDOOR("waxed_copper_trapdoor", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_CUT_COPPER("waxed_cut_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_CUT_COPPER_SLAB("waxed_cut_copper_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_CUT_COPPER_STAIRS("waxed_cut_copper_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_EXPOSED_CHISELED_COPPER("waxed_exposed_chiseled_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_EXPOSED_COPPER("waxed_exposed_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_EXPOSED_COPPER_BULB("waxed_exposed_copper_bulb", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_EXPOSED_COPPER_DOOR("waxed_exposed_copper_door", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_EXPOSED_COPPER_GRATE("waxed_exposed_copper_grate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_EXPOSED_COPPER_TRAPDOOR("waxed_exposed_copper_trapdoor", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_EXPOSED_CUT_COPPER("waxed_exposed_cut_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_EXPOSED_CUT_COPPER_SLAB("waxed_exposed_cut_copper_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_EXPOSED_CUT_COPPER_STAIRS("waxed_exposed_cut_copper_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_OXIDIZED_CHISELED_COPPER("waxed_oxidized_chiseled_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_OXIDIZED_COPPER("waxed_oxidized_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_OXIDIZED_COPPER_BULB("waxed_oxidized_copper_bulb", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_OXIDIZED_COPPER_DOOR("waxed_oxidized_copper_door", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_OXIDIZED_COPPER_GRATE("waxed_oxidized_copper_grate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_OXIDIZED_COPPER_TRAPDOOR("waxed_oxidized_copper_trapdoor", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_OXIDIZED_CUT_COPPER("waxed_oxidized_cut_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_OXIDIZED_CUT_COPPER_SLAB("waxed_oxidized_cut_copper_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_OXIDIZED_CUT_COPPER_STAIRS("waxed_oxidized_cut_copper_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_WEATHERED_CHISELED_COPPER("waxed_weathered_chiseled_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_WEATHERED_COPPER("waxed_weathered_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_WEATHERED_COPPER_BULB("waxed_weathered_copper_bulb", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_WEATHERED_COPPER_DOOR("waxed_weathered_copper_door", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_WEATHERED_COPPER_GRATE("waxed_weathered_copper_grate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_WEATHERED_COPPER_TRAPDOOR("waxed_weathered_copper_trapdoor", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_WEATHERED_CUT_COPPER("waxed_weathered_cut_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_WEATHERED_CUT_COPPER_SLAB("waxed_weathered_cut_copper_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WAXED_WEATHERED_CUT_COPPER_STAIRS("waxed_weathered_cut_copper_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WEATHERED_CHISELED_COPPER("weathered_chiseled_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WEATHERED_COPPER("weathered_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WEATHERED_COPPER_BULB("weathered_copper_bulb", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WEATHERED_COPPER_DOOR("weathered_copper_door", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WEATHERED_COPPER_GRATE("weathered_copper_grate", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WEATHERED_COPPER_TRAPDOOR("weathered_copper_trapdoor", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WEATHERED_CUT_COPPER("weathered_cut_copper", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WEATHERED_CUT_COPPER_SLAB("weathered_cut_copper_slab", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WEATHERED_CUT_COPPER_STAIRS("weathered_cut_copper_stairs", Block::BlockSetting().set_resistance(6.0).set_hardness(3.0).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WEEPING_VINES("weeping_vines", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WEEPING_VINES_PLANT("weeping_vines_plant", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WET_SPONGE("wet_sponge", Block::BlockSetting().set_resistance(0.6).set_hardness(0.6).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHEAT("wheat", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WHITE_BANNER("white_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WHITE_BED("white_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHITE_CANDLE("white_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHITE_CANDLE_CAKE("white_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHITE_CARPET("white_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHITE_CONCRETE("white_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHITE_CONCRETE_POWDER("white_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHITE_GLAZED_TERRACOTTA("white_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHITE_SHULKER_BOX("white_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHITE_STAINED_GLASS("white_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHITE_STAINED_GLASS_PANE("white_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHITE_TERRACOTTA("white_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WHITE_TULIP("white_tulip", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WHITE_WALL_BANNER("white_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WHITE_WOOL("white_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WILDFLOWERS("wildflowers", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WITHER_ROSE("wither_rose", Block::BlockSetting().set_resistance(0.0).set_hardness(0.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block WITHER_SKELETON_SKULL("wither_skeleton_skull", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block WITHER_SKELETON_WALL_SKULL("wither_skeleton_wall_skull", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_BANNER("yellow_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block YELLOW_BED("yellow_bed", Block::BlockSetting().set_resistance(0.2).set_hardness(0.2).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_CANDLE("yellow_candle", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_CANDLE_CAKE("yellow_candle_cake", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_CARPET("yellow_carpet", Block::BlockSetting().set_resistance(0.1).set_hardness(0.1).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_CONCRETE("yellow_concrete", Block::BlockSetting().set_resistance(1.8).set_hardness(1.8).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_CONCRETE_POWDER("yellow_concrete_powder", Block::BlockSetting().set_resistance(0.5).set_hardness(0.5).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_GLAZED_TERRACOTTA("yellow_glazed_terracotta", Block::BlockSetting().set_resistance(1.4).set_hardness(1.4).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_SHULKER_BOX("yellow_shulker_box", Block::BlockSetting().set_resistance(2.0).set_hardness(2.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_STAINED_GLASS("yellow_stained_glass", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_STAINED_GLASS_PANE("yellow_stained_glass_pane", Block::BlockSetting().set_resistance(0.3).set_hardness(0.3).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_TERRACOTTA("yellow_terracotta", Block::BlockSetting().set_resistance(4.2).set_hardness(1.25).requires_tool(true).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block YELLOW_WALL_BANNER("yellow_wall_banner", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(false));
    constexpr Block YELLOW_WOOL("yellow_wool", Block::BlockSetting().set_resistance(0.8).set_hardness(0.8).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ZOMBIE_HEAD("zombie_head", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
    constexpr Block ZOMBIE_WALL_HEAD("zombie_wall_head", Block::BlockSetting().set_resistance(1.0).set_hardness(1.0).requires_tool(false).set_slipperiness(0.6).set_velocity_multiplier(1.0).set_jump_velocity_multiplier(1.0).set_collidable(true));
}

inline const std::vector<std::pair<const Block*, std::vector<std::pair<std::type_index, int>>>>& get_block_states()
{
    static const std::vector<std::pair<const Block*, std::vector<std::pair<std::type_index, int>>>> block_states = {
        {&Blocks::AIR, {} },
        {&Blocks::STONE, {} },
        {&Blocks::GRANITE, {} },
        {&Blocks::POLISHED_GRANITE, {} },
        {&Blocks::DIORITE, {} },
        {&Blocks::POLISHED_DIORITE, {} },
        {&Blocks::ANDESITE, {} },
        {&Blocks::POLISHED_ANDESITE, {} },
        {&Blocks::GRASS_BLOCK, {{ std::type_index(typeid(Snowy)), 1 }, } },
        {&Blocks::DIRT, {} },
        {&Blocks::COARSE_DIRT, {} },
        {&Blocks::PODZOL, {{ std::type_index(typeid(Snowy)), 1 }, } },
        {&Blocks::COBBLESTONE, {} },
        {&Blocks::OAK_PLANKS, {} },
        {&Blocks::SPRUCE_PLANKS, {} },
        {&Blocks::BIRCH_PLANKS, {} },
        {&Blocks::JUNGLE_PLANKS, {} },
        {&Blocks::ACACIA_PLANKS, {} },
        {&Blocks::CHERRY_PLANKS, {} },
        {&Blocks::DARK_OAK_PLANKS, {} },
        {&Blocks::PALE_OAK_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::PALE_OAK_PLANKS, {} },
        {&Blocks::MANGROVE_PLANKS, {} },
        {&Blocks::BAMBOO_PLANKS, {} },
        {&Blocks::BAMBOO_MOSAIC, {} },
        {&Blocks::OAK_SAPLING, {{ std::type_index(typeid(Stage)), 1 }, } },
        {&Blocks::SPRUCE_SAPLING, {{ std::type_index(typeid(Stage)), 1 }, } },
        {&Blocks::BIRCH_SAPLING, {{ std::type_index(typeid(Stage)), 1 }, } },
        {&Blocks::JUNGLE_SAPLING, {{ std::type_index(typeid(Stage)), 1 }, } },
        {&Blocks::ACACIA_SAPLING, {{ std::type_index(typeid(Stage)), 1 }, } },
        {&Blocks::CHERRY_SAPLING, {{ std::type_index(typeid(Stage)), 1 }, } },
        {&Blocks::DARK_OAK_SAPLING, {{ std::type_index(typeid(Stage)), 1 }, } },
        {&Blocks::PALE_OAK_SAPLING, {{ std::type_index(typeid(Stage)), 1 }, } },
        {&Blocks::MANGROVE_PROPAGULE, {{ std::type_index(typeid(Age5)), 4 }, { std::type_index(typeid(Hanging)), 1 }, { std::type_index(typeid(Stage)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BEDROCK, {} },
        {&Blocks::WATER, {{ std::type_index(typeid(Level16)), 15 }, } },
        {&Blocks::LAVA, {{ std::type_index(typeid(Level16)), 15 }, } },
        {&Blocks::SAND, {} },
        {&Blocks::SUSPICIOUS_SAND, {{ std::type_index(typeid(Dusted)), 3 }, } },
        {&Blocks::RED_SAND, {} },
        {&Blocks::GRAVEL, {} },
        {&Blocks::SUSPICIOUS_GRAVEL, {{ std::type_index(typeid(Dusted)), 3 }, } },
        {&Blocks::GOLD_ORE, {} },
        {&Blocks::DEEPSLATE_GOLD_ORE, {} },
        {&Blocks::IRON_ORE, {} },
        {&Blocks::DEEPSLATE_IRON_ORE, {} },
        {&Blocks::COAL_ORE, {} },
        {&Blocks::DEEPSLATE_COAL_ORE, {} },
        {&Blocks::NETHER_GOLD_ORE, {} },
        {&Blocks::OAK_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::SPRUCE_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::BIRCH_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::JUNGLE_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::ACACIA_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::CHERRY_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::DARK_OAK_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::PALE_OAK_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::MANGROVE_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::MANGROVE_ROOTS, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MUDDY_MANGROVE_ROOTS, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::BAMBOO_BLOCK, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_SPRUCE_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_BIRCH_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_JUNGLE_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_ACACIA_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_CHERRY_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_DARK_OAK_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_PALE_OAK_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_OAK_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_MANGROVE_LOG, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_BAMBOO_BLOCK, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::OAK_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::SPRUCE_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::BIRCH_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::JUNGLE_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::ACACIA_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::CHERRY_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::DARK_OAK_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::MANGROVE_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_OAK_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_SPRUCE_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_BIRCH_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_JUNGLE_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_ACACIA_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_CHERRY_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_DARK_OAK_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_PALE_OAK_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_MANGROVE_WOOD, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::OAK_LEAVES, {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SPRUCE_LEAVES, {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BIRCH_LEAVES, {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::JUNGLE_LEAVES, {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ACACIA_LEAVES, {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CHERRY_LEAVES, {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DARK_OAK_LEAVES, {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PALE_OAK_LEAVES, {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MANGROVE_LEAVES, {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::AZALEA_LEAVES, {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::FLOWERING_AZALEA_LEAVES, {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SPONGE, {} },
        {&Blocks::WET_SPONGE, {} },
        {&Blocks::GLASS, {} },
        {&Blocks::LAPIS_ORE, {} },
        {&Blocks::DEEPSLATE_LAPIS_ORE, {} },
        {&Blocks::LAPIS_BLOCK, {} },
        {&Blocks::DISPENSER, {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Triggered)), 1 }, } },
        {&Blocks::SANDSTONE, {} },
        {&Blocks::CHISELED_SANDSTONE, {} },
        {&Blocks::CUT_SANDSTONE, {} },
        {&Blocks::NOTE_BLOCK, {{ std::type_index(typeid(Instrument)), 22 }, { std::type_index(typeid(Note)), 24 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WHITE_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::ORANGE_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::MAGENTA_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::LIGHT_BLUE_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::YELLOW_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::LIME_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::PINK_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::GRAY_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::LIGHT_GRAY_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::CYAN_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::PURPLE_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::BLUE_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::BROWN_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::GREEN_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::RED_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::BLACK_BED, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {&Blocks::POWERED_RAIL, {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(RailShape)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DETECTOR_RAIL, {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(RailShape)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::STICKY_PISTON, {{ std::type_index(typeid(Extended)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::COBWEB, {} },
        {&Blocks::SHORT_GRASS, {} },
        {&Blocks::FERN, {} },
        {&Blocks::DEAD_BUSH, {} },
        {&Blocks::BUSH, {} },
        {&Blocks::SHORT_DRY_GRASS, {} },
        {&Blocks::TALL_DRY_GRASS, {} },
        {&Blocks::SEAGRASS, {} },
        {&Blocks::TALL_SEAGRASS, {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {&Blocks::PISTON, {{ std::type_index(typeid(Extended)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::PISTON_HEAD, {{ std::type_index(typeid(PistonType)), 1 }, { std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Short)), 1 }, } },
        {&Blocks::WHITE_WOOL, {} },
        {&Blocks::ORANGE_WOOL, {} },
        {&Blocks::MAGENTA_WOOL, {} },
        {&Blocks::LIGHT_BLUE_WOOL, {} },
        {&Blocks::YELLOW_WOOL, {} },
        {&Blocks::LIME_WOOL, {} },
        {&Blocks::PINK_WOOL, {} },
        {&Blocks::GRAY_WOOL, {} },
        {&Blocks::LIGHT_GRAY_WOOL, {} },
        {&Blocks::CYAN_WOOL, {} },
        {&Blocks::PURPLE_WOOL, {} },
        {&Blocks::BLUE_WOOL, {} },
        {&Blocks::BROWN_WOOL, {} },
        {&Blocks::GREEN_WOOL, {} },
        {&Blocks::RED_WOOL, {} },
        {&Blocks::BLACK_WOOL, {} },
        {&Blocks::MOVING_PISTON, {{ std::type_index(typeid(PistonType)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::DANDELION, {} },
        {&Blocks::TORCHFLOWER, {} },
        {&Blocks::POPPY, {} },
        {&Blocks::BLUE_ORCHID, {} },
        {&Blocks::ALLIUM, {} },
        {&Blocks::AZURE_BLUET, {} },
        {&Blocks::RED_TULIP, {} },
        {&Blocks::ORANGE_TULIP, {} },
        {&Blocks::WHITE_TULIP, {} },
        {&Blocks::PINK_TULIP, {} },
        {&Blocks::OXEYE_DAISY, {} },
        {&Blocks::CORNFLOWER, {} },
        {&Blocks::WITHER_ROSE, {} },
        {&Blocks::LILY_OF_THE_VALLEY, {} },
        {&Blocks::BROWN_MUSHROOM, {} },
        {&Blocks::RED_MUSHROOM, {} },
        {&Blocks::GOLD_BLOCK, {} },
        {&Blocks::IRON_BLOCK, {} },
        {&Blocks::BRICKS, {} },
        {&Blocks::TNT, {{ std::type_index(typeid(Unstable)), 1 }, } },
        {&Blocks::BOOKSHELF, {} },
        {&Blocks::CHISELED_BOOKSHELF, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Slot0Occupied)), 1 }, { std::type_index(typeid(Slot1Occupied)), 1 }, { std::type_index(typeid(Slot2Occupied)), 1 }, { std::type_index(typeid(Slot3Occupied)), 1 }, { std::type_index(typeid(Slot4Occupied)), 1 }, { std::type_index(typeid(Slot5Occupied)), 1 }, } },
        {&Blocks::MOSSY_COBBLESTONE, {} },
        {&Blocks::OBSIDIAN, {} },
        {&Blocks::TORCH, {} },
        {&Blocks::WALL_TORCH, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::FIRE, {{ std::type_index(typeid(Age16)), 15 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::SOUL_FIRE, {} },
        {&Blocks::SPAWNER, {} },
        {&Blocks::CREAKING_HEART, {{ std::type_index(typeid(AxisXYZ)), 2 }, { std::type_index(typeid(CreakingHeartState)), 2 }, { std::type_index(typeid(Natural)), 1 }, } },
        {&Blocks::OAK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CHEST, {{ std::type_index(typeid(ChestType)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::REDSTONE_WIRE, {{ std::type_index(typeid(RedstoneEast)), 2 }, { std::type_index(typeid(RedstoneNorth)), 2 }, { std::type_index(typeid(Power)), 15 }, { std::type_index(typeid(RedstoneSouth)), 2 }, { std::type_index(typeid(RedstoneWest)), 2 }, } },
        {&Blocks::DIAMOND_ORE, {} },
        {&Blocks::DEEPSLATE_DIAMOND_ORE, {} },
        {&Blocks::DIAMOND_BLOCK, {} },
        {&Blocks::CRAFTING_TABLE, {} },
        {&Blocks::WHEAT, {{ std::type_index(typeid(Age8)), 7 }, } },
        {&Blocks::FARMLAND, {{ std::type_index(typeid(Moisture)), 7 }, } },
        {&Blocks::FURNACE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::OAK_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SPRUCE_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BIRCH_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ACACIA_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CHERRY_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::JUNGLE_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DARK_OAK_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PALE_OAK_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MANGROVE_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BAMBOO_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::OAK_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::LADDER, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::RAIL, {{ std::type_index(typeid(RailShapeFull)), 9 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::COBBLESTONE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::OAK_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SPRUCE_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BIRCH_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ACACIA_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CHERRY_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::JUNGLE_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DARK_OAK_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PALE_OAK_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MANGROVE_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BAMBOO_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::OAK_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SPRUCE_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BIRCH_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ACACIA_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CHERRY_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::JUNGLE_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DARK_OAK_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PALE_OAK_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CRIMSON_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WARPED_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MANGROVE_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BAMBOO_HANGING_SIGN, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::OAK_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SPRUCE_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BIRCH_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ACACIA_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CHERRY_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::JUNGLE_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DARK_OAK_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PALE_OAK_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MANGROVE_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CRIMSON_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WARPED_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BAMBOO_WALL_HANGING_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::LEVER, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::STONE_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::IRON_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::OAK_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::SPRUCE_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::BIRCH_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::JUNGLE_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::ACACIA_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::CHERRY_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::DARK_OAK_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::PALE_OAK_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::MANGROVE_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::BAMBOO_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::REDSTONE_ORE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::DEEPSLATE_REDSTONE_ORE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::REDSTONE_TORCH, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::REDSTONE_WALL_TORCH, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::STONE_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::SNOW, {{ std::type_index(typeid(Layers)), 7 }, } },
        {&Blocks::ICE, {} },
        {&Blocks::SNOW_BLOCK, {} },
        {&Blocks::CACTUS, {{ std::type_index(typeid(Age16)), 15 }, } },
        {&Blocks::CACTUS_FLOWER, {} },
        {&Blocks::CLAY, {} },
        {&Blocks::SUGAR_CANE, {{ std::type_index(typeid(Age16)), 15 }, } },
        {&Blocks::JUKEBOX, {{ std::type_index(typeid(HasRecord)), 1 }, } },
        {&Blocks::OAK_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::NETHERRACK, {} },
        {&Blocks::SOUL_SAND, {} },
        {&Blocks::SOUL_SOIL, {} },
        {&Blocks::BASALT, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::POLISHED_BASALT, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::SOUL_TORCH, {} },
        {&Blocks::SOUL_WALL_TORCH, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::GLOWSTONE, {} },
        {&Blocks::NETHER_PORTAL, {{ std::type_index(typeid(AxisXZ)), 1 }, } },
        {&Blocks::CARVED_PUMPKIN, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::JACK_O_LANTERN, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::CAKE, {{ std::type_index(typeid(Bites)), 6 }, } },
        {&Blocks::REPEATER, {{ std::type_index(typeid(Delay)), 3 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Locked)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WHITE_STAINED_GLASS, {} },
        {&Blocks::ORANGE_STAINED_GLASS, {} },
        {&Blocks::MAGENTA_STAINED_GLASS, {} },
        {&Blocks::LIGHT_BLUE_STAINED_GLASS, {} },
        {&Blocks::YELLOW_STAINED_GLASS, {} },
        {&Blocks::LIME_STAINED_GLASS, {} },
        {&Blocks::PINK_STAINED_GLASS, {} },
        {&Blocks::GRAY_STAINED_GLASS, {} },
        {&Blocks::LIGHT_GRAY_STAINED_GLASS, {} },
        {&Blocks::CYAN_STAINED_GLASS, {} },
        {&Blocks::PURPLE_STAINED_GLASS, {} },
        {&Blocks::BLUE_STAINED_GLASS, {} },
        {&Blocks::BROWN_STAINED_GLASS, {} },
        {&Blocks::GREEN_STAINED_GLASS, {} },
        {&Blocks::RED_STAINED_GLASS, {} },
        {&Blocks::BLACK_STAINED_GLASS, {} },
        {&Blocks::OAK_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SPRUCE_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BIRCH_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::JUNGLE_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ACACIA_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CHERRY_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DARK_OAK_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PALE_OAK_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MANGROVE_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BAMBOO_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::STONE_BRICKS, {} },
        {&Blocks::MOSSY_STONE_BRICKS, {} },
        {&Blocks::CRACKED_STONE_BRICKS, {} },
        {&Blocks::CHISELED_STONE_BRICKS, {} },
        {&Blocks::PACKED_MUD, {} },
        {&Blocks::MUD_BRICKS, {} },
        {&Blocks::INFESTED_STONE, {} },
        {&Blocks::INFESTED_COBBLESTONE, {} },
        {&Blocks::INFESTED_STONE_BRICKS, {} },
        {&Blocks::INFESTED_MOSSY_STONE_BRICKS, {} },
        {&Blocks::INFESTED_CRACKED_STONE_BRICKS, {} },
        {&Blocks::INFESTED_CHISELED_STONE_BRICKS, {} },
        {&Blocks::BROWN_MUSHROOM_BLOCK, {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::RED_MUSHROOM_BLOCK, {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::MUSHROOM_STEM, {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::IRON_BARS, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::CHAIN, {{ std::type_index(typeid(AxisXYZ)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::PUMPKIN, {} },
        {&Blocks::MELON, {} },
        {&Blocks::ATTACHED_PUMPKIN_STEM, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::ATTACHED_MELON_STEM, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::PUMPKIN_STEM, {{ std::type_index(typeid(Age8)), 7 }, } },
        {&Blocks::MELON_STEM, {{ std::type_index(typeid(Age8)), 7 }, } },
        {&Blocks::VINE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::GLOW_LICHEN, {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::RESIN_CLUMP, {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::OAK_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::STONE_BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MUD_BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MYCELIUM, {{ std::type_index(typeid(Snowy)), 1 }, } },
        {&Blocks::LILY_PAD, {} },
        {&Blocks::RESIN_BLOCK, {} },
        {&Blocks::RESIN_BRICKS, {} },
        {&Blocks::RESIN_BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::RESIN_BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::RESIN_BRICK_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::CHISELED_RESIN_BRICKS, {} },
        {&Blocks::NETHER_BRICKS, {} },
        {&Blocks::NETHER_BRICK_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::NETHER_BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::NETHER_WART, {{ std::type_index(typeid(Age4)), 3 }, } },
        {&Blocks::ENCHANTING_TABLE, {} },
        {&Blocks::BREWING_STAND, {{ std::type_index(typeid(HasBottle0)), 1 }, { std::type_index(typeid(HasBottle1)), 1 }, { std::type_index(typeid(HasBottle2)), 1 }, } },
        {&Blocks::CAULDRON, {} },
        {&Blocks::WATER_CAULDRON, {{ std::type_index(typeid(Level3)), 2 }, } },
        {&Blocks::LAVA_CAULDRON, {} },
        {&Blocks::POWDER_SNOW_CAULDRON, {{ std::type_index(typeid(Level3)), 2 }, } },
        {&Blocks::END_PORTAL, {} },
        {&Blocks::END_PORTAL_FRAME, {{ std::type_index(typeid(Eye)), 1 }, { std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::END_STONE, {} },
        {&Blocks::DRAGON_EGG, {} },
        {&Blocks::REDSTONE_LAMP, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::COCOA, {{ std::type_index(typeid(Age3)), 2 }, { std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::SANDSTONE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::EMERALD_ORE, {} },
        {&Blocks::DEEPSLATE_EMERALD_ORE, {} },
        {&Blocks::ENDER_CHEST, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::TRIPWIRE_HOOK, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::TRIPWIRE, {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Disarmed)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::EMERALD_BLOCK, {} },
        {&Blocks::SPRUCE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BIRCH_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::JUNGLE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::COMMAND_BLOCK, {{ std::type_index(typeid(Conditional)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::BEACON, {} },
        {&Blocks::COBBLESTONE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::MOSSY_COBBLESTONE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::FLOWER_POT, {} },
        {&Blocks::POTTED_TORCHFLOWER, {} },
        {&Blocks::POTTED_OAK_SAPLING, {} },
        {&Blocks::POTTED_SPRUCE_SAPLING, {} },
        {&Blocks::POTTED_BIRCH_SAPLING, {} },
        {&Blocks::POTTED_JUNGLE_SAPLING, {} },
        {&Blocks::POTTED_ACACIA_SAPLING, {} },
        {&Blocks::POTTED_CHERRY_SAPLING, {} },
        {&Blocks::POTTED_DARK_OAK_SAPLING, {} },
        {&Blocks::POTTED_PALE_OAK_SAPLING, {} },
        {&Blocks::POTTED_MANGROVE_PROPAGULE, {} },
        {&Blocks::POTTED_FERN, {} },
        {&Blocks::POTTED_DANDELION, {} },
        {&Blocks::POTTED_POPPY, {} },
        {&Blocks::POTTED_BLUE_ORCHID, {} },
        {&Blocks::POTTED_ALLIUM, {} },
        {&Blocks::POTTED_AZURE_BLUET, {} },
        {&Blocks::POTTED_RED_TULIP, {} },
        {&Blocks::POTTED_ORANGE_TULIP, {} },
        {&Blocks::POTTED_WHITE_TULIP, {} },
        {&Blocks::POTTED_PINK_TULIP, {} },
        {&Blocks::POTTED_OXEYE_DAISY, {} },
        {&Blocks::POTTED_CORNFLOWER, {} },
        {&Blocks::POTTED_LILY_OF_THE_VALLEY, {} },
        {&Blocks::POTTED_WITHER_ROSE, {} },
        {&Blocks::POTTED_RED_MUSHROOM, {} },
        {&Blocks::POTTED_BROWN_MUSHROOM, {} },
        {&Blocks::POTTED_DEAD_BUSH, {} },
        {&Blocks::POTTED_CACTUS, {} },
        {&Blocks::CARROTS, {{ std::type_index(typeid(Age8)), 7 }, } },
        {&Blocks::POTATOES, {{ std::type_index(typeid(Age8)), 7 }, } },
        {&Blocks::OAK_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::SPRUCE_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::BIRCH_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::JUNGLE_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::ACACIA_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::CHERRY_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::DARK_OAK_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::PALE_OAK_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::MANGROVE_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::BAMBOO_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::SKELETON_SKULL, {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::SKELETON_WALL_SKULL, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WITHER_SKELETON_SKULL, {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::WITHER_SKELETON_WALL_SKULL, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::ZOMBIE_HEAD, {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::ZOMBIE_WALL_HEAD, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::PLAYER_HEAD, {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::PLAYER_WALL_HEAD, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::CREEPER_HEAD, {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::CREEPER_WALL_HEAD, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::DRAGON_HEAD, {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::DRAGON_WALL_HEAD, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::PIGLIN_HEAD, {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::PIGLIN_WALL_HEAD, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::ANVIL, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::CHIPPED_ANVIL, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::DAMAGED_ANVIL, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::TRAPPED_CHEST, {{ std::type_index(typeid(ChestType)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::LIGHT_WEIGHTED_PRESSURE_PLATE, {{ std::type_index(typeid(Power)), 15 }, } },
        {&Blocks::HEAVY_WEIGHTED_PRESSURE_PLATE, {{ std::type_index(typeid(Power)), 15 }, } },
        {&Blocks::COMPARATOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(ComparatorMode)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::DAYLIGHT_DETECTOR, {{ std::type_index(typeid(Inverted)), 1 }, { std::type_index(typeid(Power)), 15 }, } },
        {&Blocks::REDSTONE_BLOCK, {} },
        {&Blocks::NETHER_QUARTZ_ORE, {} },
        {&Blocks::HOPPER, {{ std::type_index(typeid(Enabled)), 1 }, { std::type_index(typeid(Facing5)), 4 }, } },
        {&Blocks::QUARTZ_BLOCK, {} },
        {&Blocks::CHISELED_QUARTZ_BLOCK, {} },
        {&Blocks::QUARTZ_PILLAR, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::QUARTZ_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ACTIVATOR_RAIL, {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(RailShape)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DROPPER, {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Triggered)), 1 }, } },
        {&Blocks::WHITE_TERRACOTTA, {} },
        {&Blocks::ORANGE_TERRACOTTA, {} },
        {&Blocks::MAGENTA_TERRACOTTA, {} },
        {&Blocks::LIGHT_BLUE_TERRACOTTA, {} },
        {&Blocks::YELLOW_TERRACOTTA, {} },
        {&Blocks::LIME_TERRACOTTA, {} },
        {&Blocks::PINK_TERRACOTTA, {} },
        {&Blocks::GRAY_TERRACOTTA, {} },
        {&Blocks::LIGHT_GRAY_TERRACOTTA, {} },
        {&Blocks::CYAN_TERRACOTTA, {} },
        {&Blocks::PURPLE_TERRACOTTA, {} },
        {&Blocks::BLUE_TERRACOTTA, {} },
        {&Blocks::BROWN_TERRACOTTA, {} },
        {&Blocks::GREEN_TERRACOTTA, {} },
        {&Blocks::RED_TERRACOTTA, {} },
        {&Blocks::BLACK_TERRACOTTA, {} },
        {&Blocks::WHITE_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::ORANGE_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::MAGENTA_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::LIGHT_BLUE_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::YELLOW_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::LIME_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::PINK_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::GRAY_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::LIGHT_GRAY_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::CYAN_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::PURPLE_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::BLUE_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::BROWN_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::GREEN_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::RED_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::BLACK_STAINED_GLASS_PANE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::ACACIA_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CHERRY_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DARK_OAK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PALE_OAK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MANGROVE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BAMBOO_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BAMBOO_MOSAIC_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SLIME_BLOCK, {} },
        {&Blocks::BARRIER, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::LIGHT, {{ std::type_index(typeid(Level16)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::IRON_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PRISMARINE, {} },
        {&Blocks::PRISMARINE_BRICKS, {} },
        {&Blocks::DARK_PRISMARINE, {} },
        {&Blocks::PRISMARINE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PRISMARINE_BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DARK_PRISMARINE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PRISMARINE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PRISMARINE_BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DARK_PRISMARINE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SEA_LANTERN, {} },
        {&Blocks::HAY_BLOCK, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::WHITE_CARPET, {} },
        {&Blocks::ORANGE_CARPET, {} },
        {&Blocks::MAGENTA_CARPET, {} },
        {&Blocks::LIGHT_BLUE_CARPET, {} },
        {&Blocks::YELLOW_CARPET, {} },
        {&Blocks::LIME_CARPET, {} },
        {&Blocks::PINK_CARPET, {} },
        {&Blocks::GRAY_CARPET, {} },
        {&Blocks::LIGHT_GRAY_CARPET, {} },
        {&Blocks::CYAN_CARPET, {} },
        {&Blocks::PURPLE_CARPET, {} },
        {&Blocks::BLUE_CARPET, {} },
        {&Blocks::BROWN_CARPET, {} },
        {&Blocks::GREEN_CARPET, {} },
        {&Blocks::RED_CARPET, {} },
        {&Blocks::BLACK_CARPET, {} },
        {&Blocks::TERRACOTTA, {} },
        {&Blocks::COAL_BLOCK, {} },
        {&Blocks::PACKED_ICE, {} },
        {&Blocks::SUNFLOWER, {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {&Blocks::LILAC, {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {&Blocks::ROSE_BUSH, {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {&Blocks::PEONY, {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {&Blocks::TALL_GRASS, {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {&Blocks::LARGE_FERN, {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {&Blocks::WHITE_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::ORANGE_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::MAGENTA_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::LIGHT_BLUE_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::YELLOW_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::LIME_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::PINK_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::GRAY_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::LIGHT_GRAY_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::CYAN_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::PURPLE_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::BLUE_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::BROWN_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::GREEN_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::RED_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::BLACK_BANNER, {{ std::type_index(typeid(Rotation)), 15 }, } },
        {&Blocks::WHITE_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::ORANGE_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::MAGENTA_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::LIGHT_BLUE_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::YELLOW_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::LIME_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::PINK_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::GRAY_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::LIGHT_GRAY_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::CYAN_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::PURPLE_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::BLUE_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::BROWN_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::GREEN_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::RED_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::BLACK_WALL_BANNER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::RED_SANDSTONE, {} },
        {&Blocks::CHISELED_RED_SANDSTONE, {} },
        {&Blocks::CUT_RED_SANDSTONE, {} },
        {&Blocks::RED_SANDSTONE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::OAK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SPRUCE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BIRCH_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::JUNGLE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ACACIA_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CHERRY_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DARK_OAK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PALE_OAK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MANGROVE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BAMBOO_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BAMBOO_MOSAIC_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::STONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SMOOTH_STONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SANDSTONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CUT_SANDSTONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PETRIFIED_OAK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::COBBLESTONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::STONE_BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MUD_BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::NETHER_BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::QUARTZ_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::RED_SANDSTONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CUT_RED_SANDSTONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PURPUR_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SMOOTH_STONE, {} },
        {&Blocks::SMOOTH_SANDSTONE, {} },
        {&Blocks::SMOOTH_QUARTZ, {} },
        {&Blocks::SMOOTH_RED_SANDSTONE, {} },
        {&Blocks::SPRUCE_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::BIRCH_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::JUNGLE_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::ACACIA_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::CHERRY_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::DARK_OAK_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::PALE_OAK_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::MANGROVE_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::BAMBOO_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::SPRUCE_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::BIRCH_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::JUNGLE_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::ACACIA_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::CHERRY_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::DARK_OAK_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::PALE_OAK_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::MANGROVE_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::BAMBOO_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::SPRUCE_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::BIRCH_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::JUNGLE_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::ACACIA_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::CHERRY_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::DARK_OAK_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::PALE_OAK_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::MANGROVE_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::BAMBOO_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::END_ROD, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::CHORUS_PLANT, {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::CHORUS_FLOWER, {{ std::type_index(typeid(Age6)), 5 }, } },
        {&Blocks::PURPUR_BLOCK, {} },
        {&Blocks::PURPUR_PILLAR, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::PURPUR_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::END_STONE_BRICKS, {} },
        {&Blocks::TORCHFLOWER_CROP, {{ std::type_index(typeid(Age2)), 1 }, } },
        {&Blocks::PITCHER_CROP, {{ std::type_index(typeid(Age5)), 4 }, { std::type_index(typeid(DoorHalf)), 1 }, } },
        {&Blocks::PITCHER_PLANT, {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {&Blocks::BEETROOTS, {{ std::type_index(typeid(Age4)), 3 }, } },
        {&Blocks::DIRT_PATH, {} },
        {&Blocks::END_GATEWAY, {} },
        {&Blocks::REPEATING_COMMAND_BLOCK, {{ std::type_index(typeid(Conditional)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::CHAIN_COMMAND_BLOCK, {{ std::type_index(typeid(Conditional)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::FROSTED_ICE, {{ std::type_index(typeid(Age4)), 3 }, } },
        {&Blocks::MAGMA_BLOCK, {} },
        {&Blocks::NETHER_WART_BLOCK, {} },
        {&Blocks::RED_NETHER_BRICKS, {} },
        {&Blocks::BONE_BLOCK, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRUCTURE_VOID, {} },
        {&Blocks::OBSERVER, {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::WHITE_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::ORANGE_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::MAGENTA_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::LIGHT_BLUE_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::YELLOW_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::LIME_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::PINK_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::GRAY_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::LIGHT_GRAY_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::CYAN_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::PURPLE_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::BLUE_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::BROWN_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::GREEN_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::RED_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::BLACK_SHULKER_BOX, {{ std::type_index(typeid(Facing6)), 5 }, } },
        {&Blocks::WHITE_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::ORANGE_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::MAGENTA_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::LIGHT_BLUE_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::YELLOW_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::LIME_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::PINK_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::GRAY_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::LIGHT_GRAY_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::CYAN_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::PURPLE_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::BLUE_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::BROWN_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::GREEN_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::RED_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::BLACK_GLAZED_TERRACOTTA, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::WHITE_CONCRETE, {} },
        {&Blocks::ORANGE_CONCRETE, {} },
        {&Blocks::MAGENTA_CONCRETE, {} },
        {&Blocks::LIGHT_BLUE_CONCRETE, {} },
        {&Blocks::YELLOW_CONCRETE, {} },
        {&Blocks::LIME_CONCRETE, {} },
        {&Blocks::PINK_CONCRETE, {} },
        {&Blocks::GRAY_CONCRETE, {} },
        {&Blocks::LIGHT_GRAY_CONCRETE, {} },
        {&Blocks::CYAN_CONCRETE, {} },
        {&Blocks::PURPLE_CONCRETE, {} },
        {&Blocks::BLUE_CONCRETE, {} },
        {&Blocks::BROWN_CONCRETE, {} },
        {&Blocks::GREEN_CONCRETE, {} },
        {&Blocks::RED_CONCRETE, {} },
        {&Blocks::BLACK_CONCRETE, {} },
        {&Blocks::WHITE_CONCRETE_POWDER, {} },
        {&Blocks::ORANGE_CONCRETE_POWDER, {} },
        {&Blocks::MAGENTA_CONCRETE_POWDER, {} },
        {&Blocks::LIGHT_BLUE_CONCRETE_POWDER, {} },
        {&Blocks::YELLOW_CONCRETE_POWDER, {} },
        {&Blocks::LIME_CONCRETE_POWDER, {} },
        {&Blocks::PINK_CONCRETE_POWDER, {} },
        {&Blocks::GRAY_CONCRETE_POWDER, {} },
        {&Blocks::LIGHT_GRAY_CONCRETE_POWDER, {} },
        {&Blocks::CYAN_CONCRETE_POWDER, {} },
        {&Blocks::PURPLE_CONCRETE_POWDER, {} },
        {&Blocks::BLUE_CONCRETE_POWDER, {} },
        {&Blocks::BROWN_CONCRETE_POWDER, {} },
        {&Blocks::GREEN_CONCRETE_POWDER, {} },
        {&Blocks::RED_CONCRETE_POWDER, {} },
        {&Blocks::BLACK_CONCRETE_POWDER, {} },
        {&Blocks::KELP, {{ std::type_index(typeid(Age26)), 25 }, } },
        {&Blocks::KELP_PLANT, {} },
        {&Blocks::DRIED_KELP_BLOCK, {} },
        {&Blocks::TURTLE_EGG, {{ std::type_index(typeid(Eggs)), 3 }, { std::type_index(typeid(Hatch)), 2 }, } },
        {&Blocks::SNIFFER_EGG, {{ std::type_index(typeid(Hatch)), 2 }, } },
        {&Blocks::DEAD_TUBE_CORAL_BLOCK, {} },
        {&Blocks::DEAD_BRAIN_CORAL_BLOCK, {} },
        {&Blocks::DEAD_BUBBLE_CORAL_BLOCK, {} },
        {&Blocks::DEAD_FIRE_CORAL_BLOCK, {} },
        {&Blocks::DEAD_HORN_CORAL_BLOCK, {} },
        {&Blocks::TUBE_CORAL_BLOCK, {} },
        {&Blocks::BRAIN_CORAL_BLOCK, {} },
        {&Blocks::BUBBLE_CORAL_BLOCK, {} },
        {&Blocks::FIRE_CORAL_BLOCK, {} },
        {&Blocks::HORN_CORAL_BLOCK, {} },
        {&Blocks::DEAD_TUBE_CORAL, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_BRAIN_CORAL, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_BUBBLE_CORAL, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_FIRE_CORAL, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_HORN_CORAL, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::TUBE_CORAL, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BRAIN_CORAL, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BUBBLE_CORAL, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::FIRE_CORAL, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::HORN_CORAL, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_TUBE_CORAL_FAN, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_BRAIN_CORAL_FAN, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_BUBBLE_CORAL_FAN, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_FIRE_CORAL_FAN, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_HORN_CORAL_FAN, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::TUBE_CORAL_FAN, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BRAIN_CORAL_FAN, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BUBBLE_CORAL_FAN, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::FIRE_CORAL_FAN, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::HORN_CORAL_FAN, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_TUBE_CORAL_WALL_FAN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_BRAIN_CORAL_WALL_FAN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_BUBBLE_CORAL_WALL_FAN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_FIRE_CORAL_WALL_FAN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEAD_HORN_CORAL_WALL_FAN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::TUBE_CORAL_WALL_FAN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BRAIN_CORAL_WALL_FAN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BUBBLE_CORAL_WALL_FAN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::FIRE_CORAL_WALL_FAN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::HORN_CORAL_WALL_FAN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SEA_PICKLE, {{ std::type_index(typeid(Pickles)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BLUE_ICE, {} },
        {&Blocks::CONDUIT, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BAMBOO_SAPLING, {} },
        {&Blocks::BAMBOO, {{ std::type_index(typeid(Age2)), 1 }, { std::type_index(typeid(Leaves)), 2 }, { std::type_index(typeid(Stage)), 1 }, } },
        {&Blocks::POTTED_BAMBOO, {} },
        {&Blocks::VOID_AIR, {} },
        {&Blocks::CAVE_AIR, {} },
        {&Blocks::BUBBLE_COLUMN, {{ std::type_index(typeid(Drag)), 1 }, } },
        {&Blocks::POLISHED_GRANITE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SMOOTH_RED_SANDSTONE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MOSSY_STONE_BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_DIORITE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MOSSY_COBBLESTONE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::END_STONE_BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::STONE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SMOOTH_SANDSTONE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SMOOTH_QUARTZ_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::GRANITE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ANDESITE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::RED_NETHER_BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_ANDESITE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DIORITE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_GRANITE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SMOOTH_RED_SANDSTONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MOSSY_STONE_BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_DIORITE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MOSSY_COBBLESTONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::END_STONE_BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SMOOTH_SANDSTONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SMOOTH_QUARTZ_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::GRANITE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ANDESITE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::RED_NETHER_BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_ANDESITE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DIORITE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BRICK_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::PRISMARINE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::RED_SANDSTONE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::MOSSY_STONE_BRICK_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::GRANITE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::STONE_BRICK_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::MUD_BRICK_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::NETHER_BRICK_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::ANDESITE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::RED_NETHER_BRICK_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::SANDSTONE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::END_STONE_BRICK_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::DIORITE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::SCAFFOLDING, {{ std::type_index(typeid(Bottom)), 1 }, { std::type_index(typeid(Distance8)), 7 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::LOOM, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::BARREL, {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Open)), 1 }, } },
        {&Blocks::SMOKER, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::BLAST_FURNACE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::CARTOGRAPHY_TABLE, {} },
        {&Blocks::FLETCHING_TABLE, {} },
        {&Blocks::GRINDSTONE, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::LECTERN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(HasBook)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::SMITHING_TABLE, {} },
        {&Blocks::STONECUTTER, {{ std::type_index(typeid(Facing4)), 3 }, } },
        {&Blocks::BELL, {{ std::type_index(typeid(Attachment)), 3 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::LANTERN, {{ std::type_index(typeid(Hanging)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SOUL_LANTERN, {{ std::type_index(typeid(Hanging)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CAMPFIRE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(SignalFire)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SOUL_CAMPFIRE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(SignalFire)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SWEET_BERRY_BUSH, {{ std::type_index(typeid(Age4)), 3 }, } },
        {&Blocks::WARPED_STEM, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_WARPED_STEM, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::WARPED_HYPHAE, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_WARPED_HYPHAE, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::WARPED_NYLIUM, {} },
        {&Blocks::WARPED_FUNGUS, {} },
        {&Blocks::WARPED_WART_BLOCK, {} },
        {&Blocks::WARPED_ROOTS, {} },
        {&Blocks::NETHER_SPROUTS, {} },
        {&Blocks::CRIMSON_STEM, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_CRIMSON_STEM, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::CRIMSON_HYPHAE, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::STRIPPED_CRIMSON_HYPHAE, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::CRIMSON_NYLIUM, {} },
        {&Blocks::CRIMSON_FUNGUS, {} },
        {&Blocks::SHROOMLIGHT, {} },
        {&Blocks::WEEPING_VINES, {{ std::type_index(typeid(Age26)), 25 }, } },
        {&Blocks::WEEPING_VINES_PLANT, {} },
        {&Blocks::TWISTING_VINES, {{ std::type_index(typeid(Age26)), 25 }, } },
        {&Blocks::TWISTING_VINES_PLANT, {} },
        {&Blocks::CRIMSON_ROOTS, {} },
        {&Blocks::CRIMSON_PLANKS, {} },
        {&Blocks::WARPED_PLANKS, {} },
        {&Blocks::CRIMSON_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WARPED_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CRIMSON_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WARPED_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::CRIMSON_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::WARPED_FENCE, {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::CRIMSON_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WARPED_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CRIMSON_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WARPED_FENCE_GATE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::CRIMSON_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WARPED_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CRIMSON_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WARPED_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::CRIMSON_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WARPED_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::CRIMSON_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WARPED_SIGN, {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CRIMSON_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WARPED_WALL_SIGN, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::STRUCTURE_BLOCK, {{ std::type_index(typeid(StructureBlockMode)), 3 }, } },
        {&Blocks::JIGSAW, {{ std::type_index(typeid(Orientation)), 11 }, } },
        {&Blocks::TEST_BLOCK, {{ std::type_index(typeid(TestBlockMode)), 3 }, } },
        {&Blocks::TEST_INSTANCE_BLOCK, {} },
        {&Blocks::COMPOSTER, {{ std::type_index(typeid(Level9)), 8 }, } },
        {&Blocks::TARGET, {{ std::type_index(typeid(Power)), 15 }, } },
        {&Blocks::BEE_NEST, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(HoneyLevel)), 5 }, } },
        {&Blocks::BEEHIVE, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(HoneyLevel)), 5 }, } },
        {&Blocks::HONEY_BLOCK, {} },
        {&Blocks::HONEYCOMB_BLOCK, {} },
        {&Blocks::NETHERITE_BLOCK, {} },
        {&Blocks::ANCIENT_DEBRIS, {} },
        {&Blocks::CRYING_OBSIDIAN, {} },
        {&Blocks::RESPAWN_ANCHOR, {{ std::type_index(typeid(Charges)), 4 }, } },
        {&Blocks::POTTED_CRIMSON_FUNGUS, {} },
        {&Blocks::POTTED_WARPED_FUNGUS, {} },
        {&Blocks::POTTED_CRIMSON_ROOTS, {} },
        {&Blocks::POTTED_WARPED_ROOTS, {} },
        {&Blocks::LODESTONE, {} },
        {&Blocks::BLACKSTONE, {} },
        {&Blocks::BLACKSTONE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BLACKSTONE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::BLACKSTONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_BLACKSTONE, {} },
        {&Blocks::POLISHED_BLACKSTONE_BRICKS, {} },
        {&Blocks::CRACKED_POLISHED_BLACKSTONE_BRICKS, {} },
        {&Blocks::CHISELED_POLISHED_BLACKSTONE, {} },
        {&Blocks::POLISHED_BLACKSTONE_BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_BLACKSTONE_BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_BLACKSTONE_BRICK_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::GILDED_BLACKSTONE, {} },
        {&Blocks::POLISHED_BLACKSTONE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_BLACKSTONE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_BLACKSTONE_PRESSURE_PLATE, {{ std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::POLISHED_BLACKSTONE_BUTTON, {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::POLISHED_BLACKSTONE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::CHISELED_NETHER_BRICKS, {} },
        {&Blocks::CRACKED_NETHER_BRICKS, {} },
        {&Blocks::QUARTZ_BRICKS, {} },
        {&Blocks::CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WHITE_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ORANGE_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MAGENTA_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::LIGHT_BLUE_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::YELLOW_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::LIME_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PINK_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::GRAY_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::LIGHT_GRAY_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CYAN_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PURPLE_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BLUE_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BROWN_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::GREEN_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::RED_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BLACK_CANDLE, {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::WHITE_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::ORANGE_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::MAGENTA_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::LIGHT_BLUE_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::YELLOW_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::LIME_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::PINK_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::GRAY_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::LIGHT_GRAY_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::CYAN_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::PURPLE_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::BLUE_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::BROWN_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::GREEN_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::RED_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::BLACK_CANDLE_CAKE, {{ std::type_index(typeid(Lit)), 1 }, } },
        {&Blocks::AMETHYST_BLOCK, {} },
        {&Blocks::BUDDING_AMETHYST, {} },
        {&Blocks::AMETHYST_CLUSTER, {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::LARGE_AMETHYST_BUD, {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::MEDIUM_AMETHYST_BUD, {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SMALL_AMETHYST_BUD, {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::TUFF, {} },
        {&Blocks::TUFF_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::TUFF_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::TUFF_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::POLISHED_TUFF, {} },
        {&Blocks::POLISHED_TUFF_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_TUFF_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_TUFF_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::CHISELED_TUFF, {} },
        {&Blocks::TUFF_BRICKS, {} },
        {&Blocks::TUFF_BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::TUFF_BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::TUFF_BRICK_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::CHISELED_TUFF_BRICKS, {} },
        {&Blocks::CALCITE, {} },
        {&Blocks::TINTED_GLASS, {} },
        {&Blocks::POWDER_SNOW, {} },
        {&Blocks::SCULK_SENSOR, {{ std::type_index(typeid(Power)), 15 }, { std::type_index(typeid(SculkSensorPhase)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CALIBRATED_SCULK_SENSOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Power)), 15 }, { std::type_index(typeid(SculkSensorPhase)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SCULK, {} },
        {&Blocks::SCULK_VEIN, {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {&Blocks::SCULK_CATALYST, {{ std::type_index(typeid(Bloom)), 1 }, } },
        {&Blocks::SCULK_SHRIEKER, {{ std::type_index(typeid(CanSummon)), 1 }, { std::type_index(typeid(Shrieking)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::COPPER_BLOCK, {} },
        {&Blocks::EXPOSED_COPPER, {} },
        {&Blocks::WEATHERED_COPPER, {} },
        {&Blocks::OXIDIZED_COPPER, {} },
        {&Blocks::COPPER_ORE, {} },
        {&Blocks::DEEPSLATE_COPPER_ORE, {} },
        {&Blocks::OXIDIZED_CUT_COPPER, {} },
        {&Blocks::WEATHERED_CUT_COPPER, {} },
        {&Blocks::EXPOSED_CUT_COPPER, {} },
        {&Blocks::CUT_COPPER, {} },
        {&Blocks::OXIDIZED_CHISELED_COPPER, {} },
        {&Blocks::WEATHERED_CHISELED_COPPER, {} },
        {&Blocks::EXPOSED_CHISELED_COPPER, {} },
        {&Blocks::CHISELED_COPPER, {} },
        {&Blocks::WAXED_OXIDIZED_CHISELED_COPPER, {} },
        {&Blocks::WAXED_WEATHERED_CHISELED_COPPER, {} },
        {&Blocks::WAXED_EXPOSED_CHISELED_COPPER, {} },
        {&Blocks::WAXED_CHISELED_COPPER, {} },
        {&Blocks::OXIDIZED_CUT_COPPER_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WEATHERED_CUT_COPPER_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::EXPOSED_CUT_COPPER_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CUT_COPPER_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::OXIDIZED_CUT_COPPER_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WEATHERED_CUT_COPPER_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::EXPOSED_CUT_COPPER_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CUT_COPPER_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_COPPER_BLOCK, {} },
        {&Blocks::WAXED_WEATHERED_COPPER, {} },
        {&Blocks::WAXED_EXPOSED_COPPER, {} },
        {&Blocks::WAXED_OXIDIZED_COPPER, {} },
        {&Blocks::WAXED_OXIDIZED_CUT_COPPER, {} },
        {&Blocks::WAXED_WEATHERED_CUT_COPPER, {} },
        {&Blocks::WAXED_EXPOSED_CUT_COPPER, {} },
        {&Blocks::WAXED_CUT_COPPER, {} },
        {&Blocks::WAXED_OXIDIZED_CUT_COPPER_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_WEATHERED_CUT_COPPER_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_EXPOSED_CUT_COPPER_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_CUT_COPPER_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_OXIDIZED_CUT_COPPER_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_WEATHERED_CUT_COPPER_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_EXPOSED_CUT_COPPER_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_CUT_COPPER_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::COPPER_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::EXPOSED_COPPER_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::OXIDIZED_COPPER_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WEATHERED_COPPER_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WAXED_COPPER_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WAXED_EXPOSED_COPPER_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WAXED_OXIDIZED_COPPER_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WAXED_WEATHERED_COPPER_DOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::COPPER_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::EXPOSED_COPPER_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::OXIDIZED_COPPER_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WEATHERED_COPPER_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_COPPER_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_EXPOSED_COPPER_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_OXIDIZED_COPPER_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_WEATHERED_COPPER_TRAPDOOR, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::COPPER_GRATE, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::EXPOSED_COPPER_GRATE, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WEATHERED_COPPER_GRATE, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::OXIDIZED_COPPER_GRATE, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_COPPER_GRATE, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_EXPOSED_COPPER_GRATE, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_WEATHERED_COPPER_GRATE, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::WAXED_OXIDIZED_COPPER_GRATE, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::COPPER_BULB, {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::EXPOSED_COPPER_BULB, {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WEATHERED_COPPER_BULB, {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::OXIDIZED_COPPER_BULB, {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WAXED_COPPER_BULB, {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WAXED_EXPOSED_COPPER_BULB, {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WAXED_WEATHERED_COPPER_BULB, {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::WAXED_OXIDIZED_COPPER_BULB, {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {&Blocks::LIGHTNING_ROD, {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POINTED_DRIPSTONE, {{ std::type_index(typeid(Thickness)), 4 }, { std::type_index(typeid(VerticalDirection)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DRIPSTONE_BLOCK, {} },
        {&Blocks::CAVE_VINES, {{ std::type_index(typeid(Age26)), 25 }, { std::type_index(typeid(Berries)), 1 }, } },
        {&Blocks::CAVE_VINES_PLANT, {{ std::type_index(typeid(Berries)), 1 }, } },
        {&Blocks::SPORE_BLOSSOM, {} },
        {&Blocks::AZALEA, {} },
        {&Blocks::FLOWERING_AZALEA, {} },
        {&Blocks::MOSS_CARPET, {} },
        {&Blocks::PINK_PETALS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(FlowerAmount)), 3 }, } },
        {&Blocks::WILDFLOWERS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(FlowerAmount)), 3 }, } },
        {&Blocks::LEAF_LITTER, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(SegmentAmount)), 3 }, } },
        {&Blocks::MOSS_BLOCK, {} },
        {&Blocks::BIG_DRIPLEAF, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Tilt)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::BIG_DRIPLEAF_STEM, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::SMALL_DRIPLEAF, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::HANGING_ROOTS, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::ROOTED_DIRT, {} },
        {&Blocks::MUD, {} },
        {&Blocks::DEEPSLATE, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::COBBLED_DEEPSLATE, {} },
        {&Blocks::COBBLED_DEEPSLATE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::COBBLED_DEEPSLATE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::COBBLED_DEEPSLATE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::POLISHED_DEEPSLATE, {} },
        {&Blocks::POLISHED_DEEPSLATE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_DEEPSLATE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::POLISHED_DEEPSLATE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::DEEPSLATE_TILES, {} },
        {&Blocks::DEEPSLATE_TILE_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEEPSLATE_TILE_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEEPSLATE_TILE_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::DEEPSLATE_BRICKS, {} },
        {&Blocks::DEEPSLATE_BRICK_STAIRS, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEEPSLATE_BRICK_SLAB, {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::DEEPSLATE_BRICK_WALL, {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::CHISELED_DEEPSLATE, {} },
        {&Blocks::CRACKED_DEEPSLATE_BRICKS, {} },
        {&Blocks::CRACKED_DEEPSLATE_TILES, {} },
        {&Blocks::INFESTED_DEEPSLATE, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::SMOOTH_BASALT, {} },
        {&Blocks::RAW_IRON_BLOCK, {} },
        {&Blocks::RAW_COPPER_BLOCK, {} },
        {&Blocks::RAW_GOLD_BLOCK, {} },
        {&Blocks::POTTED_AZALEA_BUSH, {} },
        {&Blocks::POTTED_FLOWERING_AZALEA_BUSH, {} },
        {&Blocks::OCHRE_FROGLIGHT, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::VERDANT_FROGLIGHT, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::PEARLESCENT_FROGLIGHT, {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {&Blocks::FROGSPAWN, {} },
        {&Blocks::REINFORCED_DEEPSLATE, {} },
        {&Blocks::DECORATED_POT, {{ std::type_index(typeid(Cracked)), 1 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::CRAFTER, {{ std::type_index(typeid(Crafting)), 1 }, { std::type_index(typeid(Orientation)), 11 }, { std::type_index(typeid(Triggered)), 1 }, } },
        {&Blocks::TRIAL_SPAWNER, {{ std::type_index(typeid(Ominous)), 1 }, { std::type_index(typeid(TrialSpawnerState)), 5 }, } },
        {&Blocks::VAULT, {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Ominous)), 1 }, { std::type_index(typeid(VaultState)), 3 }, } },
        {&Blocks::HEAVY_CORE, {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {&Blocks::PALE_MOSS_BLOCK, {} },
        {&Blocks::PALE_MOSS_CARPET, {{ std::type_index(typeid(Bottom)), 1 }, { std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {&Blocks::PALE_HANGING_MOSS, {{ std::type_index(typeid(Tip)), 1 }, } },
        {&Blocks::OPEN_EYEBLOSSOM, {} },
        {&Blocks::CLOSED_EYEBLOSSOM, {} },
        {&Blocks::POTTED_OPEN_EYEBLOSSOM, {} },
        {&Blocks::POTTED_CLOSED_EYEBLOSSOM, {} },
        {&Blocks::FIREFLY_BUSH, {} },
    };
    return block_states;
};
