import json

# namespace Items
# {
#     const ItemStack ACACIA_BUTTON("acacia_button", 64, Rarity::COMMON);
# }

# inline const std::vector<const ItemStack*> item_registry = {
#     &Items::ACACIA_BUTTON,
# };

order = {}

# Read the protocol ids to get the order
with open("registries.json", "r") as file:
    data = json.load(file)
    for item in data["minecraft:item"]["entries"]:
        order[item] = data["minecraft:item"]["entries"][item]["protocol_id"]


definitions = {}

with open("items.json", "r") as file:

    data = json.load(file)
    for item in data:
        components = data[item]["components"]
        definitions[order[item]] = f"\t\tItemStack {{\"{item[10:]}\", {components["minecraft:max_stack_size"]}, Rarity::{components["minecraft:rarity"].upper()}}},\n"
    
definitions = dict(sorted(definitions.items()))

with open("ItemRegistryGenerated.hpp", "w") as output:
    output.write("#pragma once\n\n#ifndef NO_REGISTRY\n#include \"ItemStack.hpp\"\n\n")
    output.write("namespace Items\n{\n\tconstexpr ItemStack ItemRegistry[] = {\n")
    for definition in definitions.values():
        output.write(definition)

    output.write("\t};\n\n")
    for i, definition in enumerate(definitions.values()):
        # print(definition.split("\"")[1].upper())
        output.write(f"\tconstexpr inline auto& {definition.split("\"")[1].upper()} = ItemRegistry[{i}];\n")
    output.write("};\n#endif")