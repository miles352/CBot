import json

ordered = dict()
with open("registries.json", "r") as registries:
    reg = json.load(registries)
    types = reg["minecraft:entity_type"]["entries"]
    for entry in types:
        ordered[types[entry]["protocol_id"]] = entry[10:].upper()
        print(entry[10:].upper() + " " + str(types[entry]["protocol_id"]))

ordered = dict(sorted(ordered.items()))
with open("EntityRegistryGenerated.hpp", "w") as out:
    out.write("#pragma once\n\n#ifndef NO_REGISTRY\nenum class EntityType\n{")

    for entity in ordered.values():
        out.write("\n\t" + entity + ",")
    out.write("\n\tCOUNT")

    out.write("\n};\n#endif\n")
