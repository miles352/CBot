#pragma once

#include <vector>
#include <string>
#include <typeindex>

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

inline const std::vector<std::pair<std::string, std::vector<std::pair<std::type_index, int>>>>& get_block_states() 
{
    static const std::vector<std::pair<std::string, std::vector<std::pair<std::type_index, int>>>> block_states = {
        {"minecraft:air", {} },
        {"minecraft:stone", {} },
        {"minecraft:granite", {} },
        {"minecraft:polished_granite", {} },
        {"minecraft:diorite", {} },
        {"minecraft:polished_diorite", {} },
        {"minecraft:andesite", {} },
        {"minecraft:polished_andesite", {} },
        {"minecraft:grass_block", {{ std::type_index(typeid(Snowy)), 1 }, } },
        {"minecraft:dirt", {} },
        {"minecraft:coarse_dirt", {} },
        {"minecraft:podzol", {{ std::type_index(typeid(Snowy)), 1 }, } },
        {"minecraft:cobblestone", {} },
        {"minecraft:oak_planks", {} },
        {"minecraft:spruce_planks", {} },
        {"minecraft:birch_planks", {} },
        {"minecraft:jungle_planks", {} },
        {"minecraft:acacia_planks", {} },
        {"minecraft:cherry_planks", {} },
        {"minecraft:dark_oak_planks", {} },
        {"minecraft:pale_oak_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:pale_oak_planks", {} },
        {"minecraft:mangrove_planks", {} },
        {"minecraft:bamboo_planks", {} },
        {"minecraft:bamboo_mosaic", {} },
        {"minecraft:oak_sapling", {{ std::type_index(typeid(Stage)), 1 }, } },
        {"minecraft:spruce_sapling", {{ std::type_index(typeid(Stage)), 1 }, } },
        {"minecraft:birch_sapling", {{ std::type_index(typeid(Stage)), 1 }, } },
        {"minecraft:jungle_sapling", {{ std::type_index(typeid(Stage)), 1 }, } },
        {"minecraft:acacia_sapling", {{ std::type_index(typeid(Stage)), 1 }, } },
        {"minecraft:cherry_sapling", {{ std::type_index(typeid(Stage)), 1 }, } },
        {"minecraft:dark_oak_sapling", {{ std::type_index(typeid(Stage)), 1 }, } },
        {"minecraft:pale_oak_sapling", {{ std::type_index(typeid(Stage)), 1 }, } },
        {"minecraft:mangrove_propagule", {{ std::type_index(typeid(Age5)), 4 }, { std::type_index(typeid(Hanging)), 1 }, { std::type_index(typeid(Stage)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bedrock", {} },
        {"minecraft:water", {{ std::type_index(typeid(Level16)), 15 }, } },
        {"minecraft:lava", {{ std::type_index(typeid(Level16)), 15 }, } },
        {"minecraft:sand", {} },
        {"minecraft:suspicious_sand", {{ std::type_index(typeid(Dusted)), 3 }, } },
        {"minecraft:red_sand", {} },
        {"minecraft:gravel", {} },
        {"minecraft:suspicious_gravel", {{ std::type_index(typeid(Dusted)), 3 }, } },
        {"minecraft:gold_ore", {} },
        {"minecraft:deepslate_gold_ore", {} },
        {"minecraft:iron_ore", {} },
        {"minecraft:deepslate_iron_ore", {} },
        {"minecraft:coal_ore", {} },
        {"minecraft:deepslate_coal_ore", {} },
        {"minecraft:nether_gold_ore", {} },
        {"minecraft:oak_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:spruce_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:birch_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:jungle_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:acacia_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:cherry_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:dark_oak_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:pale_oak_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:mangrove_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:mangrove_roots", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:muddy_mangrove_roots", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:bamboo_block", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_spruce_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_birch_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_jungle_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_acacia_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_cherry_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_dark_oak_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_pale_oak_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_oak_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_mangrove_log", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_bamboo_block", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:oak_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:spruce_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:birch_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:jungle_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:acacia_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:cherry_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:dark_oak_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:mangrove_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_oak_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_spruce_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_birch_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_jungle_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_acacia_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_cherry_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_dark_oak_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_pale_oak_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_mangrove_wood", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:oak_leaves", {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:spruce_leaves", {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:birch_leaves", {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:jungle_leaves", {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:acacia_leaves", {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cherry_leaves", {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dark_oak_leaves", {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:pale_oak_leaves", {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mangrove_leaves", {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:azalea_leaves", {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:flowering_azalea_leaves", {{ std::type_index(typeid(Distance7)), 6 }, { std::type_index(typeid(Persistent)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:sponge", {} },
        {"minecraft:wet_sponge", {} },
        {"minecraft:glass", {} },
        {"minecraft:lapis_ore", {} },
        {"minecraft:deepslate_lapis_ore", {} },
        {"minecraft:lapis_block", {} },
        {"minecraft:dispenser", {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Triggered)), 1 }, } },
        {"minecraft:sandstone", {} },
        {"minecraft:chiseled_sandstone", {} },
        {"minecraft:cut_sandstone", {} },
        {"minecraft:note_block", {{ std::type_index(typeid(Instrument)), 22 }, { std::type_index(typeid(Note)), 24 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:white_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:orange_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:magenta_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:light_blue_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:yellow_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:lime_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:pink_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:gray_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:light_gray_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:cyan_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:purple_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:blue_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:brown_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:green_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:red_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:black_bed", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Occupied)), 1 }, { std::type_index(typeid(Part)), 1 }, } },
        {"minecraft:powered_rail", {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(RailShape)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:detector_rail", {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(RailShape)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:sticky_piston", {{ std::type_index(typeid(Extended)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:cobweb", {} },
        {"minecraft:short_grass", {} },
        {"minecraft:fern", {} },
        {"minecraft:dead_bush", {} },
        {"minecraft:bush", {} },
        {"minecraft:short_dry_grass", {} },
        {"minecraft:tall_dry_grass", {} },
        {"minecraft:seagrass", {} },
        {"minecraft:tall_seagrass", {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {"minecraft:piston", {{ std::type_index(typeid(Extended)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:piston_head", {{ std::type_index(typeid(PistonType)), 1 }, { std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Short)), 1 }, } },
        {"minecraft:white_wool", {} },
        {"minecraft:orange_wool", {} },
        {"minecraft:magenta_wool", {} },
        {"minecraft:light_blue_wool", {} },
        {"minecraft:yellow_wool", {} },
        {"minecraft:lime_wool", {} },
        {"minecraft:pink_wool", {} },
        {"minecraft:gray_wool", {} },
        {"minecraft:light_gray_wool", {} },
        {"minecraft:cyan_wool", {} },
        {"minecraft:purple_wool", {} },
        {"minecraft:blue_wool", {} },
        {"minecraft:brown_wool", {} },
        {"minecraft:green_wool", {} },
        {"minecraft:red_wool", {} },
        {"minecraft:black_wool", {} },
        {"minecraft:moving_piston", {{ std::type_index(typeid(PistonType)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:dandelion", {} },
        {"minecraft:torchflower", {} },
        {"minecraft:poppy", {} },
        {"minecraft:blue_orchid", {} },
        {"minecraft:allium", {} },
        {"minecraft:azure_bluet", {} },
        {"minecraft:red_tulip", {} },
        {"minecraft:orange_tulip", {} },
        {"minecraft:white_tulip", {} },
        {"minecraft:pink_tulip", {} },
        {"minecraft:oxeye_daisy", {} },
        {"minecraft:cornflower", {} },
        {"minecraft:wither_rose", {} },
        {"minecraft:lily_of_the_valley", {} },
        {"minecraft:brown_mushroom", {} },
        {"minecraft:red_mushroom", {} },
        {"minecraft:gold_block", {} },
        {"minecraft:iron_block", {} },
        {"minecraft:bricks", {} },
        {"minecraft:tnt", {{ std::type_index(typeid(Unstable)), 1 }, } },
        {"minecraft:bookshelf", {} },
        {"minecraft:chiseled_bookshelf", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Slot0Occupied)), 1 }, { std::type_index(typeid(Slot1Occupied)), 1 }, { std::type_index(typeid(Slot2Occupied)), 1 }, { std::type_index(typeid(Slot3Occupied)), 1 }, { std::type_index(typeid(Slot4Occupied)), 1 }, { std::type_index(typeid(Slot5Occupied)), 1 }, } },
        {"minecraft:mossy_cobblestone", {} },
        {"minecraft:obsidian", {} },
        {"minecraft:torch", {} },
        {"minecraft:wall_torch", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:fire", {{ std::type_index(typeid(Age16)), 15 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:soul_fire", {} },
        {"minecraft:spawner", {} },
        {"minecraft:creaking_heart", {{ std::type_index(typeid(AxisXYZ)), 2 }, { std::type_index(typeid(CreakingHeartState)), 2 }, { std::type_index(typeid(Natural)), 1 }, } },
        {"minecraft:oak_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:chest", {{ std::type_index(typeid(ChestType)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:redstone_wire", {{ std::type_index(typeid(RedstoneEast)), 2 }, { std::type_index(typeid(RedstoneNorth)), 2 }, { std::type_index(typeid(Power)), 15 }, { std::type_index(typeid(RedstoneSouth)), 2 }, { std::type_index(typeid(RedstoneWest)), 2 }, } },
        {"minecraft:diamond_ore", {} },
        {"minecraft:deepslate_diamond_ore", {} },
        {"minecraft:diamond_block", {} },
        {"minecraft:crafting_table", {} },
        {"minecraft:wheat", {{ std::type_index(typeid(Age8)), 7 }, } },
        {"minecraft:farmland", {{ std::type_index(typeid(Moisture)), 7 }, } },
        {"minecraft:furnace", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:oak_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:spruce_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:birch_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:acacia_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cherry_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:jungle_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dark_oak_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:pale_oak_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mangrove_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bamboo_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:oak_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:ladder", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:rail", {{ std::type_index(typeid(RailShapeFull)), 9 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cobblestone_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:oak_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:spruce_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:birch_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:acacia_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cherry_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:jungle_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dark_oak_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:pale_oak_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mangrove_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bamboo_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:oak_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:spruce_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:birch_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:acacia_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cherry_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:jungle_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dark_oak_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:pale_oak_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:crimson_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:warped_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mangrove_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bamboo_hanging_sign", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:oak_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:spruce_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:birch_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:acacia_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cherry_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:jungle_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dark_oak_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:pale_oak_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mangrove_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:crimson_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:warped_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bamboo_wall_hanging_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:lever", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:stone_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:iron_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:oak_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:spruce_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:birch_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:jungle_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:acacia_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:cherry_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:dark_oak_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:pale_oak_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:mangrove_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:bamboo_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:redstone_ore", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:deepslate_redstone_ore", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:redstone_torch", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:redstone_wall_torch", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:stone_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:snow", {{ std::type_index(typeid(Layers)), 7 }, } },
        {"minecraft:ice", {} },
        {"minecraft:snow_block", {} },
        {"minecraft:cactus", {{ std::type_index(typeid(Age16)), 15 }, } },
        {"minecraft:cactus_flower", {} },
        {"minecraft:clay", {} },
        {"minecraft:sugar_cane", {{ std::type_index(typeid(Age16)), 15 }, } },
        {"minecraft:jukebox", {{ std::type_index(typeid(HasRecord)), 1 }, } },
        {"minecraft:oak_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:netherrack", {} },
        {"minecraft:soul_sand", {} },
        {"minecraft:soul_soil", {} },
        {"minecraft:basalt", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:polished_basalt", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:soul_torch", {} },
        {"minecraft:soul_wall_torch", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:glowstone", {} },
        {"minecraft:nether_portal", {{ std::type_index(typeid(AxisXZ)), 1 }, } },
        {"minecraft:carved_pumpkin", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:jack_o_lantern", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:cake", {{ std::type_index(typeid(Bites)), 6 }, } },
        {"minecraft:repeater", {{ std::type_index(typeid(Delay)), 3 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Locked)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:white_stained_glass", {} },
        {"minecraft:orange_stained_glass", {} },
        {"minecraft:magenta_stained_glass", {} },
        {"minecraft:light_blue_stained_glass", {} },
        {"minecraft:yellow_stained_glass", {} },
        {"minecraft:lime_stained_glass", {} },
        {"minecraft:pink_stained_glass", {} },
        {"minecraft:gray_stained_glass", {} },
        {"minecraft:light_gray_stained_glass", {} },
        {"minecraft:cyan_stained_glass", {} },
        {"minecraft:purple_stained_glass", {} },
        {"minecraft:blue_stained_glass", {} },
        {"minecraft:brown_stained_glass", {} },
        {"minecraft:green_stained_glass", {} },
        {"minecraft:red_stained_glass", {} },
        {"minecraft:black_stained_glass", {} },
        {"minecraft:oak_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:spruce_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:birch_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:jungle_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:acacia_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cherry_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dark_oak_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:pale_oak_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mangrove_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bamboo_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:stone_bricks", {} },
        {"minecraft:mossy_stone_bricks", {} },
        {"minecraft:cracked_stone_bricks", {} },
        {"minecraft:chiseled_stone_bricks", {} },
        {"minecraft:packed_mud", {} },
        {"minecraft:mud_bricks", {} },
        {"minecraft:infested_stone", {} },
        {"minecraft:infested_cobblestone", {} },
        {"minecraft:infested_stone_bricks", {} },
        {"minecraft:infested_mossy_stone_bricks", {} },
        {"minecraft:infested_cracked_stone_bricks", {} },
        {"minecraft:infested_chiseled_stone_bricks", {} },
        {"minecraft:brown_mushroom_block", {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:red_mushroom_block", {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:mushroom_stem", {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:iron_bars", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:chain", {{ std::type_index(typeid(AxisXYZ)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:pumpkin", {} },
        {"minecraft:melon", {} },
        {"minecraft:attached_pumpkin_stem", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:attached_melon_stem", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:pumpkin_stem", {{ std::type_index(typeid(Age8)), 7 }, } },
        {"minecraft:melon_stem", {{ std::type_index(typeid(Age8)), 7 }, } },
        {"minecraft:vine", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:glow_lichen", {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:resin_clump", {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:oak_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:stone_brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mud_brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mycelium", {{ std::type_index(typeid(Snowy)), 1 }, } },
        {"minecraft:lily_pad", {} },
        {"minecraft:resin_block", {} },
        {"minecraft:resin_bricks", {} },
        {"minecraft:resin_brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:resin_brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:resin_brick_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:chiseled_resin_bricks", {} },
        {"minecraft:nether_bricks", {} },
        {"minecraft:nether_brick_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:nether_brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:nether_wart", {{ std::type_index(typeid(Age4)), 3 }, } },
        {"minecraft:enchanting_table", {} },
        {"minecraft:brewing_stand", {{ std::type_index(typeid(HasBottle0)), 1 }, { std::type_index(typeid(HasBottle1)), 1 }, { std::type_index(typeid(HasBottle2)), 1 }, } },
        {"minecraft:cauldron", {} },
        {"minecraft:water_cauldron", {{ std::type_index(typeid(Level3)), 2 }, } },
        {"minecraft:lava_cauldron", {} },
        {"minecraft:powder_snow_cauldron", {{ std::type_index(typeid(Level3)), 2 }, } },
        {"minecraft:end_portal", {} },
        {"minecraft:end_portal_frame", {{ std::type_index(typeid(Eye)), 1 }, { std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:end_stone", {} },
        {"minecraft:dragon_egg", {} },
        {"minecraft:redstone_lamp", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:cocoa", {{ std::type_index(typeid(Age3)), 2 }, { std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:sandstone_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:emerald_ore", {} },
        {"minecraft:deepslate_emerald_ore", {} },
        {"minecraft:ender_chest", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:tripwire_hook", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:tripwire", {{ std::type_index(typeid(Attached)), 1 }, { std::type_index(typeid(Disarmed)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:emerald_block", {} },
        {"minecraft:spruce_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:birch_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:jungle_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:command_block", {{ std::type_index(typeid(Conditional)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:beacon", {} },
        {"minecraft:cobblestone_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:mossy_cobblestone_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:flower_pot", {} },
        {"minecraft:potted_torchflower", {} },
        {"minecraft:potted_oak_sapling", {} },
        {"minecraft:potted_spruce_sapling", {} },
        {"minecraft:potted_birch_sapling", {} },
        {"minecraft:potted_jungle_sapling", {} },
        {"minecraft:potted_acacia_sapling", {} },
        {"minecraft:potted_cherry_sapling", {} },
        {"minecraft:potted_dark_oak_sapling", {} },
        {"minecraft:potted_pale_oak_sapling", {} },
        {"minecraft:potted_mangrove_propagule", {} },
        {"minecraft:potted_fern", {} },
        {"minecraft:potted_dandelion", {} },
        {"minecraft:potted_poppy", {} },
        {"minecraft:potted_blue_orchid", {} },
        {"minecraft:potted_allium", {} },
        {"minecraft:potted_azure_bluet", {} },
        {"minecraft:potted_red_tulip", {} },
        {"minecraft:potted_orange_tulip", {} },
        {"minecraft:potted_white_tulip", {} },
        {"minecraft:potted_pink_tulip", {} },
        {"minecraft:potted_oxeye_daisy", {} },
        {"minecraft:potted_cornflower", {} },
        {"minecraft:potted_lily_of_the_valley", {} },
        {"minecraft:potted_wither_rose", {} },
        {"minecraft:potted_red_mushroom", {} },
        {"minecraft:potted_brown_mushroom", {} },
        {"minecraft:potted_dead_bush", {} },
        {"minecraft:potted_cactus", {} },
        {"minecraft:carrots", {{ std::type_index(typeid(Age8)), 7 }, } },
        {"minecraft:potatoes", {{ std::type_index(typeid(Age8)), 7 }, } },
        {"minecraft:oak_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:spruce_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:birch_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:jungle_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:acacia_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:cherry_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:dark_oak_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:pale_oak_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:mangrove_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:bamboo_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:skeleton_skull", {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:skeleton_wall_skull", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:wither_skeleton_skull", {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:wither_skeleton_wall_skull", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:zombie_head", {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:zombie_wall_head", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:player_head", {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:player_wall_head", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:creeper_head", {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:creeper_wall_head", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:dragon_head", {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:dragon_wall_head", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:piglin_head", {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:piglin_wall_head", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:anvil", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:chipped_anvil", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:damaged_anvil", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:trapped_chest", {{ std::type_index(typeid(ChestType)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:light_weighted_pressure_plate", {{ std::type_index(typeid(Power)), 15 }, } },
        {"minecraft:heavy_weighted_pressure_plate", {{ std::type_index(typeid(Power)), 15 }, } },
        {"minecraft:comparator", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(ComparatorMode)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:daylight_detector", {{ std::type_index(typeid(Inverted)), 1 }, { std::type_index(typeid(Power)), 15 }, } },
        {"minecraft:redstone_block", {} },
        {"minecraft:nether_quartz_ore", {} },
        {"minecraft:hopper", {{ std::type_index(typeid(Enabled)), 1 }, { std::type_index(typeid(Facing5)), 4 }, } },
        {"minecraft:quartz_block", {} },
        {"minecraft:chiseled_quartz_block", {} },
        {"minecraft:quartz_pillar", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:quartz_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:activator_rail", {{ std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(RailShape)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dropper", {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Triggered)), 1 }, } },
        {"minecraft:white_terracotta", {} },
        {"minecraft:orange_terracotta", {} },
        {"minecraft:magenta_terracotta", {} },
        {"minecraft:light_blue_terracotta", {} },
        {"minecraft:yellow_terracotta", {} },
        {"minecraft:lime_terracotta", {} },
        {"minecraft:pink_terracotta", {} },
        {"minecraft:gray_terracotta", {} },
        {"minecraft:light_gray_terracotta", {} },
        {"minecraft:cyan_terracotta", {} },
        {"minecraft:purple_terracotta", {} },
        {"minecraft:blue_terracotta", {} },
        {"minecraft:brown_terracotta", {} },
        {"minecraft:green_terracotta", {} },
        {"minecraft:red_terracotta", {} },
        {"minecraft:black_terracotta", {} },
        {"minecraft:white_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:orange_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:magenta_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:light_blue_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:yellow_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:lime_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:pink_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:gray_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:light_gray_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:cyan_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:purple_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:blue_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:brown_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:green_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:red_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:black_stained_glass_pane", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:acacia_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cherry_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dark_oak_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:pale_oak_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mangrove_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bamboo_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bamboo_mosaic_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:slime_block", {} },
        {"minecraft:barrier", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:light", {{ std::type_index(typeid(Level16)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:iron_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:prismarine", {} },
        {"minecraft:prismarine_bricks", {} },
        {"minecraft:dark_prismarine", {} },
        {"minecraft:prismarine_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:prismarine_brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dark_prismarine_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:prismarine_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:prismarine_brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dark_prismarine_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:sea_lantern", {} },
        {"minecraft:hay_block", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:white_carpet", {} },
        {"minecraft:orange_carpet", {} },
        {"minecraft:magenta_carpet", {} },
        {"minecraft:light_blue_carpet", {} },
        {"minecraft:yellow_carpet", {} },
        {"minecraft:lime_carpet", {} },
        {"minecraft:pink_carpet", {} },
        {"minecraft:gray_carpet", {} },
        {"minecraft:light_gray_carpet", {} },
        {"minecraft:cyan_carpet", {} },
        {"minecraft:purple_carpet", {} },
        {"minecraft:blue_carpet", {} },
        {"minecraft:brown_carpet", {} },
        {"minecraft:green_carpet", {} },
        {"minecraft:red_carpet", {} },
        {"minecraft:black_carpet", {} },
        {"minecraft:terracotta", {} },
        {"minecraft:coal_block", {} },
        {"minecraft:packed_ice", {} },
        {"minecraft:sunflower", {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {"minecraft:lilac", {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {"minecraft:rose_bush", {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {"minecraft:peony", {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {"minecraft:tall_grass", {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {"minecraft:large_fern", {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {"minecraft:white_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:orange_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:magenta_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:light_blue_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:yellow_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:lime_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:pink_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:gray_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:light_gray_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:cyan_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:purple_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:blue_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:brown_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:green_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:red_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:black_banner", {{ std::type_index(typeid(Rotation)), 15 }, } },
        {"minecraft:white_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:orange_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:magenta_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:light_blue_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:yellow_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:lime_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:pink_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:gray_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:light_gray_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:cyan_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:purple_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:blue_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:brown_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:green_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:red_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:black_wall_banner", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:red_sandstone", {} },
        {"minecraft:chiseled_red_sandstone", {} },
        {"minecraft:cut_red_sandstone", {} },
        {"minecraft:red_sandstone_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:oak_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:spruce_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:birch_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:jungle_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:acacia_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cherry_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dark_oak_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:pale_oak_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mangrove_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bamboo_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bamboo_mosaic_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:stone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:smooth_stone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:sandstone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cut_sandstone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:petrified_oak_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cobblestone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:stone_brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mud_brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:nether_brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:quartz_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:red_sandstone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cut_red_sandstone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:purpur_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:smooth_stone", {} },
        {"minecraft:smooth_sandstone", {} },
        {"minecraft:smooth_quartz", {} },
        {"minecraft:smooth_red_sandstone", {} },
        {"minecraft:spruce_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:birch_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:jungle_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:acacia_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:cherry_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:dark_oak_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:pale_oak_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:mangrove_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:bamboo_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:spruce_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:birch_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:jungle_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:acacia_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:cherry_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:dark_oak_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:pale_oak_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:mangrove_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:bamboo_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:spruce_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:birch_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:jungle_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:acacia_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:cherry_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:dark_oak_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:pale_oak_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:mangrove_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:bamboo_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:end_rod", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:chorus_plant", {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:chorus_flower", {{ std::type_index(typeid(Age6)), 5 }, } },
        {"minecraft:purpur_block", {} },
        {"minecraft:purpur_pillar", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:purpur_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:end_stone_bricks", {} },
        {"minecraft:torchflower_crop", {{ std::type_index(typeid(Age2)), 1 }, } },
        {"minecraft:pitcher_crop", {{ std::type_index(typeid(Age5)), 4 }, { std::type_index(typeid(DoorHalf)), 1 }, } },
        {"minecraft:pitcher_plant", {{ std::type_index(typeid(DoorHalf)), 1 }, } },
        {"minecraft:beetroots", {{ std::type_index(typeid(Age4)), 3 }, } },
        {"minecraft:dirt_path", {} },
        {"minecraft:end_gateway", {} },
        {"minecraft:repeating_command_block", {{ std::type_index(typeid(Conditional)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:chain_command_block", {{ std::type_index(typeid(Conditional)), 1 }, { std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:frosted_ice", {{ std::type_index(typeid(Age4)), 3 }, } },
        {"minecraft:magma_block", {} },
        {"minecraft:nether_wart_block", {} },
        {"minecraft:red_nether_bricks", {} },
        {"minecraft:bone_block", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:structure_void", {} },
        {"minecraft:observer", {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:white_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:orange_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:magenta_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:light_blue_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:yellow_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:lime_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:pink_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:gray_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:light_gray_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:cyan_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:purple_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:blue_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:brown_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:green_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:red_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:black_shulker_box", {{ std::type_index(typeid(Facing6)), 5 }, } },
        {"minecraft:white_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:orange_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:magenta_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:light_blue_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:yellow_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:lime_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:pink_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:gray_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:light_gray_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:cyan_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:purple_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:blue_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:brown_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:green_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:red_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:black_glazed_terracotta", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:white_concrete", {} },
        {"minecraft:orange_concrete", {} },
        {"minecraft:magenta_concrete", {} },
        {"minecraft:light_blue_concrete", {} },
        {"minecraft:yellow_concrete", {} },
        {"minecraft:lime_concrete", {} },
        {"minecraft:pink_concrete", {} },
        {"minecraft:gray_concrete", {} },
        {"minecraft:light_gray_concrete", {} },
        {"minecraft:cyan_concrete", {} },
        {"minecraft:purple_concrete", {} },
        {"minecraft:blue_concrete", {} },
        {"minecraft:brown_concrete", {} },
        {"minecraft:green_concrete", {} },
        {"minecraft:red_concrete", {} },
        {"minecraft:black_concrete", {} },
        {"minecraft:white_concrete_powder", {} },
        {"minecraft:orange_concrete_powder", {} },
        {"minecraft:magenta_concrete_powder", {} },
        {"minecraft:light_blue_concrete_powder", {} },
        {"minecraft:yellow_concrete_powder", {} },
        {"minecraft:lime_concrete_powder", {} },
        {"minecraft:pink_concrete_powder", {} },
        {"minecraft:gray_concrete_powder", {} },
        {"minecraft:light_gray_concrete_powder", {} },
        {"minecraft:cyan_concrete_powder", {} },
        {"minecraft:purple_concrete_powder", {} },
        {"minecraft:blue_concrete_powder", {} },
        {"minecraft:brown_concrete_powder", {} },
        {"minecraft:green_concrete_powder", {} },
        {"minecraft:red_concrete_powder", {} },
        {"minecraft:black_concrete_powder", {} },
        {"minecraft:kelp", {{ std::type_index(typeid(Age26)), 25 }, } },
        {"minecraft:kelp_plant", {} },
        {"minecraft:dried_kelp_block", {} },
        {"minecraft:turtle_egg", {{ std::type_index(typeid(Eggs)), 3 }, { std::type_index(typeid(Hatch)), 2 }, } },
        {"minecraft:sniffer_egg", {{ std::type_index(typeid(Hatch)), 2 }, } },
        {"minecraft:dead_tube_coral_block", {} },
        {"minecraft:dead_brain_coral_block", {} },
        {"minecraft:dead_bubble_coral_block", {} },
        {"minecraft:dead_fire_coral_block", {} },
        {"minecraft:dead_horn_coral_block", {} },
        {"minecraft:tube_coral_block", {} },
        {"minecraft:brain_coral_block", {} },
        {"minecraft:bubble_coral_block", {} },
        {"minecraft:fire_coral_block", {} },
        {"minecraft:horn_coral_block", {} },
        {"minecraft:dead_tube_coral", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_brain_coral", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_bubble_coral", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_fire_coral", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_horn_coral", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:tube_coral", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:brain_coral", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bubble_coral", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:fire_coral", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:horn_coral", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_tube_coral_fan", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_brain_coral_fan", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_bubble_coral_fan", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_fire_coral_fan", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_horn_coral_fan", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:tube_coral_fan", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:brain_coral_fan", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bubble_coral_fan", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:fire_coral_fan", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:horn_coral_fan", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_tube_coral_wall_fan", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_brain_coral_wall_fan", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_bubble_coral_wall_fan", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_fire_coral_wall_fan", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dead_horn_coral_wall_fan", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:tube_coral_wall_fan", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:brain_coral_wall_fan", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bubble_coral_wall_fan", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:fire_coral_wall_fan", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:horn_coral_wall_fan", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:sea_pickle", {{ std::type_index(typeid(Pickles)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:blue_ice", {} },
        {"minecraft:conduit", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:bamboo_sapling", {} },
        {"minecraft:bamboo", {{ std::type_index(typeid(Age2)), 1 }, { std::type_index(typeid(Leaves)), 2 }, { std::type_index(typeid(Stage)), 1 }, } },
        {"minecraft:potted_bamboo", {} },
        {"minecraft:void_air", {} },
        {"minecraft:cave_air", {} },
        {"minecraft:bubble_column", {{ std::type_index(typeid(Drag)), 1 }, } },
        {"minecraft:polished_granite_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:smooth_red_sandstone_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mossy_stone_brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_diorite_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mossy_cobblestone_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:end_stone_brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:stone_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:smooth_sandstone_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:smooth_quartz_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:granite_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:andesite_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:red_nether_brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_andesite_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:diorite_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_granite_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:smooth_red_sandstone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mossy_stone_brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_diorite_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:mossy_cobblestone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:end_stone_brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:smooth_sandstone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:smooth_quartz_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:granite_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:andesite_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:red_nether_brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_andesite_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:diorite_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:brick_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:prismarine_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:red_sandstone_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:mossy_stone_brick_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:granite_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:stone_brick_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:mud_brick_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:nether_brick_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:andesite_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:red_nether_brick_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:sandstone_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:end_stone_brick_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:diorite_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:scaffolding", {{ std::type_index(typeid(Bottom)), 1 }, { std::type_index(typeid(Distance8)), 7 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:loom", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:barrel", {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Open)), 1 }, } },
        {"minecraft:smoker", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:blast_furnace", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:cartography_table", {} },
        {"minecraft:fletching_table", {} },
        {"minecraft:grindstone", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:lectern", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(HasBook)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:smithing_table", {} },
        {"minecraft:stonecutter", {{ std::type_index(typeid(Facing4)), 3 }, } },
        {"minecraft:bell", {{ std::type_index(typeid(Attachment)), 3 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:lantern", {{ std::type_index(typeid(Hanging)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:soul_lantern", {{ std::type_index(typeid(Hanging)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:campfire", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(SignalFire)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:soul_campfire", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(SignalFire)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:sweet_berry_bush", {{ std::type_index(typeid(Age4)), 3 }, } },
        {"minecraft:warped_stem", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_warped_stem", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:warped_hyphae", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_warped_hyphae", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:warped_nylium", {} },
        {"minecraft:warped_fungus", {} },
        {"minecraft:warped_wart_block", {} },
        {"minecraft:warped_roots", {} },
        {"minecraft:nether_sprouts", {} },
        {"minecraft:crimson_stem", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_crimson_stem", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:crimson_hyphae", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:stripped_crimson_hyphae", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:crimson_nylium", {} },
        {"minecraft:crimson_fungus", {} },
        {"minecraft:shroomlight", {} },
        {"minecraft:weeping_vines", {{ std::type_index(typeid(Age26)), 25 }, } },
        {"minecraft:weeping_vines_plant", {} },
        {"minecraft:twisting_vines", {{ std::type_index(typeid(Age26)), 25 }, } },
        {"minecraft:twisting_vines_plant", {} },
        {"minecraft:crimson_roots", {} },
        {"minecraft:crimson_planks", {} },
        {"minecraft:warped_planks", {} },
        {"minecraft:crimson_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:warped_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:crimson_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:warped_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:crimson_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:warped_fence", {{ std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:crimson_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:warped_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:crimson_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:warped_fence_gate", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(InWall)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:crimson_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:warped_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:crimson_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:warped_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:crimson_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:warped_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:crimson_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:warped_sign", {{ std::type_index(typeid(Rotation)), 15 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:crimson_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:warped_wall_sign", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:structure_block", {{ std::type_index(typeid(StructureBlockMode)), 3 }, } },
        {"minecraft:jigsaw", {{ std::type_index(typeid(Orientation)), 11 }, } },
        {"minecraft:test_block", {{ std::type_index(typeid(TestBlockMode)), 3 }, } },
        {"minecraft:test_instance_block", {} },
        {"minecraft:composter", {{ std::type_index(typeid(Level9)), 8 }, } },
        {"minecraft:target", {{ std::type_index(typeid(Power)), 15 }, } },
        {"minecraft:bee_nest", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(HoneyLevel)), 5 }, } },
        {"minecraft:beehive", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(HoneyLevel)), 5 }, } },
        {"minecraft:honey_block", {} },
        {"minecraft:honeycomb_block", {} },
        {"minecraft:netherite_block", {} },
        {"minecraft:ancient_debris", {} },
        {"minecraft:crying_obsidian", {} },
        {"minecraft:respawn_anchor", {{ std::type_index(typeid(Charges)), 4 }, } },
        {"minecraft:potted_crimson_fungus", {} },
        {"minecraft:potted_warped_fungus", {} },
        {"minecraft:potted_crimson_roots", {} },
        {"minecraft:potted_warped_roots", {} },
        {"minecraft:lodestone", {} },
        {"minecraft:blackstone", {} },
        {"minecraft:blackstone_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:blackstone_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:blackstone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_blackstone", {} },
        {"minecraft:polished_blackstone_bricks", {} },
        {"minecraft:cracked_polished_blackstone_bricks", {} },
        {"minecraft:chiseled_polished_blackstone", {} },
        {"minecraft:polished_blackstone_brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_blackstone_brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_blackstone_brick_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:gilded_blackstone", {} },
        {"minecraft:polished_blackstone_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_blackstone_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_blackstone_pressure_plate", {{ std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:polished_blackstone_button", {{ std::type_index(typeid(Face)), 2 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:polished_blackstone_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:chiseled_nether_bricks", {} },
        {"minecraft:cracked_nether_bricks", {} },
        {"minecraft:quartz_bricks", {} },
        {"minecraft:candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:white_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:orange_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:magenta_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:light_blue_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:yellow_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:lime_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:pink_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:gray_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:light_gray_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cyan_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:purple_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:blue_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:brown_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:green_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:red_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:black_candle", {{ std::type_index(typeid(Candles)), 3 }, { std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:white_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:orange_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:magenta_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:light_blue_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:yellow_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:lime_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:pink_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:gray_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:light_gray_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:cyan_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:purple_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:blue_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:brown_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:green_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:red_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:black_candle_cake", {{ std::type_index(typeid(Lit)), 1 }, } },
        {"minecraft:amethyst_block", {} },
        {"minecraft:budding_amethyst", {} },
        {"minecraft:amethyst_cluster", {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:large_amethyst_bud", {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:medium_amethyst_bud", {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:small_amethyst_bud", {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:tuff", {} },
        {"minecraft:tuff_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:tuff_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:tuff_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:polished_tuff", {} },
        {"minecraft:polished_tuff_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_tuff_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_tuff_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:chiseled_tuff", {} },
        {"minecraft:tuff_bricks", {} },
        {"minecraft:tuff_brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:tuff_brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:tuff_brick_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:chiseled_tuff_bricks", {} },
        {"minecraft:calcite", {} },
        {"minecraft:tinted_glass", {} },
        {"minecraft:powder_snow", {} },
        {"minecraft:sculk_sensor", {{ std::type_index(typeid(Power)), 15 }, { std::type_index(typeid(SculkSensorPhase)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:calibrated_sculk_sensor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Power)), 15 }, { std::type_index(typeid(SculkSensorPhase)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:sculk", {} },
        {"minecraft:sculk_vein", {{ std::type_index(typeid(Down)), 1 }, { std::type_index(typeid(East)), 1 }, { std::type_index(typeid(North)), 1 }, { std::type_index(typeid(South)), 1 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(West)), 1 }, } },
        {"minecraft:sculk_catalyst", {{ std::type_index(typeid(Bloom)), 1 }, } },
        {"minecraft:sculk_shrieker", {{ std::type_index(typeid(CanSummon)), 1 }, { std::type_index(typeid(Shrieking)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:copper_block", {} },
        {"minecraft:exposed_copper", {} },
        {"minecraft:weathered_copper", {} },
        {"minecraft:oxidized_copper", {} },
        {"minecraft:copper_ore", {} },
        {"minecraft:deepslate_copper_ore", {} },
        {"minecraft:oxidized_cut_copper", {} },
        {"minecraft:weathered_cut_copper", {} },
        {"minecraft:exposed_cut_copper", {} },
        {"minecraft:cut_copper", {} },
        {"minecraft:oxidized_chiseled_copper", {} },
        {"minecraft:weathered_chiseled_copper", {} },
        {"minecraft:exposed_chiseled_copper", {} },
        {"minecraft:chiseled_copper", {} },
        {"minecraft:waxed_oxidized_chiseled_copper", {} },
        {"minecraft:waxed_weathered_chiseled_copper", {} },
        {"minecraft:waxed_exposed_chiseled_copper", {} },
        {"minecraft:waxed_chiseled_copper", {} },
        {"minecraft:oxidized_cut_copper_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:weathered_cut_copper_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:exposed_cut_copper_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cut_copper_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:oxidized_cut_copper_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:weathered_cut_copper_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:exposed_cut_copper_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cut_copper_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_copper_block", {} },
        {"minecraft:waxed_weathered_copper", {} },
        {"minecraft:waxed_exposed_copper", {} },
        {"minecraft:waxed_oxidized_copper", {} },
        {"minecraft:waxed_oxidized_cut_copper", {} },
        {"minecraft:waxed_weathered_cut_copper", {} },
        {"minecraft:waxed_exposed_cut_copper", {} },
        {"minecraft:waxed_cut_copper", {} },
        {"minecraft:waxed_oxidized_cut_copper_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_weathered_cut_copper_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_exposed_cut_copper_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_cut_copper_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_oxidized_cut_copper_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_weathered_cut_copper_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_exposed_cut_copper_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_cut_copper_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:copper_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:exposed_copper_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:oxidized_copper_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:weathered_copper_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:waxed_copper_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:waxed_exposed_copper_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:waxed_oxidized_copper_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:waxed_weathered_copper_door", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Hinge)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:copper_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:exposed_copper_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:oxidized_copper_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:weathered_copper_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_copper_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_exposed_copper_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_oxidized_copper_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_weathered_copper_trapdoor", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(Open)), 1 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:copper_grate", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:exposed_copper_grate", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:weathered_copper_grate", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:oxidized_copper_grate", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_copper_grate", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_exposed_copper_grate", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_weathered_copper_grate", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:waxed_oxidized_copper_grate", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:copper_bulb", {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:exposed_copper_bulb", {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:weathered_copper_bulb", {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:oxidized_copper_bulb", {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:waxed_copper_bulb", {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:waxed_exposed_copper_bulb", {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:waxed_weathered_copper_bulb", {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:waxed_oxidized_copper_bulb", {{ std::type_index(typeid(Lit)), 1 }, { std::type_index(typeid(Powered)), 1 }, } },
        {"minecraft:lightning_rod", {{ std::type_index(typeid(Facing6)), 5 }, { std::type_index(typeid(Powered)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:pointed_dripstone", {{ std::type_index(typeid(Thickness)), 4 }, { std::type_index(typeid(VerticalDirection)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:dripstone_block", {} },
        {"minecraft:cave_vines", {{ std::type_index(typeid(Age26)), 25 }, { std::type_index(typeid(Berries)), 1 }, } },
        {"minecraft:cave_vines_plant", {{ std::type_index(typeid(Berries)), 1 }, } },
        {"minecraft:spore_blossom", {} },
        {"minecraft:azalea", {} },
        {"minecraft:flowering_azalea", {} },
        {"minecraft:moss_carpet", {} },
        {"minecraft:pink_petals", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(FlowerAmount)), 3 }, } },
        {"minecraft:wildflowers", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(FlowerAmount)), 3 }, } },
        {"minecraft:leaf_litter", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(SegmentAmount)), 3 }, } },
        {"minecraft:moss_block", {} },
        {"minecraft:big_dripleaf", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Tilt)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:big_dripleaf_stem", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:small_dripleaf", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(DoorHalf)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:hanging_roots", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:rooted_dirt", {} },
        {"minecraft:mud", {} },
        {"minecraft:deepslate", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:cobbled_deepslate", {} },
        {"minecraft:cobbled_deepslate_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cobbled_deepslate_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:cobbled_deepslate_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:polished_deepslate", {} },
        {"minecraft:polished_deepslate_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_deepslate_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:polished_deepslate_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:deepslate_tiles", {} },
        {"minecraft:deepslate_tile_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:deepslate_tile_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:deepslate_tile_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:deepslate_bricks", {} },
        {"minecraft:deepslate_brick_stairs", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Half)), 1 }, { std::type_index(typeid(StairShape)), 4 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:deepslate_brick_slab", {{ std::type_index(typeid(SlabType)), 2 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:deepslate_brick_wall", {{ std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(Up)), 1 }, { std::type_index(typeid(Waterlogged)), 1 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:chiseled_deepslate", {} },
        {"minecraft:cracked_deepslate_bricks", {} },
        {"minecraft:cracked_deepslate_tiles", {} },
        {"minecraft:infested_deepslate", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:smooth_basalt", {} },
        {"minecraft:raw_iron_block", {} },
        {"minecraft:raw_copper_block", {} },
        {"minecraft:raw_gold_block", {} },
        {"minecraft:potted_azalea_bush", {} },
        {"minecraft:potted_flowering_azalea_bush", {} },
        {"minecraft:ochre_froglight", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:verdant_froglight", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:pearlescent_froglight", {{ std::type_index(typeid(AxisXYZ)), 2 }, } },
        {"minecraft:frogspawn", {} },
        {"minecraft:reinforced_deepslate", {} },
        {"minecraft:decorated_pot", {{ std::type_index(typeid(Cracked)), 1 }, { std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:crafter", {{ std::type_index(typeid(Crafting)), 1 }, { std::type_index(typeid(Orientation)), 11 }, { std::type_index(typeid(Triggered)), 1 }, } },
        {"minecraft:trial_spawner", {{ std::type_index(typeid(Ominous)), 1 }, { std::type_index(typeid(TrialSpawnerState)), 5 }, } },
        {"minecraft:vault", {{ std::type_index(typeid(Facing4)), 3 }, { std::type_index(typeid(Ominous)), 1 }, { std::type_index(typeid(VaultState)), 3 }, } },
        {"minecraft:heavy_core", {{ std::type_index(typeid(Waterlogged)), 1 }, } },
        {"minecraft:pale_moss_block", {} },
        {"minecraft:pale_moss_carpet", {{ std::type_index(typeid(Bottom)), 1 }, { std::type_index(typeid(WallEast)), 2 }, { std::type_index(typeid(WallNorth)), 2 }, { std::type_index(typeid(WallSouth)), 2 }, { std::type_index(typeid(WallWest)), 2 }, } },
        {"minecraft:pale_hanging_moss", {{ std::type_index(typeid(Tip)), 1 }, } },
        {"minecraft:open_eyeblossom", {} },
        {"minecraft:closed_eyeblossom", {} },
        {"minecraft:potted_open_eyeblossom", {} },
        {"minecraft:potted_closed_eyeblossom", {} },
        {"minecraft:firefly_bush", {} },
    };
    return block_states;
};
