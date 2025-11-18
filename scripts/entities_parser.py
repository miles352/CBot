import json

with open("registries.json", "r") as registries:
    reg = json.load(registries)
    types = reg["minecraft:entity_type"]["entries"]
    with open("EntityRegistryGenerated.hpp", "w") as out:
        out.write("#pragma once\n\n#ifndef NO_REGISTRY\nenum class Entities\n{")
        for entry in types:
            out.write("\n\t" + entry[10:].upper() + ",")

        out.write("\n};\n#endif\n")
