#pragma once

#include <unordered_map>
#include <vector>

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
    std::vector<uint32_t> palette;
    /** A vector of packed 8 byte numbers that contain entries.
     * Each entry has <code>bits_per_entry</code> bits in it, and there are multiple entries per number.
     * Each entry is an index in the palette vector to get the type of block or biome.
     */
    std::vector<uint64_t> data;
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

    static PalettedContainer from_bytes(const uint8_t*& bytes, Type type)
    {
        // printf("Reading paletted container\n");
        PalettedContainer container;
        container.bits_per_entry = StandardTypes::from_bytes<uint8_t>(bytes);
        // printf("Read bits per entry: %d\n", container.bits_per_entry);
        container.format = PalettedContainer::get_format(container.bits_per_entry);
        int number_of_entries = static_cast<int>(type);
        int data_length = PalettedContainer::get_data_length(container.bits_per_entry, number_of_entries);

        switch (container.format)
        {
            case PaletteFormat::SINGLE:
            {
                container.palette.emplace_back(VarInt::from_bytes(bytes));
                break;
            }
            case PaletteFormat::INDIRECT:
            {
                int palette_size = VarInt::from_bytes(bytes);
                for (int i = 0; i < palette_size; i++)
                {
                    container.palette.push_back(VarInt::from_bytes(bytes));
                }
                for (int i = 0; i < data_length; i++)
                {
                    container.data.emplace_back(StandardTypes::from_bytes<uint64_t>(bytes));
                }
                break;
            }
            case PaletteFormat::DIRECT:
            {
                std::vector<uint64_t> temp_data;
                for (int i = 0; i < data_length; i++)
                {
                    temp_data.emplace_back(StandardTypes::from_bytes<uint64_t>(bytes));
                }

                /* Stores the block ids mapped to their position in the palette */
                std::unordered_map<uint16_t, uint16_t> block_ids_to_palette;
                std::vector<uint16_t> block_ids;
                block_ids.reserve(number_of_entries);

                for (uint64_t packed : temp_data)
                {
                    for (int j = 0; j < (64 / container.bits_per_entry); j++)
                    {
                        uint64_t bitmask = (static_cast<uint64_t>(1) << container.bits_per_entry) - 1;
                        uint16_t block_id = (packed >> (container.bits_per_entry * j)) & bitmask;
                        if (!block_ids_to_palette.contains(block_id))
                        {
                            block_ids_to_palette.emplace(block_id, container.palette.size());
                            container.palette.push_back(block_id);
                        }
                        block_ids.push_back(block_id);
                    }
                }

                int new_bpe = std::bit_width(container.palette.size());
                // loop block ids again, filling up the actual data vector with the right palette indexes
                int bits_left_in_long = 64;
                uint64_t current{};
                for (uint16_t block_id : block_ids)
                {
                    current |= static_cast<uint64_t>(block_ids_to_palette[block_id]) << (64 - bits_left_in_long);

                    bits_left_in_long -= new_bpe;
                    if (bits_left_in_long < new_bpe)
                    {
                        container.data.push_back(current);
                        current = 0;
                        bits_left_in_long = 64;
                    }
                }
                if (bits_left_in_long < 64)
                {
                    container.data.push_back(current);
                }

                container.bits_per_entry = new_bpe;
                container.format = PaletteFormat::INDIRECT;
                break;
            }
        }
        return container;
    }
};
