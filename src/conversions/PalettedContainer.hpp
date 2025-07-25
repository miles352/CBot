#pragma once
#include <cstdint>
#include <optional>
#include <vector>

#include "PrefixedArray.hpp"
#include "StandardTypes.hpp"
#include "VarInt.hpp"

class PalettedContainer
{
public:
    /** The type the palette represents, either block states or biomes */
    enum Type
    {
        BIOMES = 64,
        BLOCKS = 4096
    };

    enum PaletteFormat
    {
        SINGLE,
        INDIRECT,
        DIRECT
    };

    uint8_t bits_per_entry;
    /** A vector that contains every type of block or biome inside a palette if the palette is not in Direct format.
     * If in Single format, then the palette only contains one entry.
     * If in Direct format, then the type is stored directly in the data and not mapped to the palette.
     */
    std::vector<int> palette;
    /** A vector of packed 8 byte numbers that contain entries.
     * Each entry has <code>bits_per_entry</code> bits in it, and there are multiply entries per number.
     * Each entry is an index in the palette vector to get the type of block or biome.
     */
    std::vector<int64_t> data;
    PaletteFormat format;

    static constexpr PaletteFormat get_format(const int bits_per_entry)
    {
        if (bits_per_entry == 0) return PaletteFormat::SINGLE;
        if (bits_per_entry < 9) return PaletteFormat::INDIRECT;
        return PaletteFormat::DIRECT;
    }

    static constexpr int get_data_length(const int bits_per_entry, const int number_of_entries)
    {
        if (bits_per_entry == 0) return 0;
        int entries_per_long = 64 / bits_per_entry;
        return (number_of_entries + entries_per_long - 1) / entries_per_long;
    }

    static PalettedContainer from_bytes(uint8_t*& bytes, Type type)
    {
        // printf("Reading paletted container\n");
        PalettedContainer container;
        container.bits_per_entry = StandardTypes::from_bytes<uint8_t>(bytes);
        // printf("Read bits per entry: %d\n", container.bits_per_entry);
        container.format = PalettedContainer::get_format(container.bits_per_entry);
        int number_of_entries = static_cast<int>(type);
        int data_length = PalettedContainer::get_data_length(container.bits_per_entry, number_of_entries);

        // printf("Format: %d, number of entries: %d, data length: %d\n", container.format, number_of_entries, data_length);

        switch (container.format)
        {
            case PaletteFormat::SINGLE:
            {
                container.palette.emplace_back(VarInt::from_bytes(bytes));
                break;
            }
            case PaletteFormat::INDIRECT:
            {
                container.palette = PrefixedArray::from_bytes_variable<VarInt>(bytes);
                for (int i = 0; i < data_length; i++)
                {
                    container.data.emplace_back(StandardTypes::from_bytes<int64_t>(bytes));
                }
                break;
            }
            case PaletteFormat::DIRECT:
            {
                for (int i = 0; i < data_length; i++)
                {
                    container.data.emplace_back(StandardTypes::from_bytes<int64_t>(bytes));
                }
                break;
            }
        }
        return container;
    }
};
