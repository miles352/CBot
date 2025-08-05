import json 
import ast

# Parses blocks.json generated using `java -DbundlerMainClass="net.minecraft.data.Main" -jar server.jar --reports` into usable c++ header file.
# https://minecraft.wiki/w/Minecraft_Wiki:Projects/wiki.vg_merge/Data_Generators

enums = {
    "face ['floor', 'wall', 'ceiling']": "Face",
    "facing ['north', 'south', 'west', 'east']": "Facing4",
    "facing ['down', 'north', 'south', 'west', 'east']": "Facing5",
    "facing ['north', 'east', 'south', 'west', 'up', 'down']": "Facing6",
    "powered ['true', 'false']": "Powered",
    "half ['upper', 'lower']": "DoorHalf",
    "hinge ['left', 'right']": "Hinge",
    "open ['true', 'false']": "Open",
    "east ['true', 'false']": "East",
    "east ['none', 'low', 'tall']": "WallEast",
    "east ['up', 'side', 'none']": "RedstoneEast",
    "north ['true', 'false']": "North",
    "north ['none', 'low', 'tall']": "WallNorth",
    "north ['up', 'side', 'none']": "RedstoneNorth",
    "south ['true', 'false']": "South",
    "south ['none', 'low', 'tall']": "WallSouth",
    "south ['up', 'side', 'none']": "RedstoneSouth",
    "west ['true', 'false']": "West",
    "west ['none', 'low', 'tall']": "WallWest",
    "west ['up', 'side', 'none']": "RedstoneWest",
    "up ['true', 'false']": "Up",
    "down ['true', 'false']": "Down",
    "waterlogged ['true', 'false']": "Waterlogged",
    "in_wall ['true', 'false']": "InWall",
    "attached ['true', 'false']": "Attached",
    "rotation ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15']": "Rotation",
    "distance ['0', '1', '2', '3', '4', '5', '6', '7']": "Distance8",
    "distance ['1', '2', '3', '4', '5', '6', '7']": "Distance7",
    "persistent ['true', 'false']": "Persistent",
    "axis ['x', 'y', 'z']": "AxisXYZ",
    "axis ['x', 'z']": "AxisXZ",
    "stage ['0', '1']": "Stage",
    "type ['top', 'bottom', 'double']": "SlabType",
    "half ['top', 'bottom']": "Half",
    "shape ['straight', 'inner_left', 'inner_right', 'outer_left', 'outer_right']": "StairShape",
    "shape ['north_south', 'east_west', 'ascending_east', 'ascending_west', 'ascending_north', 'ascending_south']": "RailShape",
    "shape ['north_south', 'east_west', 'ascending_east', 'ascending_west', 'ascending_north', 'ascending_south', 'south_east', 'south_west', 'north_west', 'north_east']": "RailShapeFull",
    "age ['0', '1']": "Age2",
    "age ['0', '1', '2']": "Age3",
    "age ['0', '1', '2', '3']": "Age4",
    "age ['0', '1', '2', '3', '4']": "Age5",
    "age ['0', '1', '2', '3', '4', '5']": "Age6",
    "age ['0', '1', '2', '3', '4', '5', '6', '7']": "Age8",
    "age ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15']": "Age16",
    "age ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15', '16', '17', '18', '19', '20', '21', '22', '23', '24', '25']": "Age26",
    "leaves ['none', 'small', 'large']": "Leaves",
    "honey_level ['0', '1', '2', '3', '4', '5']": "HoneyLevel",
    "attachment ['floor', 'ceiling', 'single_wall', 'double_wall']": "Attachment",
    "tilt ['none', 'unstable', 'partial', 'full']": "Tilt",
    "occupied ['true', 'false']": "Occupied",
    "part ['head', 'foot']": "Part",
    "candles ['1', '2', '3', '4']": "Candles",
    "lit ['true', 'false']": "Lit",
    "has_bottle_0 ['true', 'false']": "HasBottle0",
    "has_bottle_1 ['true', 'false']": "HasBottle1",
    "has_bottle_2 ['true', 'false']": "HasBottle2",
    "drag ['true', 'false']": "Drag",
    "bites ['0', '1', '2', '3', '4', '5', '6']": "Bites",
    "power ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15']": "Power",
    "sculk_sensor_phase ['inactive', 'active', 'cooldown']": "SculkSensorPhase",
    "signal_fire ['true', 'false']": "SignalFire",
    "berries ['true', 'false']": "Berries",
    "conditional ['true', 'false']": "Conditional",
    "type ['single', 'left', 'right']": "ChestType",
    "slot_0_occupied ['true', 'false']": "Slot0Occupied",
    "slot_1_occupied ['true', 'false']": "Slot1Occupied",
    "slot_2_occupied ['true', 'false']": "Slot2Occupied",
    "slot_3_occupied ['true', 'false']": "Slot3Occupied",
    "slot_4_occupied ['true', 'false']": "Slot4Occupied",
    "slot_5_occupied ['true', 'false']": "Slot5Occupied",
    "mode ['compare', 'subtract']": "ComparatorMode",
    "mode ['save', 'load', 'corner', 'data']": "StructureBlockMode",
    "mode ['start', 'log', 'fail', 'accept']": "TestBlockMode",
    "level ['1', '2', '3']": "Level3",
    "level ['0', '1', '2', '3', '4', '5', '6', '7', '8']": "Level9",
    "level ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15']": "Level16",
    "crafting ['true', 'false']": "Crafting",
    "orientation ['down_east', 'down_north', 'down_south', 'down_west', 'up_east', 'up_north', 'up_south', 'up_west', 'west_up', 'east_up', 'north_up', 'south_up']": "Orientation",
    "triggered ['true', 'false']": "Triggered",
    "creaking_heart_state ['uprooted', 'dormant', 'awake']": "CreakingHeartState",
    "natural ['true', 'false']": "Natural",
    "inverted ['true', 'false']": "Inverted",
    "cracked ['true', 'false']": "Cracked",
    "eye ['true', 'false']": "Eye",
    "snowy ['true', 'false']": "Snowy",
    "enabled ['true', 'false']": "Enabled",
    "has_record ['true', 'false']": "HasRecord",
    "hanging ['true', 'false']": "Hanging",
    "has_book ['true', 'false']": "HasBook",
    "moisture ['0', '1', '2', '3', '4', '5', '6', '7']": "Moisture",
    "segment_amount ['1', '2', '3', '4']": "SegmentAmount",
    "type ['normal', 'sticky']": "PistonType",
    "instrument ['harp', 'basedrum', 'snare', 'hat', 'bass', 'flute', 'bell', 'guitar', 'chime', 'xylophone', 'iron_xylophone', 'cow_bell', 'didgeridoo', 'bit', 'banjo', 'pling', 'zombie', 'skeleton', 'creeper', 'dragon', 'wither_skeleton', 'piglin', 'custom_head']": "Instrument",
    "note ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9', '10', '11', '12', '13', '14', '15', '16', '17', '18', '19', '20', '21', '22', '23', '24']": "Note",
    "tip ['true', 'false']": "Tip",
    "bottom ['true', 'false']": "Bottom",
    "flower_amount ['1', '2', '3', '4']": "FlowerAmount",
    "extended ['true', 'false']": "Extended",
    "short ['true', 'false']": "Short",
    "thickness ['tip_merge', 'tip', 'frustum', 'middle', 'base']": "Thickness",
    "vertical_direction ['up', 'down']": "VerticalDirection",
    "delay ['1', '2', '3', '4']": "Delay",
    "locked ['true', 'false']": "Locked",
    "charges ['0', '1', '2', '3', '4']": "Charges",
    "bloom ['true', 'false']": "Bloom",
    "can_summon ['true', 'false']": "CanSummon",
    "shrieking ['true', 'false']": "Shrieking",
    "pickles ['1', '2', '3', '4']": "Pickles",
    "hatch ['0', '1', '2']": "Hatch",
    "layers ['1', '2', '3', '4', '5', '6', '7', '8']": "Layers",
    "dusted ['0', '1', '2', '3']": "Dusted",
    "unstable ['true', 'false']": "Unstable",
    "ominous ['true', 'false']": "Ominous",
    "trial_spawner_state ['inactive', 'waiting_for_players', 'active', 'waiting_for_reward_ejection', 'ejecting_reward', 'cooldown']": "TrialSpawnerState",
    "disarmed ['true', 'false']": "Disarmed",
    "eggs ['1', '2', '3', '4']": "Eggs",
    "vault_state ['inactive', 'active', 'unlocking', 'ejecting']": "VaultState"
}

blocks = dict()

with open("blocks.json", "r") as file:
    data = json.load(file)
    for block_name in data:
        if "properties" not in data[block_name]:
            blocks[data[block_name]["states"][0]["id"]] = f"{{\"{block_name}\", {{}} }}"
        else:
            state = data[block_name]["states"][-1]
            formatted_state = "{"
            for property in state["properties"]:
                properties_list = data[block_name]["properties"][property]
                enum_name = enums[property + " " + str(properties_list)]
                formatted_state += f"{{ std::type_index(typeid({enum_name})), {properties_list.index(state["properties"][property])} }}, "
            formatted_state += "}"
            blocks[state["id"]] = f"{{\"{block_name}\", {formatted_state} }}"


with open("BlockRegistryGenerated.hpp", "w") as output:
    output.write("#pragma once\n\n#include <vector>\n#include <string>\n#include <typeindex>\n\n")
    for i in enums:
        output.write(f"enum class {enums[i]} \n{{\n")
        for state in ast.literal_eval(i.split(" ", 1)[1]):
            if state[0].isdigit():
                output.write(f"    _{state},\n")
            else:
                output.write(f"    {state.upper()},\n")
        output.write("};\n\n")

    output.write("inline const std::vector<std::pair<std::string, std::vector<std::pair<std::type_index, int>>>>& get_block_states() \n{\n")
    output.write("    static const std::vector<std::pair<std::string, std::vector<std::pair<std::type_index, int>>>> block_states = {\n")
    sorted = dict(sorted(blocks.items()))
    for i in sorted:
        output.write("        " + sorted[i] + ",\n")
    output.write("    };\n    return block_states;\n};\n")
