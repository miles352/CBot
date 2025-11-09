#pragma once

#ifndef NO_REGISTRY
#include "ItemStack.hpp"

namespace Items
{
	constexpr inline ItemStack ItemRegistry[] = {
		ItemStack {"air", 64, Rarity::COMMON},
		ItemStack {"stone", 64, Rarity::COMMON},
		ItemStack {"granite", 64, Rarity::COMMON},
		ItemStack {"polished_granite", 64, Rarity::COMMON},
		ItemStack {"diorite", 64, Rarity::COMMON},
		ItemStack {"polished_diorite", 64, Rarity::COMMON},
		ItemStack {"andesite", 64, Rarity::COMMON},
		ItemStack {"polished_andesite", 64, Rarity::COMMON},
		ItemStack {"deepslate", 64, Rarity::COMMON},
		ItemStack {"cobbled_deepslate", 64, Rarity::COMMON},
		ItemStack {"polished_deepslate", 64, Rarity::COMMON},
		ItemStack {"calcite", 64, Rarity::COMMON},
		ItemStack {"tuff", 64, Rarity::COMMON},
		ItemStack {"tuff_slab", 64, Rarity::COMMON},
		ItemStack {"tuff_stairs", 64, Rarity::COMMON},
		ItemStack {"tuff_wall", 64, Rarity::COMMON},
		ItemStack {"chiseled_tuff", 64, Rarity::COMMON},
		ItemStack {"polished_tuff", 64, Rarity::COMMON},
		ItemStack {"polished_tuff_slab", 64, Rarity::COMMON},
		ItemStack {"polished_tuff_stairs", 64, Rarity::COMMON},
		ItemStack {"polished_tuff_wall", 64, Rarity::COMMON},
		ItemStack {"tuff_bricks", 64, Rarity::COMMON},
		ItemStack {"tuff_brick_slab", 64, Rarity::COMMON},
		ItemStack {"tuff_brick_stairs", 64, Rarity::COMMON},
		ItemStack {"tuff_brick_wall", 64, Rarity::COMMON},
		ItemStack {"chiseled_tuff_bricks", 64, Rarity::COMMON},
		ItemStack {"dripstone_block", 64, Rarity::COMMON},
		ItemStack {"grass_block", 64, Rarity::COMMON},
		ItemStack {"dirt", 64, Rarity::COMMON},
		ItemStack {"coarse_dirt", 64, Rarity::COMMON},
		ItemStack {"podzol", 64, Rarity::COMMON},
		ItemStack {"rooted_dirt", 64, Rarity::COMMON},
		ItemStack {"mud", 64, Rarity::COMMON},
		ItemStack {"crimson_nylium", 64, Rarity::COMMON},
		ItemStack {"warped_nylium", 64, Rarity::COMMON},
		ItemStack {"cobblestone", 64, Rarity::COMMON},
		ItemStack {"oak_planks", 64, Rarity::COMMON},
		ItemStack {"spruce_planks", 64, Rarity::COMMON},
		ItemStack {"birch_planks", 64, Rarity::COMMON},
		ItemStack {"jungle_planks", 64, Rarity::COMMON},
		ItemStack {"acacia_planks", 64, Rarity::COMMON},
		ItemStack {"cherry_planks", 64, Rarity::COMMON},
		ItemStack {"dark_oak_planks", 64, Rarity::COMMON},
		ItemStack {"pale_oak_planks", 64, Rarity::COMMON},
		ItemStack {"mangrove_planks", 64, Rarity::COMMON},
		ItemStack {"bamboo_planks", 64, Rarity::COMMON},
		ItemStack {"crimson_planks", 64, Rarity::COMMON},
		ItemStack {"warped_planks", 64, Rarity::COMMON},
		ItemStack {"bamboo_mosaic", 64, Rarity::COMMON},
		ItemStack {"oak_sapling", 64, Rarity::COMMON},
		ItemStack {"spruce_sapling", 64, Rarity::COMMON},
		ItemStack {"birch_sapling", 64, Rarity::COMMON},
		ItemStack {"jungle_sapling", 64, Rarity::COMMON},
		ItemStack {"acacia_sapling", 64, Rarity::COMMON},
		ItemStack {"cherry_sapling", 64, Rarity::COMMON},
		ItemStack {"dark_oak_sapling", 64, Rarity::COMMON},
		ItemStack {"pale_oak_sapling", 64, Rarity::COMMON},
		ItemStack {"mangrove_propagule", 64, Rarity::COMMON},
		ItemStack {"bedrock", 64, Rarity::COMMON},
		ItemStack {"sand", 64, Rarity::COMMON},
		ItemStack {"suspicious_sand", 64, Rarity::COMMON},
		ItemStack {"suspicious_gravel", 64, Rarity::COMMON},
		ItemStack {"red_sand", 64, Rarity::COMMON},
		ItemStack {"gravel", 64, Rarity::COMMON},
		ItemStack {"coal_ore", 64, Rarity::COMMON},
		ItemStack {"deepslate_coal_ore", 64, Rarity::COMMON},
		ItemStack {"iron_ore", 64, Rarity::COMMON},
		ItemStack {"deepslate_iron_ore", 64, Rarity::COMMON},
		ItemStack {"copper_ore", 64, Rarity::COMMON},
		ItemStack {"deepslate_copper_ore", 64, Rarity::COMMON},
		ItemStack {"gold_ore", 64, Rarity::COMMON},
		ItemStack {"deepslate_gold_ore", 64, Rarity::COMMON},
		ItemStack {"redstone_ore", 64, Rarity::COMMON},
		ItemStack {"deepslate_redstone_ore", 64, Rarity::COMMON},
		ItemStack {"emerald_ore", 64, Rarity::COMMON},
		ItemStack {"deepslate_emerald_ore", 64, Rarity::COMMON},
		ItemStack {"lapis_ore", 64, Rarity::COMMON},
		ItemStack {"deepslate_lapis_ore", 64, Rarity::COMMON},
		ItemStack {"diamond_ore", 64, Rarity::COMMON},
		ItemStack {"deepslate_diamond_ore", 64, Rarity::COMMON},
		ItemStack {"nether_gold_ore", 64, Rarity::COMMON},
		ItemStack {"nether_quartz_ore", 64, Rarity::COMMON},
		ItemStack {"ancient_debris", 64, Rarity::COMMON},
		ItemStack {"coal_block", 64, Rarity::COMMON},
		ItemStack {"raw_iron_block", 64, Rarity::COMMON},
		ItemStack {"raw_copper_block", 64, Rarity::COMMON},
		ItemStack {"raw_gold_block", 64, Rarity::COMMON},
		ItemStack {"heavy_core", 64, Rarity::EPIC},
		ItemStack {"amethyst_block", 64, Rarity::COMMON},
		ItemStack {"budding_amethyst", 64, Rarity::COMMON},
		ItemStack {"iron_block", 64, Rarity::COMMON},
		ItemStack {"copper_block", 64, Rarity::COMMON},
		ItemStack {"gold_block", 64, Rarity::COMMON},
		ItemStack {"diamond_block", 64, Rarity::COMMON},
		ItemStack {"netherite_block", 64, Rarity::COMMON},
		ItemStack {"exposed_copper", 64, Rarity::COMMON},
		ItemStack {"weathered_copper", 64, Rarity::COMMON},
		ItemStack {"oxidized_copper", 64, Rarity::COMMON},
		ItemStack {"chiseled_copper", 64, Rarity::COMMON},
		ItemStack {"exposed_chiseled_copper", 64, Rarity::COMMON},
		ItemStack {"weathered_chiseled_copper", 64, Rarity::COMMON},
		ItemStack {"oxidized_chiseled_copper", 64, Rarity::COMMON},
		ItemStack {"cut_copper", 64, Rarity::COMMON},
		ItemStack {"exposed_cut_copper", 64, Rarity::COMMON},
		ItemStack {"weathered_cut_copper", 64, Rarity::COMMON},
		ItemStack {"oxidized_cut_copper", 64, Rarity::COMMON},
		ItemStack {"cut_copper_stairs", 64, Rarity::COMMON},
		ItemStack {"exposed_cut_copper_stairs", 64, Rarity::COMMON},
		ItemStack {"weathered_cut_copper_stairs", 64, Rarity::COMMON},
		ItemStack {"oxidized_cut_copper_stairs", 64, Rarity::COMMON},
		ItemStack {"cut_copper_slab", 64, Rarity::COMMON},
		ItemStack {"exposed_cut_copper_slab", 64, Rarity::COMMON},
		ItemStack {"weathered_cut_copper_slab", 64, Rarity::COMMON},
		ItemStack {"oxidized_cut_copper_slab", 64, Rarity::COMMON},
		ItemStack {"waxed_copper_block", 64, Rarity::COMMON},
		ItemStack {"waxed_exposed_copper", 64, Rarity::COMMON},
		ItemStack {"waxed_weathered_copper", 64, Rarity::COMMON},
		ItemStack {"waxed_oxidized_copper", 64, Rarity::COMMON},
		ItemStack {"waxed_chiseled_copper", 64, Rarity::COMMON},
		ItemStack {"waxed_exposed_chiseled_copper", 64, Rarity::COMMON},
		ItemStack {"waxed_weathered_chiseled_copper", 64, Rarity::COMMON},
		ItemStack {"waxed_oxidized_chiseled_copper", 64, Rarity::COMMON},
		ItemStack {"waxed_cut_copper", 64, Rarity::COMMON},
		ItemStack {"waxed_exposed_cut_copper", 64, Rarity::COMMON},
		ItemStack {"waxed_weathered_cut_copper", 64, Rarity::COMMON},
		ItemStack {"waxed_oxidized_cut_copper", 64, Rarity::COMMON},
		ItemStack {"waxed_cut_copper_stairs", 64, Rarity::COMMON},
		ItemStack {"waxed_exposed_cut_copper_stairs", 64, Rarity::COMMON},
		ItemStack {"waxed_weathered_cut_copper_stairs", 64, Rarity::COMMON},
		ItemStack {"waxed_oxidized_cut_copper_stairs", 64, Rarity::COMMON},
		ItemStack {"waxed_cut_copper_slab", 64, Rarity::COMMON},
		ItemStack {"waxed_exposed_cut_copper_slab", 64, Rarity::COMMON},
		ItemStack {"waxed_weathered_cut_copper_slab", 64, Rarity::COMMON},
		ItemStack {"waxed_oxidized_cut_copper_slab", 64, Rarity::COMMON},
		ItemStack {"oak_log", 64, Rarity::COMMON},
		ItemStack {"spruce_log", 64, Rarity::COMMON},
		ItemStack {"birch_log", 64, Rarity::COMMON},
		ItemStack {"jungle_log", 64, Rarity::COMMON},
		ItemStack {"acacia_log", 64, Rarity::COMMON},
		ItemStack {"cherry_log", 64, Rarity::COMMON},
		ItemStack {"pale_oak_log", 64, Rarity::COMMON},
		ItemStack {"dark_oak_log", 64, Rarity::COMMON},
		ItemStack {"mangrove_log", 64, Rarity::COMMON},
		ItemStack {"mangrove_roots", 64, Rarity::COMMON},
		ItemStack {"muddy_mangrove_roots", 64, Rarity::COMMON},
		ItemStack {"crimson_stem", 64, Rarity::COMMON},
		ItemStack {"warped_stem", 64, Rarity::COMMON},
		ItemStack {"bamboo_block", 64, Rarity::COMMON},
		ItemStack {"stripped_oak_log", 64, Rarity::COMMON},
		ItemStack {"stripped_spruce_log", 64, Rarity::COMMON},
		ItemStack {"stripped_birch_log", 64, Rarity::COMMON},
		ItemStack {"stripped_jungle_log", 64, Rarity::COMMON},
		ItemStack {"stripped_acacia_log", 64, Rarity::COMMON},
		ItemStack {"stripped_cherry_log", 64, Rarity::COMMON},
		ItemStack {"stripped_dark_oak_log", 64, Rarity::COMMON},
		ItemStack {"stripped_pale_oak_log", 64, Rarity::COMMON},
		ItemStack {"stripped_mangrove_log", 64, Rarity::COMMON},
		ItemStack {"stripped_crimson_stem", 64, Rarity::COMMON},
		ItemStack {"stripped_warped_stem", 64, Rarity::COMMON},
		ItemStack {"stripped_oak_wood", 64, Rarity::COMMON},
		ItemStack {"stripped_spruce_wood", 64, Rarity::COMMON},
		ItemStack {"stripped_birch_wood", 64, Rarity::COMMON},
		ItemStack {"stripped_jungle_wood", 64, Rarity::COMMON},
		ItemStack {"stripped_acacia_wood", 64, Rarity::COMMON},
		ItemStack {"stripped_cherry_wood", 64, Rarity::COMMON},
		ItemStack {"stripped_dark_oak_wood", 64, Rarity::COMMON},
		ItemStack {"stripped_pale_oak_wood", 64, Rarity::COMMON},
		ItemStack {"stripped_mangrove_wood", 64, Rarity::COMMON},
		ItemStack {"stripped_crimson_hyphae", 64, Rarity::COMMON},
		ItemStack {"stripped_warped_hyphae", 64, Rarity::COMMON},
		ItemStack {"stripped_bamboo_block", 64, Rarity::COMMON},
		ItemStack {"oak_wood", 64, Rarity::COMMON},
		ItemStack {"spruce_wood", 64, Rarity::COMMON},
		ItemStack {"birch_wood", 64, Rarity::COMMON},
		ItemStack {"jungle_wood", 64, Rarity::COMMON},
		ItemStack {"acacia_wood", 64, Rarity::COMMON},
		ItemStack {"cherry_wood", 64, Rarity::COMMON},
		ItemStack {"pale_oak_wood", 64, Rarity::COMMON},
		ItemStack {"dark_oak_wood", 64, Rarity::COMMON},
		ItemStack {"mangrove_wood", 64, Rarity::COMMON},
		ItemStack {"crimson_hyphae", 64, Rarity::COMMON},
		ItemStack {"warped_hyphae", 64, Rarity::COMMON},
		ItemStack {"oak_leaves", 64, Rarity::COMMON},
		ItemStack {"spruce_leaves", 64, Rarity::COMMON},
		ItemStack {"birch_leaves", 64, Rarity::COMMON},
		ItemStack {"jungle_leaves", 64, Rarity::COMMON},
		ItemStack {"acacia_leaves", 64, Rarity::COMMON},
		ItemStack {"cherry_leaves", 64, Rarity::COMMON},
		ItemStack {"dark_oak_leaves", 64, Rarity::COMMON},
		ItemStack {"pale_oak_leaves", 64, Rarity::COMMON},
		ItemStack {"mangrove_leaves", 64, Rarity::COMMON},
		ItemStack {"azalea_leaves", 64, Rarity::COMMON},
		ItemStack {"flowering_azalea_leaves", 64, Rarity::COMMON},
		ItemStack {"sponge", 64, Rarity::COMMON},
		ItemStack {"wet_sponge", 64, Rarity::COMMON},
		ItemStack {"glass", 64, Rarity::COMMON},
		ItemStack {"tinted_glass", 64, Rarity::COMMON},
		ItemStack {"lapis_block", 64, Rarity::COMMON},
		ItemStack {"sandstone", 64, Rarity::COMMON},
		ItemStack {"chiseled_sandstone", 64, Rarity::COMMON},
		ItemStack {"cut_sandstone", 64, Rarity::COMMON},
		ItemStack {"cobweb", 64, Rarity::COMMON},
		ItemStack {"short_grass", 64, Rarity::COMMON},
		ItemStack {"fern", 64, Rarity::COMMON},
		ItemStack {"bush", 64, Rarity::COMMON},
		ItemStack {"azalea", 64, Rarity::COMMON},
		ItemStack {"flowering_azalea", 64, Rarity::COMMON},
		ItemStack {"dead_bush", 64, Rarity::COMMON},
		ItemStack {"firefly_bush", 64, Rarity::COMMON},
		ItemStack {"short_dry_grass", 64, Rarity::COMMON},
		ItemStack {"tall_dry_grass", 64, Rarity::COMMON},
		ItemStack {"seagrass", 64, Rarity::COMMON},
		ItemStack {"sea_pickle", 64, Rarity::COMMON},
		ItemStack {"white_wool", 64, Rarity::COMMON},
		ItemStack {"orange_wool", 64, Rarity::COMMON},
		ItemStack {"magenta_wool", 64, Rarity::COMMON},
		ItemStack {"light_blue_wool", 64, Rarity::COMMON},
		ItemStack {"yellow_wool", 64, Rarity::COMMON},
		ItemStack {"lime_wool", 64, Rarity::COMMON},
		ItemStack {"pink_wool", 64, Rarity::COMMON},
		ItemStack {"gray_wool", 64, Rarity::COMMON},
		ItemStack {"light_gray_wool", 64, Rarity::COMMON},
		ItemStack {"cyan_wool", 64, Rarity::COMMON},
		ItemStack {"purple_wool", 64, Rarity::COMMON},
		ItemStack {"blue_wool", 64, Rarity::COMMON},
		ItemStack {"brown_wool", 64, Rarity::COMMON},
		ItemStack {"green_wool", 64, Rarity::COMMON},
		ItemStack {"red_wool", 64, Rarity::COMMON},
		ItemStack {"black_wool", 64, Rarity::COMMON},
		ItemStack {"dandelion", 64, Rarity::COMMON},
		ItemStack {"open_eyeblossom", 64, Rarity::COMMON},
		ItemStack {"closed_eyeblossom", 64, Rarity::COMMON},
		ItemStack {"poppy", 64, Rarity::COMMON},
		ItemStack {"blue_orchid", 64, Rarity::COMMON},
		ItemStack {"allium", 64, Rarity::COMMON},
		ItemStack {"azure_bluet", 64, Rarity::COMMON},
		ItemStack {"red_tulip", 64, Rarity::COMMON},
		ItemStack {"orange_tulip", 64, Rarity::COMMON},
		ItemStack {"white_tulip", 64, Rarity::COMMON},
		ItemStack {"pink_tulip", 64, Rarity::COMMON},
		ItemStack {"oxeye_daisy", 64, Rarity::COMMON},
		ItemStack {"cornflower", 64, Rarity::COMMON},
		ItemStack {"lily_of_the_valley", 64, Rarity::COMMON},
		ItemStack {"wither_rose", 64, Rarity::COMMON},
		ItemStack {"torchflower", 64, Rarity::COMMON},
		ItemStack {"pitcher_plant", 64, Rarity::COMMON},
		ItemStack {"spore_blossom", 64, Rarity::COMMON},
		ItemStack {"brown_mushroom", 64, Rarity::COMMON},
		ItemStack {"red_mushroom", 64, Rarity::COMMON},
		ItemStack {"crimson_fungus", 64, Rarity::COMMON},
		ItemStack {"warped_fungus", 64, Rarity::COMMON},
		ItemStack {"crimson_roots", 64, Rarity::COMMON},
		ItemStack {"warped_roots", 64, Rarity::COMMON},
		ItemStack {"nether_sprouts", 64, Rarity::COMMON},
		ItemStack {"weeping_vines", 64, Rarity::COMMON},
		ItemStack {"twisting_vines", 64, Rarity::COMMON},
		ItemStack {"sugar_cane", 64, Rarity::COMMON},
		ItemStack {"kelp", 64, Rarity::COMMON},
		ItemStack {"pink_petals", 64, Rarity::COMMON},
		ItemStack {"wildflowers", 64, Rarity::COMMON},
		ItemStack {"leaf_litter", 64, Rarity::COMMON},
		ItemStack {"moss_carpet", 64, Rarity::COMMON},
		ItemStack {"moss_block", 64, Rarity::COMMON},
		ItemStack {"pale_moss_carpet", 64, Rarity::COMMON},
		ItemStack {"pale_hanging_moss", 64, Rarity::COMMON},
		ItemStack {"pale_moss_block", 64, Rarity::COMMON},
		ItemStack {"hanging_roots", 64, Rarity::COMMON},
		ItemStack {"big_dripleaf", 64, Rarity::COMMON},
		ItemStack {"small_dripleaf", 64, Rarity::COMMON},
		ItemStack {"bamboo", 64, Rarity::COMMON},
		ItemStack {"oak_slab", 64, Rarity::COMMON},
		ItemStack {"spruce_slab", 64, Rarity::COMMON},
		ItemStack {"birch_slab", 64, Rarity::COMMON},
		ItemStack {"jungle_slab", 64, Rarity::COMMON},
		ItemStack {"acacia_slab", 64, Rarity::COMMON},
		ItemStack {"cherry_slab", 64, Rarity::COMMON},
		ItemStack {"dark_oak_slab", 64, Rarity::COMMON},
		ItemStack {"pale_oak_slab", 64, Rarity::COMMON},
		ItemStack {"mangrove_slab", 64, Rarity::COMMON},
		ItemStack {"bamboo_slab", 64, Rarity::COMMON},
		ItemStack {"bamboo_mosaic_slab", 64, Rarity::COMMON},
		ItemStack {"crimson_slab", 64, Rarity::COMMON},
		ItemStack {"warped_slab", 64, Rarity::COMMON},
		ItemStack {"stone_slab", 64, Rarity::COMMON},
		ItemStack {"smooth_stone_slab", 64, Rarity::COMMON},
		ItemStack {"sandstone_slab", 64, Rarity::COMMON},
		ItemStack {"cut_sandstone_slab", 64, Rarity::COMMON},
		ItemStack {"petrified_oak_slab", 64, Rarity::COMMON},
		ItemStack {"cobblestone_slab", 64, Rarity::COMMON},
		ItemStack {"brick_slab", 64, Rarity::COMMON},
		ItemStack {"stone_brick_slab", 64, Rarity::COMMON},
		ItemStack {"mud_brick_slab", 64, Rarity::COMMON},
		ItemStack {"nether_brick_slab", 64, Rarity::COMMON},
		ItemStack {"quartz_slab", 64, Rarity::COMMON},
		ItemStack {"red_sandstone_slab", 64, Rarity::COMMON},
		ItemStack {"cut_red_sandstone_slab", 64, Rarity::COMMON},
		ItemStack {"purpur_slab", 64, Rarity::COMMON},
		ItemStack {"prismarine_slab", 64, Rarity::COMMON},
		ItemStack {"prismarine_brick_slab", 64, Rarity::COMMON},
		ItemStack {"dark_prismarine_slab", 64, Rarity::COMMON},
		ItemStack {"smooth_quartz", 64, Rarity::COMMON},
		ItemStack {"smooth_red_sandstone", 64, Rarity::COMMON},
		ItemStack {"smooth_sandstone", 64, Rarity::COMMON},
		ItemStack {"smooth_stone", 64, Rarity::COMMON},
		ItemStack {"bricks", 64, Rarity::COMMON},
		ItemStack {"bookshelf", 64, Rarity::COMMON},
		ItemStack {"chiseled_bookshelf", 64, Rarity::COMMON},
		ItemStack {"decorated_pot", 64, Rarity::COMMON},
		ItemStack {"mossy_cobblestone", 64, Rarity::COMMON},
		ItemStack {"obsidian", 64, Rarity::COMMON},
		ItemStack {"torch", 64, Rarity::COMMON},
		ItemStack {"end_rod", 64, Rarity::COMMON},
		ItemStack {"chorus_plant", 64, Rarity::COMMON},
		ItemStack {"chorus_flower", 64, Rarity::COMMON},
		ItemStack {"purpur_block", 64, Rarity::COMMON},
		ItemStack {"purpur_pillar", 64, Rarity::COMMON},
		ItemStack {"purpur_stairs", 64, Rarity::COMMON},
		ItemStack {"spawner", 64, Rarity::COMMON},
		ItemStack {"creaking_heart", 64, Rarity::COMMON},
		ItemStack {"chest", 64, Rarity::COMMON},
		ItemStack {"crafting_table", 64, Rarity::COMMON},
		ItemStack {"farmland", 64, Rarity::COMMON},
		ItemStack {"furnace", 64, Rarity::COMMON},
		ItemStack {"ladder", 64, Rarity::COMMON},
		ItemStack {"cobblestone_stairs", 64, Rarity::COMMON},
		ItemStack {"snow", 64, Rarity::COMMON},
		ItemStack {"ice", 64, Rarity::COMMON},
		ItemStack {"snow_block", 64, Rarity::COMMON},
		ItemStack {"cactus", 64, Rarity::COMMON},
		ItemStack {"cactus_flower", 64, Rarity::COMMON},
		ItemStack {"clay", 64, Rarity::COMMON},
		ItemStack {"jukebox", 64, Rarity::COMMON},
		ItemStack {"oak_fence", 64, Rarity::COMMON},
		ItemStack {"spruce_fence", 64, Rarity::COMMON},
		ItemStack {"birch_fence", 64, Rarity::COMMON},
		ItemStack {"jungle_fence", 64, Rarity::COMMON},
		ItemStack {"acacia_fence", 64, Rarity::COMMON},
		ItemStack {"cherry_fence", 64, Rarity::COMMON},
		ItemStack {"dark_oak_fence", 64, Rarity::COMMON},
		ItemStack {"pale_oak_fence", 64, Rarity::COMMON},
		ItemStack {"mangrove_fence", 64, Rarity::COMMON},
		ItemStack {"bamboo_fence", 64, Rarity::COMMON},
		ItemStack {"crimson_fence", 64, Rarity::COMMON},
		ItemStack {"warped_fence", 64, Rarity::COMMON},
		ItemStack {"pumpkin", 64, Rarity::COMMON},
		ItemStack {"carved_pumpkin", 64, Rarity::COMMON},
		ItemStack {"jack_o_lantern", 64, Rarity::COMMON},
		ItemStack {"netherrack", 64, Rarity::COMMON},
		ItemStack {"soul_sand", 64, Rarity::COMMON},
		ItemStack {"soul_soil", 64, Rarity::COMMON},
		ItemStack {"basalt", 64, Rarity::COMMON},
		ItemStack {"polished_basalt", 64, Rarity::COMMON},
		ItemStack {"smooth_basalt", 64, Rarity::COMMON},
		ItemStack {"soul_torch", 64, Rarity::COMMON},
		ItemStack {"glowstone", 64, Rarity::COMMON},
		ItemStack {"infested_stone", 64, Rarity::COMMON},
		ItemStack {"infested_cobblestone", 64, Rarity::COMMON},
		ItemStack {"infested_stone_bricks", 64, Rarity::COMMON},
		ItemStack {"infested_mossy_stone_bricks", 64, Rarity::COMMON},
		ItemStack {"infested_cracked_stone_bricks", 64, Rarity::COMMON},
		ItemStack {"infested_chiseled_stone_bricks", 64, Rarity::COMMON},
		ItemStack {"infested_deepslate", 64, Rarity::COMMON},
		ItemStack {"stone_bricks", 64, Rarity::COMMON},
		ItemStack {"mossy_stone_bricks", 64, Rarity::COMMON},
		ItemStack {"cracked_stone_bricks", 64, Rarity::COMMON},
		ItemStack {"chiseled_stone_bricks", 64, Rarity::COMMON},
		ItemStack {"packed_mud", 64, Rarity::COMMON},
		ItemStack {"mud_bricks", 64, Rarity::COMMON},
		ItemStack {"deepslate_bricks", 64, Rarity::COMMON},
		ItemStack {"cracked_deepslate_bricks", 64, Rarity::COMMON},
		ItemStack {"deepslate_tiles", 64, Rarity::COMMON},
		ItemStack {"cracked_deepslate_tiles", 64, Rarity::COMMON},
		ItemStack {"chiseled_deepslate", 64, Rarity::COMMON},
		ItemStack {"reinforced_deepslate", 64, Rarity::COMMON},
		ItemStack {"brown_mushroom_block", 64, Rarity::COMMON},
		ItemStack {"red_mushroom_block", 64, Rarity::COMMON},
		ItemStack {"mushroom_stem", 64, Rarity::COMMON},
		ItemStack {"iron_bars", 64, Rarity::COMMON},
		ItemStack {"chain", 64, Rarity::COMMON},
		ItemStack {"glass_pane", 64, Rarity::COMMON},
		ItemStack {"melon", 64, Rarity::COMMON},
		ItemStack {"vine", 64, Rarity::COMMON},
		ItemStack {"glow_lichen", 64, Rarity::COMMON},
		ItemStack {"resin_clump", 64, Rarity::COMMON},
		ItemStack {"resin_block", 64, Rarity::COMMON},
		ItemStack {"resin_bricks", 64, Rarity::COMMON},
		ItemStack {"resin_brick_stairs", 64, Rarity::COMMON},
		ItemStack {"resin_brick_slab", 64, Rarity::COMMON},
		ItemStack {"resin_brick_wall", 64, Rarity::COMMON},
		ItemStack {"chiseled_resin_bricks", 64, Rarity::COMMON},
		ItemStack {"brick_stairs", 64, Rarity::COMMON},
		ItemStack {"stone_brick_stairs", 64, Rarity::COMMON},
		ItemStack {"mud_brick_stairs", 64, Rarity::COMMON},
		ItemStack {"mycelium", 64, Rarity::COMMON},
		ItemStack {"lily_pad", 64, Rarity::COMMON},
		ItemStack {"nether_bricks", 64, Rarity::COMMON},
		ItemStack {"cracked_nether_bricks", 64, Rarity::COMMON},
		ItemStack {"chiseled_nether_bricks", 64, Rarity::COMMON},
		ItemStack {"nether_brick_fence", 64, Rarity::COMMON},
		ItemStack {"nether_brick_stairs", 64, Rarity::COMMON},
		ItemStack {"sculk", 64, Rarity::COMMON},
		ItemStack {"sculk_vein", 64, Rarity::COMMON},
		ItemStack {"sculk_catalyst", 64, Rarity::COMMON},
		ItemStack {"sculk_shrieker", 64, Rarity::COMMON},
		ItemStack {"enchanting_table", 64, Rarity::COMMON},
		ItemStack {"end_portal_frame", 64, Rarity::COMMON},
		ItemStack {"end_stone", 64, Rarity::COMMON},
		ItemStack {"end_stone_bricks", 64, Rarity::COMMON},
		ItemStack {"dragon_egg", 64, Rarity::EPIC},
		ItemStack {"sandstone_stairs", 64, Rarity::COMMON},
		ItemStack {"ender_chest", 64, Rarity::COMMON},
		ItemStack {"emerald_block", 64, Rarity::COMMON},
		ItemStack {"oak_stairs", 64, Rarity::COMMON},
		ItemStack {"spruce_stairs", 64, Rarity::COMMON},
		ItemStack {"birch_stairs", 64, Rarity::COMMON},
		ItemStack {"jungle_stairs", 64, Rarity::COMMON},
		ItemStack {"acacia_stairs", 64, Rarity::COMMON},
		ItemStack {"cherry_stairs", 64, Rarity::COMMON},
		ItemStack {"dark_oak_stairs", 64, Rarity::COMMON},
		ItemStack {"pale_oak_stairs", 64, Rarity::COMMON},
		ItemStack {"mangrove_stairs", 64, Rarity::COMMON},
		ItemStack {"bamboo_stairs", 64, Rarity::COMMON},
		ItemStack {"bamboo_mosaic_stairs", 64, Rarity::COMMON},
		ItemStack {"crimson_stairs", 64, Rarity::COMMON},
		ItemStack {"warped_stairs", 64, Rarity::COMMON},
		ItemStack {"command_block", 64, Rarity::EPIC},
		ItemStack {"beacon", 64, Rarity::RARE},
		ItemStack {"cobblestone_wall", 64, Rarity::COMMON},
		ItemStack {"mossy_cobblestone_wall", 64, Rarity::COMMON},
		ItemStack {"brick_wall", 64, Rarity::COMMON},
		ItemStack {"prismarine_wall", 64, Rarity::COMMON},
		ItemStack {"red_sandstone_wall", 64, Rarity::COMMON},
		ItemStack {"mossy_stone_brick_wall", 64, Rarity::COMMON},
		ItemStack {"granite_wall", 64, Rarity::COMMON},
		ItemStack {"stone_brick_wall", 64, Rarity::COMMON},
		ItemStack {"mud_brick_wall", 64, Rarity::COMMON},
		ItemStack {"nether_brick_wall", 64, Rarity::COMMON},
		ItemStack {"andesite_wall", 64, Rarity::COMMON},
		ItemStack {"red_nether_brick_wall", 64, Rarity::COMMON},
		ItemStack {"sandstone_wall", 64, Rarity::COMMON},
		ItemStack {"end_stone_brick_wall", 64, Rarity::COMMON},
		ItemStack {"diorite_wall", 64, Rarity::COMMON},
		ItemStack {"blackstone_wall", 64, Rarity::COMMON},
		ItemStack {"polished_blackstone_wall", 64, Rarity::COMMON},
		ItemStack {"polished_blackstone_brick_wall", 64, Rarity::COMMON},
		ItemStack {"cobbled_deepslate_wall", 64, Rarity::COMMON},
		ItemStack {"polished_deepslate_wall", 64, Rarity::COMMON},
		ItemStack {"deepslate_brick_wall", 64, Rarity::COMMON},
		ItemStack {"deepslate_tile_wall", 64, Rarity::COMMON},
		ItemStack {"anvil", 64, Rarity::COMMON},
		ItemStack {"chipped_anvil", 64, Rarity::COMMON},
		ItemStack {"damaged_anvil", 64, Rarity::COMMON},
		ItemStack {"chiseled_quartz_block", 64, Rarity::COMMON},
		ItemStack {"quartz_block", 64, Rarity::COMMON},
		ItemStack {"quartz_bricks", 64, Rarity::COMMON},
		ItemStack {"quartz_pillar", 64, Rarity::COMMON},
		ItemStack {"quartz_stairs", 64, Rarity::COMMON},
		ItemStack {"white_terracotta", 64, Rarity::COMMON},
		ItemStack {"orange_terracotta", 64, Rarity::COMMON},
		ItemStack {"magenta_terracotta", 64, Rarity::COMMON},
		ItemStack {"light_blue_terracotta", 64, Rarity::COMMON},
		ItemStack {"yellow_terracotta", 64, Rarity::COMMON},
		ItemStack {"lime_terracotta", 64, Rarity::COMMON},
		ItemStack {"pink_terracotta", 64, Rarity::COMMON},
		ItemStack {"gray_terracotta", 64, Rarity::COMMON},
		ItemStack {"light_gray_terracotta", 64, Rarity::COMMON},
		ItemStack {"cyan_terracotta", 64, Rarity::COMMON},
		ItemStack {"purple_terracotta", 64, Rarity::COMMON},
		ItemStack {"blue_terracotta", 64, Rarity::COMMON},
		ItemStack {"brown_terracotta", 64, Rarity::COMMON},
		ItemStack {"green_terracotta", 64, Rarity::COMMON},
		ItemStack {"red_terracotta", 64, Rarity::COMMON},
		ItemStack {"black_terracotta", 64, Rarity::COMMON},
		ItemStack {"barrier", 64, Rarity::EPIC},
		ItemStack {"light", 64, Rarity::EPIC},
		ItemStack {"hay_block", 64, Rarity::COMMON},
		ItemStack {"white_carpet", 64, Rarity::COMMON},
		ItemStack {"orange_carpet", 64, Rarity::COMMON},
		ItemStack {"magenta_carpet", 64, Rarity::COMMON},
		ItemStack {"light_blue_carpet", 64, Rarity::COMMON},
		ItemStack {"yellow_carpet", 64, Rarity::COMMON},
		ItemStack {"lime_carpet", 64, Rarity::COMMON},
		ItemStack {"pink_carpet", 64, Rarity::COMMON},
		ItemStack {"gray_carpet", 64, Rarity::COMMON},
		ItemStack {"light_gray_carpet", 64, Rarity::COMMON},
		ItemStack {"cyan_carpet", 64, Rarity::COMMON},
		ItemStack {"purple_carpet", 64, Rarity::COMMON},
		ItemStack {"blue_carpet", 64, Rarity::COMMON},
		ItemStack {"brown_carpet", 64, Rarity::COMMON},
		ItemStack {"green_carpet", 64, Rarity::COMMON},
		ItemStack {"red_carpet", 64, Rarity::COMMON},
		ItemStack {"black_carpet", 64, Rarity::COMMON},
		ItemStack {"terracotta", 64, Rarity::COMMON},
		ItemStack {"packed_ice", 64, Rarity::COMMON},
		ItemStack {"dirt_path", 64, Rarity::COMMON},
		ItemStack {"sunflower", 64, Rarity::COMMON},
		ItemStack {"lilac", 64, Rarity::COMMON},
		ItemStack {"rose_bush", 64, Rarity::COMMON},
		ItemStack {"peony", 64, Rarity::COMMON},
		ItemStack {"tall_grass", 64, Rarity::COMMON},
		ItemStack {"large_fern", 64, Rarity::COMMON},
		ItemStack {"white_stained_glass", 64, Rarity::COMMON},
		ItemStack {"orange_stained_glass", 64, Rarity::COMMON},
		ItemStack {"magenta_stained_glass", 64, Rarity::COMMON},
		ItemStack {"light_blue_stained_glass", 64, Rarity::COMMON},
		ItemStack {"yellow_stained_glass", 64, Rarity::COMMON},
		ItemStack {"lime_stained_glass", 64, Rarity::COMMON},
		ItemStack {"pink_stained_glass", 64, Rarity::COMMON},
		ItemStack {"gray_stained_glass", 64, Rarity::COMMON},
		ItemStack {"light_gray_stained_glass", 64, Rarity::COMMON},
		ItemStack {"cyan_stained_glass", 64, Rarity::COMMON},
		ItemStack {"purple_stained_glass", 64, Rarity::COMMON},
		ItemStack {"blue_stained_glass", 64, Rarity::COMMON},
		ItemStack {"brown_stained_glass", 64, Rarity::COMMON},
		ItemStack {"green_stained_glass", 64, Rarity::COMMON},
		ItemStack {"red_stained_glass", 64, Rarity::COMMON},
		ItemStack {"black_stained_glass", 64, Rarity::COMMON},
		ItemStack {"white_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"orange_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"magenta_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"light_blue_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"yellow_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"lime_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"pink_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"gray_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"light_gray_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"cyan_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"purple_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"blue_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"brown_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"green_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"red_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"black_stained_glass_pane", 64, Rarity::COMMON},
		ItemStack {"prismarine", 64, Rarity::COMMON},
		ItemStack {"prismarine_bricks", 64, Rarity::COMMON},
		ItemStack {"dark_prismarine", 64, Rarity::COMMON},
		ItemStack {"prismarine_stairs", 64, Rarity::COMMON},
		ItemStack {"prismarine_brick_stairs", 64, Rarity::COMMON},
		ItemStack {"dark_prismarine_stairs", 64, Rarity::COMMON},
		ItemStack {"sea_lantern", 64, Rarity::COMMON},
		ItemStack {"red_sandstone", 64, Rarity::COMMON},
		ItemStack {"chiseled_red_sandstone", 64, Rarity::COMMON},
		ItemStack {"cut_red_sandstone", 64, Rarity::COMMON},
		ItemStack {"red_sandstone_stairs", 64, Rarity::COMMON},
		ItemStack {"repeating_command_block", 64, Rarity::EPIC},
		ItemStack {"chain_command_block", 64, Rarity::EPIC},
		ItemStack {"magma_block", 64, Rarity::COMMON},
		ItemStack {"nether_wart_block", 64, Rarity::COMMON},
		ItemStack {"warped_wart_block", 64, Rarity::COMMON},
		ItemStack {"red_nether_bricks", 64, Rarity::COMMON},
		ItemStack {"bone_block", 64, Rarity::COMMON},
		ItemStack {"structure_void", 64, Rarity::EPIC},
		ItemStack {"shulker_box", 1, Rarity::COMMON},
		ItemStack {"white_shulker_box", 1, Rarity::COMMON},
		ItemStack {"orange_shulker_box", 1, Rarity::COMMON},
		ItemStack {"magenta_shulker_box", 1, Rarity::COMMON},
		ItemStack {"light_blue_shulker_box", 1, Rarity::COMMON},
		ItemStack {"yellow_shulker_box", 1, Rarity::COMMON},
		ItemStack {"lime_shulker_box", 1, Rarity::COMMON},
		ItemStack {"pink_shulker_box", 1, Rarity::COMMON},
		ItemStack {"gray_shulker_box", 1, Rarity::COMMON},
		ItemStack {"light_gray_shulker_box", 1, Rarity::COMMON},
		ItemStack {"cyan_shulker_box", 1, Rarity::COMMON},
		ItemStack {"purple_shulker_box", 1, Rarity::COMMON},
		ItemStack {"blue_shulker_box", 1, Rarity::COMMON},
		ItemStack {"brown_shulker_box", 1, Rarity::COMMON},
		ItemStack {"green_shulker_box", 1, Rarity::COMMON},
		ItemStack {"red_shulker_box", 1, Rarity::COMMON},
		ItemStack {"black_shulker_box", 1, Rarity::COMMON},
		ItemStack {"white_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"orange_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"magenta_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"light_blue_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"yellow_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"lime_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"pink_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"gray_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"light_gray_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"cyan_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"purple_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"blue_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"brown_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"green_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"red_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"black_glazed_terracotta", 64, Rarity::COMMON},
		ItemStack {"white_concrete", 64, Rarity::COMMON},
		ItemStack {"orange_concrete", 64, Rarity::COMMON},
		ItemStack {"magenta_concrete", 64, Rarity::COMMON},
		ItemStack {"light_blue_concrete", 64, Rarity::COMMON},
		ItemStack {"yellow_concrete", 64, Rarity::COMMON},
		ItemStack {"lime_concrete", 64, Rarity::COMMON},
		ItemStack {"pink_concrete", 64, Rarity::COMMON},
		ItemStack {"gray_concrete", 64, Rarity::COMMON},
		ItemStack {"light_gray_concrete", 64, Rarity::COMMON},
		ItemStack {"cyan_concrete", 64, Rarity::COMMON},
		ItemStack {"purple_concrete", 64, Rarity::COMMON},
		ItemStack {"blue_concrete", 64, Rarity::COMMON},
		ItemStack {"brown_concrete", 64, Rarity::COMMON},
		ItemStack {"green_concrete", 64, Rarity::COMMON},
		ItemStack {"red_concrete", 64, Rarity::COMMON},
		ItemStack {"black_concrete", 64, Rarity::COMMON},
		ItemStack {"white_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"orange_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"magenta_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"light_blue_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"yellow_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"lime_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"pink_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"gray_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"light_gray_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"cyan_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"purple_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"blue_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"brown_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"green_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"red_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"black_concrete_powder", 64, Rarity::COMMON},
		ItemStack {"turtle_egg", 64, Rarity::COMMON},
		ItemStack {"sniffer_egg", 64, Rarity::UNCOMMON},
		ItemStack {"dead_tube_coral_block", 64, Rarity::COMMON},
		ItemStack {"dead_brain_coral_block", 64, Rarity::COMMON},
		ItemStack {"dead_bubble_coral_block", 64, Rarity::COMMON},
		ItemStack {"dead_fire_coral_block", 64, Rarity::COMMON},
		ItemStack {"dead_horn_coral_block", 64, Rarity::COMMON},
		ItemStack {"tube_coral_block", 64, Rarity::COMMON},
		ItemStack {"brain_coral_block", 64, Rarity::COMMON},
		ItemStack {"bubble_coral_block", 64, Rarity::COMMON},
		ItemStack {"fire_coral_block", 64, Rarity::COMMON},
		ItemStack {"horn_coral_block", 64, Rarity::COMMON},
		ItemStack {"tube_coral", 64, Rarity::COMMON},
		ItemStack {"brain_coral", 64, Rarity::COMMON},
		ItemStack {"bubble_coral", 64, Rarity::COMMON},
		ItemStack {"fire_coral", 64, Rarity::COMMON},
		ItemStack {"horn_coral", 64, Rarity::COMMON},
		ItemStack {"dead_brain_coral", 64, Rarity::COMMON},
		ItemStack {"dead_bubble_coral", 64, Rarity::COMMON},
		ItemStack {"dead_fire_coral", 64, Rarity::COMMON},
		ItemStack {"dead_horn_coral", 64, Rarity::COMMON},
		ItemStack {"dead_tube_coral", 64, Rarity::COMMON},
		ItemStack {"tube_coral_fan", 64, Rarity::COMMON},
		ItemStack {"brain_coral_fan", 64, Rarity::COMMON},
		ItemStack {"bubble_coral_fan", 64, Rarity::COMMON},
		ItemStack {"fire_coral_fan", 64, Rarity::COMMON},
		ItemStack {"horn_coral_fan", 64, Rarity::COMMON},
		ItemStack {"dead_tube_coral_fan", 64, Rarity::COMMON},
		ItemStack {"dead_brain_coral_fan", 64, Rarity::COMMON},
		ItemStack {"dead_bubble_coral_fan", 64, Rarity::COMMON},
		ItemStack {"dead_fire_coral_fan", 64, Rarity::COMMON},
		ItemStack {"dead_horn_coral_fan", 64, Rarity::COMMON},
		ItemStack {"blue_ice", 64, Rarity::COMMON},
		ItemStack {"conduit", 64, Rarity::UNCOMMON},
		ItemStack {"polished_granite_stairs", 64, Rarity::COMMON},
		ItemStack {"smooth_red_sandstone_stairs", 64, Rarity::COMMON},
		ItemStack {"mossy_stone_brick_stairs", 64, Rarity::COMMON},
		ItemStack {"polished_diorite_stairs", 64, Rarity::COMMON},
		ItemStack {"mossy_cobblestone_stairs", 64, Rarity::COMMON},
		ItemStack {"end_stone_brick_stairs", 64, Rarity::COMMON},
		ItemStack {"stone_stairs", 64, Rarity::COMMON},
		ItemStack {"smooth_sandstone_stairs", 64, Rarity::COMMON},
		ItemStack {"smooth_quartz_stairs", 64, Rarity::COMMON},
		ItemStack {"granite_stairs", 64, Rarity::COMMON},
		ItemStack {"andesite_stairs", 64, Rarity::COMMON},
		ItemStack {"red_nether_brick_stairs", 64, Rarity::COMMON},
		ItemStack {"polished_andesite_stairs", 64, Rarity::COMMON},
		ItemStack {"diorite_stairs", 64, Rarity::COMMON},
		ItemStack {"cobbled_deepslate_stairs", 64, Rarity::COMMON},
		ItemStack {"polished_deepslate_stairs", 64, Rarity::COMMON},
		ItemStack {"deepslate_brick_stairs", 64, Rarity::COMMON},
		ItemStack {"deepslate_tile_stairs", 64, Rarity::COMMON},
		ItemStack {"polished_granite_slab", 64, Rarity::COMMON},
		ItemStack {"smooth_red_sandstone_slab", 64, Rarity::COMMON},
		ItemStack {"mossy_stone_brick_slab", 64, Rarity::COMMON},
		ItemStack {"polished_diorite_slab", 64, Rarity::COMMON},
		ItemStack {"mossy_cobblestone_slab", 64, Rarity::COMMON},
		ItemStack {"end_stone_brick_slab", 64, Rarity::COMMON},
		ItemStack {"smooth_sandstone_slab", 64, Rarity::COMMON},
		ItemStack {"smooth_quartz_slab", 64, Rarity::COMMON},
		ItemStack {"granite_slab", 64, Rarity::COMMON},
		ItemStack {"andesite_slab", 64, Rarity::COMMON},
		ItemStack {"red_nether_brick_slab", 64, Rarity::COMMON},
		ItemStack {"polished_andesite_slab", 64, Rarity::COMMON},
		ItemStack {"diorite_slab", 64, Rarity::COMMON},
		ItemStack {"cobbled_deepslate_slab", 64, Rarity::COMMON},
		ItemStack {"polished_deepslate_slab", 64, Rarity::COMMON},
		ItemStack {"deepslate_brick_slab", 64, Rarity::COMMON},
		ItemStack {"deepslate_tile_slab", 64, Rarity::COMMON},
		ItemStack {"scaffolding", 64, Rarity::COMMON},
		ItemStack {"redstone", 64, Rarity::COMMON},
		ItemStack {"redstone_torch", 64, Rarity::COMMON},
		ItemStack {"redstone_block", 64, Rarity::COMMON},
		ItemStack {"repeater", 64, Rarity::COMMON},
		ItemStack {"comparator", 64, Rarity::COMMON},
		ItemStack {"piston", 64, Rarity::COMMON},
		ItemStack {"sticky_piston", 64, Rarity::COMMON},
		ItemStack {"slime_block", 64, Rarity::COMMON},
		ItemStack {"honey_block", 64, Rarity::COMMON},
		ItemStack {"observer", 64, Rarity::COMMON},
		ItemStack {"hopper", 64, Rarity::COMMON},
		ItemStack {"dispenser", 64, Rarity::COMMON},
		ItemStack {"dropper", 64, Rarity::COMMON},
		ItemStack {"lectern", 64, Rarity::COMMON},
		ItemStack {"target", 64, Rarity::COMMON},
		ItemStack {"lever", 64, Rarity::COMMON},
		ItemStack {"lightning_rod", 64, Rarity::COMMON},
		ItemStack {"daylight_detector", 64, Rarity::COMMON},
		ItemStack {"sculk_sensor", 64, Rarity::COMMON},
		ItemStack {"calibrated_sculk_sensor", 64, Rarity::COMMON},
		ItemStack {"tripwire_hook", 64, Rarity::COMMON},
		ItemStack {"trapped_chest", 64, Rarity::COMMON},
		ItemStack {"tnt", 64, Rarity::COMMON},
		ItemStack {"redstone_lamp", 64, Rarity::COMMON},
		ItemStack {"note_block", 64, Rarity::COMMON},
		ItemStack {"stone_button", 64, Rarity::COMMON},
		ItemStack {"polished_blackstone_button", 64, Rarity::COMMON},
		ItemStack {"oak_button", 64, Rarity::COMMON},
		ItemStack {"spruce_button", 64, Rarity::COMMON},
		ItemStack {"birch_button", 64, Rarity::COMMON},
		ItemStack {"jungle_button", 64, Rarity::COMMON},
		ItemStack {"acacia_button", 64, Rarity::COMMON},
		ItemStack {"cherry_button", 64, Rarity::COMMON},
		ItemStack {"dark_oak_button", 64, Rarity::COMMON},
		ItemStack {"pale_oak_button", 64, Rarity::COMMON},
		ItemStack {"mangrove_button", 64, Rarity::COMMON},
		ItemStack {"bamboo_button", 64, Rarity::COMMON},
		ItemStack {"crimson_button", 64, Rarity::COMMON},
		ItemStack {"warped_button", 64, Rarity::COMMON},
		ItemStack {"stone_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"polished_blackstone_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"light_weighted_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"heavy_weighted_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"oak_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"spruce_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"birch_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"jungle_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"acacia_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"cherry_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"dark_oak_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"pale_oak_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"mangrove_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"bamboo_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"crimson_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"warped_pressure_plate", 64, Rarity::COMMON},
		ItemStack {"iron_door", 64, Rarity::COMMON},
		ItemStack {"oak_door", 64, Rarity::COMMON},
		ItemStack {"spruce_door", 64, Rarity::COMMON},
		ItemStack {"birch_door", 64, Rarity::COMMON},
		ItemStack {"jungle_door", 64, Rarity::COMMON},
		ItemStack {"acacia_door", 64, Rarity::COMMON},
		ItemStack {"cherry_door", 64, Rarity::COMMON},
		ItemStack {"dark_oak_door", 64, Rarity::COMMON},
		ItemStack {"pale_oak_door", 64, Rarity::COMMON},
		ItemStack {"mangrove_door", 64, Rarity::COMMON},
		ItemStack {"bamboo_door", 64, Rarity::COMMON},
		ItemStack {"crimson_door", 64, Rarity::COMMON},
		ItemStack {"warped_door", 64, Rarity::COMMON},
		ItemStack {"copper_door", 64, Rarity::COMMON},
		ItemStack {"exposed_copper_door", 64, Rarity::COMMON},
		ItemStack {"weathered_copper_door", 64, Rarity::COMMON},
		ItemStack {"oxidized_copper_door", 64, Rarity::COMMON},
		ItemStack {"waxed_copper_door", 64, Rarity::COMMON},
		ItemStack {"waxed_exposed_copper_door", 64, Rarity::COMMON},
		ItemStack {"waxed_weathered_copper_door", 64, Rarity::COMMON},
		ItemStack {"waxed_oxidized_copper_door", 64, Rarity::COMMON},
		ItemStack {"iron_trapdoor", 64, Rarity::COMMON},
		ItemStack {"oak_trapdoor", 64, Rarity::COMMON},
		ItemStack {"spruce_trapdoor", 64, Rarity::COMMON},
		ItemStack {"birch_trapdoor", 64, Rarity::COMMON},
		ItemStack {"jungle_trapdoor", 64, Rarity::COMMON},
		ItemStack {"acacia_trapdoor", 64, Rarity::COMMON},
		ItemStack {"cherry_trapdoor", 64, Rarity::COMMON},
		ItemStack {"dark_oak_trapdoor", 64, Rarity::COMMON},
		ItemStack {"pale_oak_trapdoor", 64, Rarity::COMMON},
		ItemStack {"mangrove_trapdoor", 64, Rarity::COMMON},
		ItemStack {"bamboo_trapdoor", 64, Rarity::COMMON},
		ItemStack {"crimson_trapdoor", 64, Rarity::COMMON},
		ItemStack {"warped_trapdoor", 64, Rarity::COMMON},
		ItemStack {"copper_trapdoor", 64, Rarity::COMMON},
		ItemStack {"exposed_copper_trapdoor", 64, Rarity::COMMON},
		ItemStack {"weathered_copper_trapdoor", 64, Rarity::COMMON},
		ItemStack {"oxidized_copper_trapdoor", 64, Rarity::COMMON},
		ItemStack {"waxed_copper_trapdoor", 64, Rarity::COMMON},
		ItemStack {"waxed_exposed_copper_trapdoor", 64, Rarity::COMMON},
		ItemStack {"waxed_weathered_copper_trapdoor", 64, Rarity::COMMON},
		ItemStack {"waxed_oxidized_copper_trapdoor", 64, Rarity::COMMON},
		ItemStack {"oak_fence_gate", 64, Rarity::COMMON},
		ItemStack {"spruce_fence_gate", 64, Rarity::COMMON},
		ItemStack {"birch_fence_gate", 64, Rarity::COMMON},
		ItemStack {"jungle_fence_gate", 64, Rarity::COMMON},
		ItemStack {"acacia_fence_gate", 64, Rarity::COMMON},
		ItemStack {"cherry_fence_gate", 64, Rarity::COMMON},
		ItemStack {"dark_oak_fence_gate", 64, Rarity::COMMON},
		ItemStack {"pale_oak_fence_gate", 64, Rarity::COMMON},
		ItemStack {"mangrove_fence_gate", 64, Rarity::COMMON},
		ItemStack {"bamboo_fence_gate", 64, Rarity::COMMON},
		ItemStack {"crimson_fence_gate", 64, Rarity::COMMON},
		ItemStack {"warped_fence_gate", 64, Rarity::COMMON},
		ItemStack {"powered_rail", 64, Rarity::COMMON},
		ItemStack {"detector_rail", 64, Rarity::COMMON},
		ItemStack {"rail", 64, Rarity::COMMON},
		ItemStack {"activator_rail", 64, Rarity::COMMON},
		ItemStack {"saddle", 1, Rarity::COMMON},
		ItemStack {"minecart", 1, Rarity::COMMON},
		ItemStack {"chest_minecart", 1, Rarity::COMMON},
		ItemStack {"furnace_minecart", 1, Rarity::COMMON},
		ItemStack {"tnt_minecart", 1, Rarity::COMMON},
		ItemStack {"hopper_minecart", 1, Rarity::COMMON},
		ItemStack {"carrot_on_a_stick", 1, Rarity::COMMON},
		ItemStack {"warped_fungus_on_a_stick", 1, Rarity::COMMON},
		ItemStack {"phantom_membrane", 64, Rarity::COMMON},
		ItemStack {"elytra", 1, Rarity::EPIC},
		ItemStack {"oak_boat", 1, Rarity::COMMON},
		ItemStack {"oak_chest_boat", 1, Rarity::COMMON},
		ItemStack {"spruce_boat", 1, Rarity::COMMON},
		ItemStack {"spruce_chest_boat", 1, Rarity::COMMON},
		ItemStack {"birch_boat", 1, Rarity::COMMON},
		ItemStack {"birch_chest_boat", 1, Rarity::COMMON},
		ItemStack {"jungle_boat", 1, Rarity::COMMON},
		ItemStack {"jungle_chest_boat", 1, Rarity::COMMON},
		ItemStack {"acacia_boat", 1, Rarity::COMMON},
		ItemStack {"acacia_chest_boat", 1, Rarity::COMMON},
		ItemStack {"cherry_boat", 1, Rarity::COMMON},
		ItemStack {"cherry_chest_boat", 1, Rarity::COMMON},
		ItemStack {"dark_oak_boat", 1, Rarity::COMMON},
		ItemStack {"dark_oak_chest_boat", 1, Rarity::COMMON},
		ItemStack {"pale_oak_boat", 1, Rarity::COMMON},
		ItemStack {"pale_oak_chest_boat", 1, Rarity::COMMON},
		ItemStack {"mangrove_boat", 1, Rarity::COMMON},
		ItemStack {"mangrove_chest_boat", 1, Rarity::COMMON},
		ItemStack {"bamboo_raft", 1, Rarity::COMMON},
		ItemStack {"bamboo_chest_raft", 1, Rarity::COMMON},
		ItemStack {"structure_block", 64, Rarity::EPIC},
		ItemStack {"jigsaw", 64, Rarity::EPIC},
		ItemStack {"test_block", 64, Rarity::EPIC},
		ItemStack {"test_instance_block", 64, Rarity::EPIC},
		ItemStack {"turtle_helmet", 1, Rarity::COMMON},
		ItemStack {"turtle_scute", 64, Rarity::COMMON},
		ItemStack {"armadillo_scute", 64, Rarity::COMMON},
		ItemStack {"wolf_armor", 1, Rarity::COMMON},
		ItemStack {"flint_and_steel", 1, Rarity::COMMON},
		ItemStack {"bowl", 64, Rarity::COMMON},
		ItemStack {"apple", 64, Rarity::COMMON},
		ItemStack {"bow", 1, Rarity::COMMON},
		ItemStack {"arrow", 64, Rarity::COMMON},
		ItemStack {"coal", 64, Rarity::COMMON},
		ItemStack {"charcoal", 64, Rarity::COMMON},
		ItemStack {"diamond", 64, Rarity::COMMON},
		ItemStack {"emerald", 64, Rarity::COMMON},
		ItemStack {"lapis_lazuli", 64, Rarity::COMMON},
		ItemStack {"quartz", 64, Rarity::COMMON},
		ItemStack {"amethyst_shard", 64, Rarity::COMMON},
		ItemStack {"raw_iron", 64, Rarity::COMMON},
		ItemStack {"iron_ingot", 64, Rarity::COMMON},
		ItemStack {"raw_copper", 64, Rarity::COMMON},
		ItemStack {"copper_ingot", 64, Rarity::COMMON},
		ItemStack {"raw_gold", 64, Rarity::COMMON},
		ItemStack {"gold_ingot", 64, Rarity::COMMON},
		ItemStack {"netherite_ingot", 64, Rarity::COMMON},
		ItemStack {"netherite_scrap", 64, Rarity::COMMON},
		ItemStack {"wooden_sword", 1, Rarity::COMMON},
		ItemStack {"wooden_shovel", 1, Rarity::COMMON},
		ItemStack {"wooden_pickaxe", 1, Rarity::COMMON},
		ItemStack {"wooden_axe", 1, Rarity::COMMON},
		ItemStack {"wooden_hoe", 1, Rarity::COMMON},
		ItemStack {"stone_sword", 1, Rarity::COMMON},
		ItemStack {"stone_shovel", 1, Rarity::COMMON},
		ItemStack {"stone_pickaxe", 1, Rarity::COMMON},
		ItemStack {"stone_axe", 1, Rarity::COMMON},
		ItemStack {"stone_hoe", 1, Rarity::COMMON},
		ItemStack {"golden_sword", 1, Rarity::COMMON},
		ItemStack {"golden_shovel", 1, Rarity::COMMON},
		ItemStack {"golden_pickaxe", 1, Rarity::COMMON},
		ItemStack {"golden_axe", 1, Rarity::COMMON},
		ItemStack {"golden_hoe", 1, Rarity::COMMON},
		ItemStack {"iron_sword", 1, Rarity::COMMON},
		ItemStack {"iron_shovel", 1, Rarity::COMMON},
		ItemStack {"iron_pickaxe", 1, Rarity::COMMON},
		ItemStack {"iron_axe", 1, Rarity::COMMON},
		ItemStack {"iron_hoe", 1, Rarity::COMMON},
		ItemStack {"diamond_sword", 1, Rarity::COMMON},
		ItemStack {"diamond_shovel", 1, Rarity::COMMON},
		ItemStack {"diamond_pickaxe", 1, Rarity::COMMON},
		ItemStack {"diamond_axe", 1, Rarity::COMMON},
		ItemStack {"diamond_hoe", 1, Rarity::COMMON},
		ItemStack {"netherite_sword", 1, Rarity::COMMON},
		ItemStack {"netherite_shovel", 1, Rarity::COMMON},
		ItemStack {"netherite_pickaxe", 1, Rarity::COMMON},
		ItemStack {"netherite_axe", 1, Rarity::COMMON},
		ItemStack {"netherite_hoe", 1, Rarity::COMMON},
		ItemStack {"stick", 64, Rarity::COMMON},
		ItemStack {"mushroom_stew", 1, Rarity::COMMON},
		ItemStack {"string", 64, Rarity::COMMON},
		ItemStack {"feather", 64, Rarity::COMMON},
		ItemStack {"gunpowder", 64, Rarity::COMMON},
		ItemStack {"wheat_seeds", 64, Rarity::COMMON},
		ItemStack {"wheat", 64, Rarity::COMMON},
		ItemStack {"bread", 64, Rarity::COMMON},
		ItemStack {"leather_helmet", 1, Rarity::COMMON},
		ItemStack {"leather_chestplate", 1, Rarity::COMMON},
		ItemStack {"leather_leggings", 1, Rarity::COMMON},
		ItemStack {"leather_boots", 1, Rarity::COMMON},
		ItemStack {"chainmail_helmet", 1, Rarity::UNCOMMON},
		ItemStack {"chainmail_chestplate", 1, Rarity::UNCOMMON},
		ItemStack {"chainmail_leggings", 1, Rarity::UNCOMMON},
		ItemStack {"chainmail_boots", 1, Rarity::UNCOMMON},
		ItemStack {"iron_helmet", 1, Rarity::COMMON},
		ItemStack {"iron_chestplate", 1, Rarity::COMMON},
		ItemStack {"iron_leggings", 1, Rarity::COMMON},
		ItemStack {"iron_boots", 1, Rarity::COMMON},
		ItemStack {"diamond_helmet", 1, Rarity::COMMON},
		ItemStack {"diamond_chestplate", 1, Rarity::COMMON},
		ItemStack {"diamond_leggings", 1, Rarity::COMMON},
		ItemStack {"diamond_boots", 1, Rarity::COMMON},
		ItemStack {"golden_helmet", 1, Rarity::COMMON},
		ItemStack {"golden_chestplate", 1, Rarity::COMMON},
		ItemStack {"golden_leggings", 1, Rarity::COMMON},
		ItemStack {"golden_boots", 1, Rarity::COMMON},
		ItemStack {"netherite_helmet", 1, Rarity::COMMON},
		ItemStack {"netherite_chestplate", 1, Rarity::COMMON},
		ItemStack {"netherite_leggings", 1, Rarity::COMMON},
		ItemStack {"netherite_boots", 1, Rarity::COMMON},
		ItemStack {"flint", 64, Rarity::COMMON},
		ItemStack {"porkchop", 64, Rarity::COMMON},
		ItemStack {"cooked_porkchop", 64, Rarity::COMMON},
		ItemStack {"painting", 64, Rarity::COMMON},
		ItemStack {"golden_apple", 64, Rarity::COMMON},
		ItemStack {"enchanted_golden_apple", 64, Rarity::RARE},
		ItemStack {"oak_sign", 16, Rarity::COMMON},
		ItemStack {"spruce_sign", 16, Rarity::COMMON},
		ItemStack {"birch_sign", 16, Rarity::COMMON},
		ItemStack {"jungle_sign", 16, Rarity::COMMON},
		ItemStack {"acacia_sign", 16, Rarity::COMMON},
		ItemStack {"cherry_sign", 16, Rarity::COMMON},
		ItemStack {"dark_oak_sign", 16, Rarity::COMMON},
		ItemStack {"pale_oak_sign", 16, Rarity::COMMON},
		ItemStack {"mangrove_sign", 16, Rarity::COMMON},
		ItemStack {"bamboo_sign", 16, Rarity::COMMON},
		ItemStack {"crimson_sign", 16, Rarity::COMMON},
		ItemStack {"warped_sign", 16, Rarity::COMMON},
		ItemStack {"oak_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"spruce_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"birch_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"jungle_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"acacia_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"cherry_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"dark_oak_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"pale_oak_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"mangrove_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"bamboo_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"crimson_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"warped_hanging_sign", 16, Rarity::COMMON},
		ItemStack {"bucket", 16, Rarity::COMMON},
		ItemStack {"water_bucket", 1, Rarity::COMMON},
		ItemStack {"lava_bucket", 1, Rarity::COMMON},
		ItemStack {"powder_snow_bucket", 1, Rarity::COMMON},
		ItemStack {"snowball", 16, Rarity::COMMON},
		ItemStack {"leather", 64, Rarity::COMMON},
		ItemStack {"milk_bucket", 1, Rarity::COMMON},
		ItemStack {"pufferfish_bucket", 1, Rarity::COMMON},
		ItemStack {"salmon_bucket", 1, Rarity::COMMON},
		ItemStack {"cod_bucket", 1, Rarity::COMMON},
		ItemStack {"tropical_fish_bucket", 1, Rarity::COMMON},
		ItemStack {"axolotl_bucket", 1, Rarity::COMMON},
		ItemStack {"tadpole_bucket", 1, Rarity::COMMON},
		ItemStack {"brick", 64, Rarity::COMMON},
		ItemStack {"clay_ball", 64, Rarity::COMMON},
		ItemStack {"dried_kelp_block", 64, Rarity::COMMON},
		ItemStack {"paper", 64, Rarity::COMMON},
		ItemStack {"book", 64, Rarity::COMMON},
		ItemStack {"slime_ball", 64, Rarity::COMMON},
		ItemStack {"egg", 16, Rarity::COMMON},
		ItemStack {"blue_egg", 16, Rarity::COMMON},
		ItemStack {"brown_egg", 16, Rarity::COMMON},
		ItemStack {"compass", 64, Rarity::COMMON},
		ItemStack {"recovery_compass", 64, Rarity::UNCOMMON},
		ItemStack {"bundle", 1, Rarity::COMMON},
		ItemStack {"white_bundle", 1, Rarity::COMMON},
		ItemStack {"orange_bundle", 1, Rarity::COMMON},
		ItemStack {"magenta_bundle", 1, Rarity::COMMON},
		ItemStack {"light_blue_bundle", 1, Rarity::COMMON},
		ItemStack {"yellow_bundle", 1, Rarity::COMMON},
		ItemStack {"lime_bundle", 1, Rarity::COMMON},
		ItemStack {"pink_bundle", 1, Rarity::COMMON},
		ItemStack {"gray_bundle", 1, Rarity::COMMON},
		ItemStack {"light_gray_bundle", 1, Rarity::COMMON},
		ItemStack {"cyan_bundle", 1, Rarity::COMMON},
		ItemStack {"purple_bundle", 1, Rarity::COMMON},
		ItemStack {"blue_bundle", 1, Rarity::COMMON},
		ItemStack {"brown_bundle", 1, Rarity::COMMON},
		ItemStack {"green_bundle", 1, Rarity::COMMON},
		ItemStack {"red_bundle", 1, Rarity::COMMON},
		ItemStack {"black_bundle", 1, Rarity::COMMON},
		ItemStack {"fishing_rod", 1, Rarity::COMMON},
		ItemStack {"clock", 64, Rarity::COMMON},
		ItemStack {"spyglass", 1, Rarity::COMMON},
		ItemStack {"glowstone_dust", 64, Rarity::COMMON},
		ItemStack {"cod", 64, Rarity::COMMON},
		ItemStack {"salmon", 64, Rarity::COMMON},
		ItemStack {"tropical_fish", 64, Rarity::COMMON},
		ItemStack {"pufferfish", 64, Rarity::COMMON},
		ItemStack {"cooked_cod", 64, Rarity::COMMON},
		ItemStack {"cooked_salmon", 64, Rarity::COMMON},
		ItemStack {"ink_sac", 64, Rarity::COMMON},
		ItemStack {"glow_ink_sac", 64, Rarity::COMMON},
		ItemStack {"cocoa_beans", 64, Rarity::COMMON},
		ItemStack {"white_dye", 64, Rarity::COMMON},
		ItemStack {"orange_dye", 64, Rarity::COMMON},
		ItemStack {"magenta_dye", 64, Rarity::COMMON},
		ItemStack {"light_blue_dye", 64, Rarity::COMMON},
		ItemStack {"yellow_dye", 64, Rarity::COMMON},
		ItemStack {"lime_dye", 64, Rarity::COMMON},
		ItemStack {"pink_dye", 64, Rarity::COMMON},
		ItemStack {"gray_dye", 64, Rarity::COMMON},
		ItemStack {"light_gray_dye", 64, Rarity::COMMON},
		ItemStack {"cyan_dye", 64, Rarity::COMMON},
		ItemStack {"purple_dye", 64, Rarity::COMMON},
		ItemStack {"blue_dye", 64, Rarity::COMMON},
		ItemStack {"brown_dye", 64, Rarity::COMMON},
		ItemStack {"green_dye", 64, Rarity::COMMON},
		ItemStack {"red_dye", 64, Rarity::COMMON},
		ItemStack {"black_dye", 64, Rarity::COMMON},
		ItemStack {"bone_meal", 64, Rarity::COMMON},
		ItemStack {"bone", 64, Rarity::COMMON},
		ItemStack {"sugar", 64, Rarity::COMMON},
		ItemStack {"cake", 1, Rarity::COMMON},
		ItemStack {"white_bed", 1, Rarity::COMMON},
		ItemStack {"orange_bed", 1, Rarity::COMMON},
		ItemStack {"magenta_bed", 1, Rarity::COMMON},
		ItemStack {"light_blue_bed", 1, Rarity::COMMON},
		ItemStack {"yellow_bed", 1, Rarity::COMMON},
		ItemStack {"lime_bed", 1, Rarity::COMMON},
		ItemStack {"pink_bed", 1, Rarity::COMMON},
		ItemStack {"gray_bed", 1, Rarity::COMMON},
		ItemStack {"light_gray_bed", 1, Rarity::COMMON},
		ItemStack {"cyan_bed", 1, Rarity::COMMON},
		ItemStack {"purple_bed", 1, Rarity::COMMON},
		ItemStack {"blue_bed", 1, Rarity::COMMON},
		ItemStack {"brown_bed", 1, Rarity::COMMON},
		ItemStack {"green_bed", 1, Rarity::COMMON},
		ItemStack {"red_bed", 1, Rarity::COMMON},
		ItemStack {"black_bed", 1, Rarity::COMMON},
		ItemStack {"cookie", 64, Rarity::COMMON},
		ItemStack {"crafter", 64, Rarity::COMMON},
		ItemStack {"filled_map", 64, Rarity::COMMON},
		ItemStack {"shears", 1, Rarity::COMMON},
		ItemStack {"melon_slice", 64, Rarity::COMMON},
		ItemStack {"dried_kelp", 64, Rarity::COMMON},
		ItemStack {"pumpkin_seeds", 64, Rarity::COMMON},
		ItemStack {"melon_seeds", 64, Rarity::COMMON},
		ItemStack {"beef", 64, Rarity::COMMON},
		ItemStack {"cooked_beef", 64, Rarity::COMMON},
		ItemStack {"chicken", 64, Rarity::COMMON},
		ItemStack {"cooked_chicken", 64, Rarity::COMMON},
		ItemStack {"rotten_flesh", 64, Rarity::COMMON},
		ItemStack {"ender_pearl", 16, Rarity::COMMON},
		ItemStack {"blaze_rod", 64, Rarity::COMMON},
		ItemStack {"ghast_tear", 64, Rarity::COMMON},
		ItemStack {"gold_nugget", 64, Rarity::COMMON},
		ItemStack {"nether_wart", 64, Rarity::COMMON},
		ItemStack {"glass_bottle", 64, Rarity::COMMON},
		ItemStack {"potion", 1, Rarity::COMMON},
		ItemStack {"spider_eye", 64, Rarity::COMMON},
		ItemStack {"fermented_spider_eye", 64, Rarity::COMMON},
		ItemStack {"blaze_powder", 64, Rarity::COMMON},
		ItemStack {"magma_cream", 64, Rarity::COMMON},
		ItemStack {"brewing_stand", 64, Rarity::COMMON},
		ItemStack {"cauldron", 64, Rarity::COMMON},
		ItemStack {"ender_eye", 64, Rarity::COMMON},
		ItemStack {"glistering_melon_slice", 64, Rarity::COMMON},
		ItemStack {"armadillo_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"allay_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"axolotl_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"bat_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"bee_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"blaze_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"bogged_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"breeze_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"cat_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"camel_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"cave_spider_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"chicken_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"cod_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"cow_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"creeper_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"dolphin_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"donkey_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"drowned_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"elder_guardian_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"ender_dragon_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"enderman_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"endermite_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"evoker_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"fox_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"frog_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"ghast_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"glow_squid_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"goat_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"guardian_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"hoglin_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"horse_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"husk_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"iron_golem_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"llama_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"magma_cube_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"mooshroom_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"mule_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"ocelot_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"panda_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"parrot_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"phantom_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"pig_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"piglin_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"piglin_brute_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"pillager_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"polar_bear_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"pufferfish_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"rabbit_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"ravager_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"salmon_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"sheep_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"shulker_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"silverfish_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"skeleton_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"skeleton_horse_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"slime_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"sniffer_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"snow_golem_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"spider_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"squid_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"stray_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"strider_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"tadpole_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"trader_llama_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"tropical_fish_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"turtle_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"vex_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"villager_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"vindicator_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"wandering_trader_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"warden_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"witch_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"wither_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"wither_skeleton_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"wolf_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"zoglin_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"creaking_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"zombie_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"zombie_horse_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"zombie_villager_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"zombified_piglin_spawn_egg", 64, Rarity::COMMON},
		ItemStack {"experience_bottle", 64, Rarity::UNCOMMON},
		ItemStack {"fire_charge", 64, Rarity::COMMON},
		ItemStack {"wind_charge", 64, Rarity::COMMON},
		ItemStack {"writable_book", 1, Rarity::COMMON},
		ItemStack {"written_book", 16, Rarity::COMMON},
		ItemStack {"breeze_rod", 64, Rarity::COMMON},
		ItemStack {"mace", 1, Rarity::EPIC},
		ItemStack {"item_frame", 64, Rarity::COMMON},
		ItemStack {"glow_item_frame", 64, Rarity::COMMON},
		ItemStack {"flower_pot", 64, Rarity::COMMON},
		ItemStack {"carrot", 64, Rarity::COMMON},
		ItemStack {"potato", 64, Rarity::COMMON},
		ItemStack {"baked_potato", 64, Rarity::COMMON},
		ItemStack {"poisonous_potato", 64, Rarity::COMMON},
		ItemStack {"map", 64, Rarity::COMMON},
		ItemStack {"golden_carrot", 64, Rarity::COMMON},
		ItemStack {"skeleton_skull", 64, Rarity::UNCOMMON},
		ItemStack {"wither_skeleton_skull", 64, Rarity::RARE},
		ItemStack {"player_head", 64, Rarity::UNCOMMON},
		ItemStack {"zombie_head", 64, Rarity::UNCOMMON},
		ItemStack {"creeper_head", 64, Rarity::UNCOMMON},
		ItemStack {"dragon_head", 64, Rarity::EPIC},
		ItemStack {"piglin_head", 64, Rarity::UNCOMMON},
		ItemStack {"nether_star", 64, Rarity::RARE},
		ItemStack {"pumpkin_pie", 64, Rarity::COMMON},
		ItemStack {"firework_rocket", 64, Rarity::COMMON},
		ItemStack {"firework_star", 64, Rarity::COMMON},
		ItemStack {"enchanted_book", 1, Rarity::UNCOMMON},
		ItemStack {"nether_brick", 64, Rarity::COMMON},
		ItemStack {"resin_brick", 64, Rarity::COMMON},
		ItemStack {"prismarine_shard", 64, Rarity::COMMON},
		ItemStack {"prismarine_crystals", 64, Rarity::COMMON},
		ItemStack {"rabbit", 64, Rarity::COMMON},
		ItemStack {"cooked_rabbit", 64, Rarity::COMMON},
		ItemStack {"rabbit_stew", 1, Rarity::COMMON},
		ItemStack {"rabbit_foot", 64, Rarity::COMMON},
		ItemStack {"rabbit_hide", 64, Rarity::COMMON},
		ItemStack {"armor_stand", 16, Rarity::COMMON},
		ItemStack {"iron_horse_armor", 1, Rarity::COMMON},
		ItemStack {"golden_horse_armor", 1, Rarity::COMMON},
		ItemStack {"diamond_horse_armor", 1, Rarity::COMMON},
		ItemStack {"leather_horse_armor", 1, Rarity::COMMON},
		ItemStack {"lead", 64, Rarity::COMMON},
		ItemStack {"name_tag", 64, Rarity::COMMON},
		ItemStack {"command_block_minecart", 1, Rarity::EPIC},
		ItemStack {"mutton", 64, Rarity::COMMON},
		ItemStack {"cooked_mutton", 64, Rarity::COMMON},
		ItemStack {"white_banner", 16, Rarity::COMMON},
		ItemStack {"orange_banner", 16, Rarity::COMMON},
		ItemStack {"magenta_banner", 16, Rarity::COMMON},
		ItemStack {"light_blue_banner", 16, Rarity::COMMON},
		ItemStack {"yellow_banner", 16, Rarity::COMMON},
		ItemStack {"lime_banner", 16, Rarity::COMMON},
		ItemStack {"pink_banner", 16, Rarity::COMMON},
		ItemStack {"gray_banner", 16, Rarity::COMMON},
		ItemStack {"light_gray_banner", 16, Rarity::COMMON},
		ItemStack {"cyan_banner", 16, Rarity::COMMON},
		ItemStack {"purple_banner", 16, Rarity::COMMON},
		ItemStack {"blue_banner", 16, Rarity::COMMON},
		ItemStack {"brown_banner", 16, Rarity::COMMON},
		ItemStack {"green_banner", 16, Rarity::COMMON},
		ItemStack {"red_banner", 16, Rarity::COMMON},
		ItemStack {"black_banner", 16, Rarity::COMMON},
		ItemStack {"end_crystal", 64, Rarity::COMMON},
		ItemStack {"chorus_fruit", 64, Rarity::COMMON},
		ItemStack {"popped_chorus_fruit", 64, Rarity::COMMON},
		ItemStack {"torchflower_seeds", 64, Rarity::COMMON},
		ItemStack {"pitcher_pod", 64, Rarity::COMMON},
		ItemStack {"beetroot", 64, Rarity::COMMON},
		ItemStack {"beetroot_seeds", 64, Rarity::COMMON},
		ItemStack {"beetroot_soup", 1, Rarity::COMMON},
		ItemStack {"dragon_breath", 64, Rarity::UNCOMMON},
		ItemStack {"splash_potion", 1, Rarity::COMMON},
		ItemStack {"spectral_arrow", 64, Rarity::COMMON},
		ItemStack {"tipped_arrow", 64, Rarity::COMMON},
		ItemStack {"lingering_potion", 1, Rarity::COMMON},
		ItemStack {"shield", 1, Rarity::COMMON},
		ItemStack {"totem_of_undying", 1, Rarity::UNCOMMON},
		ItemStack {"shulker_shell", 64, Rarity::COMMON},
		ItemStack {"iron_nugget", 64, Rarity::COMMON},
		ItemStack {"knowledge_book", 1, Rarity::EPIC},
		ItemStack {"debug_stick", 1, Rarity::EPIC},
		ItemStack {"music_disc_13", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_cat", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_blocks", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_chirp", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_creator", 1, Rarity::RARE},
		ItemStack {"music_disc_creator_music_box", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_far", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_mall", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_mellohi", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_stal", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_strad", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_ward", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_11", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_wait", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_otherside", 1, Rarity::RARE},
		ItemStack {"music_disc_relic", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_5", 1, Rarity::UNCOMMON},
		ItemStack {"music_disc_pigstep", 1, Rarity::RARE},
		ItemStack {"music_disc_precipice", 1, Rarity::UNCOMMON},
		ItemStack {"disc_fragment_5", 64, Rarity::UNCOMMON},
		ItemStack {"trident", 1, Rarity::RARE},
		ItemStack {"nautilus_shell", 64, Rarity::UNCOMMON},
		ItemStack {"heart_of_the_sea", 64, Rarity::UNCOMMON},
		ItemStack {"crossbow", 1, Rarity::COMMON},
		ItemStack {"suspicious_stew", 1, Rarity::COMMON},
		ItemStack {"loom", 64, Rarity::COMMON},
		ItemStack {"flower_banner_pattern", 1, Rarity::COMMON},
		ItemStack {"creeper_banner_pattern", 1, Rarity::UNCOMMON},
		ItemStack {"skull_banner_pattern", 1, Rarity::RARE},
		ItemStack {"mojang_banner_pattern", 1, Rarity::RARE},
		ItemStack {"globe_banner_pattern", 1, Rarity::COMMON},
		ItemStack {"piglin_banner_pattern", 1, Rarity::UNCOMMON},
		ItemStack {"flow_banner_pattern", 1, Rarity::RARE},
		ItemStack {"guster_banner_pattern", 1, Rarity::RARE},
		ItemStack {"field_masoned_banner_pattern", 1, Rarity::COMMON},
		ItemStack {"bordure_indented_banner_pattern", 1, Rarity::COMMON},
		ItemStack {"goat_horn", 1, Rarity::UNCOMMON},
		ItemStack {"composter", 64, Rarity::COMMON},
		ItemStack {"barrel", 64, Rarity::COMMON},
		ItemStack {"smoker", 64, Rarity::COMMON},
		ItemStack {"blast_furnace", 64, Rarity::COMMON},
		ItemStack {"cartography_table", 64, Rarity::COMMON},
		ItemStack {"fletching_table", 64, Rarity::COMMON},
		ItemStack {"grindstone", 64, Rarity::COMMON},
		ItemStack {"smithing_table", 64, Rarity::COMMON},
		ItemStack {"stonecutter", 64, Rarity::COMMON},
		ItemStack {"bell", 64, Rarity::COMMON},
		ItemStack {"lantern", 64, Rarity::COMMON},
		ItemStack {"soul_lantern", 64, Rarity::COMMON},
		ItemStack {"sweet_berries", 64, Rarity::COMMON},
		ItemStack {"glow_berries", 64, Rarity::COMMON},
		ItemStack {"campfire", 64, Rarity::COMMON},
		ItemStack {"soul_campfire", 64, Rarity::COMMON},
		ItemStack {"shroomlight", 64, Rarity::COMMON},
		ItemStack {"honeycomb", 64, Rarity::COMMON},
		ItemStack {"bee_nest", 64, Rarity::COMMON},
		ItemStack {"beehive", 64, Rarity::COMMON},
		ItemStack {"honey_bottle", 16, Rarity::COMMON},
		ItemStack {"honeycomb_block", 64, Rarity::COMMON},
		ItemStack {"lodestone", 64, Rarity::COMMON},
		ItemStack {"crying_obsidian", 64, Rarity::COMMON},
		ItemStack {"blackstone", 64, Rarity::COMMON},
		ItemStack {"blackstone_slab", 64, Rarity::COMMON},
		ItemStack {"blackstone_stairs", 64, Rarity::COMMON},
		ItemStack {"gilded_blackstone", 64, Rarity::COMMON},
		ItemStack {"polished_blackstone", 64, Rarity::COMMON},
		ItemStack {"polished_blackstone_slab", 64, Rarity::COMMON},
		ItemStack {"polished_blackstone_stairs", 64, Rarity::COMMON},
		ItemStack {"chiseled_polished_blackstone", 64, Rarity::COMMON},
		ItemStack {"polished_blackstone_bricks", 64, Rarity::COMMON},
		ItemStack {"polished_blackstone_brick_slab", 64, Rarity::COMMON},
		ItemStack {"polished_blackstone_brick_stairs", 64, Rarity::COMMON},
		ItemStack {"cracked_polished_blackstone_bricks", 64, Rarity::COMMON},
		ItemStack {"respawn_anchor", 64, Rarity::COMMON},
		ItemStack {"candle", 64, Rarity::COMMON},
		ItemStack {"white_candle", 64, Rarity::COMMON},
		ItemStack {"orange_candle", 64, Rarity::COMMON},
		ItemStack {"magenta_candle", 64, Rarity::COMMON},
		ItemStack {"light_blue_candle", 64, Rarity::COMMON},
		ItemStack {"yellow_candle", 64, Rarity::COMMON},
		ItemStack {"lime_candle", 64, Rarity::COMMON},
		ItemStack {"pink_candle", 64, Rarity::COMMON},
		ItemStack {"gray_candle", 64, Rarity::COMMON},
		ItemStack {"light_gray_candle", 64, Rarity::COMMON},
		ItemStack {"cyan_candle", 64, Rarity::COMMON},
		ItemStack {"purple_candle", 64, Rarity::COMMON},
		ItemStack {"blue_candle", 64, Rarity::COMMON},
		ItemStack {"brown_candle", 64, Rarity::COMMON},
		ItemStack {"green_candle", 64, Rarity::COMMON},
		ItemStack {"red_candle", 64, Rarity::COMMON},
		ItemStack {"black_candle", 64, Rarity::COMMON},
		ItemStack {"small_amethyst_bud", 64, Rarity::COMMON},
		ItemStack {"medium_amethyst_bud", 64, Rarity::COMMON},
		ItemStack {"large_amethyst_bud", 64, Rarity::COMMON},
		ItemStack {"amethyst_cluster", 64, Rarity::COMMON},
		ItemStack {"pointed_dripstone", 64, Rarity::COMMON},
		ItemStack {"ochre_froglight", 64, Rarity::COMMON},
		ItemStack {"verdant_froglight", 64, Rarity::COMMON},
		ItemStack {"pearlescent_froglight", 64, Rarity::COMMON},
		ItemStack {"frogspawn", 64, Rarity::COMMON},
		ItemStack {"echo_shard", 64, Rarity::UNCOMMON},
		ItemStack {"brush", 1, Rarity::COMMON},
		ItemStack {"netherite_upgrade_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"sentry_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"dune_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"coast_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"wild_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"ward_armor_trim_smithing_template", 64, Rarity::RARE},
		ItemStack {"eye_armor_trim_smithing_template", 64, Rarity::RARE},
		ItemStack {"vex_armor_trim_smithing_template", 64, Rarity::RARE},
		ItemStack {"tide_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"snout_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"rib_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"spire_armor_trim_smithing_template", 64, Rarity::RARE},
		ItemStack {"wayfinder_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"shaper_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"silence_armor_trim_smithing_template", 64, Rarity::EPIC},
		ItemStack {"raiser_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"host_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"flow_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"bolt_armor_trim_smithing_template", 64, Rarity::UNCOMMON},
		ItemStack {"angler_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"archer_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"arms_up_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"blade_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"brewer_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"burn_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"danger_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"explorer_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"flow_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"friend_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"guster_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"heart_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"heartbreak_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"howl_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"miner_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"mourner_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"plenty_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"prize_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"scrape_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"sheaf_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"shelter_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"skull_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"snort_pottery_sherd", 64, Rarity::UNCOMMON},
		ItemStack {"copper_grate", 64, Rarity::COMMON},
		ItemStack {"exposed_copper_grate", 64, Rarity::COMMON},
		ItemStack {"weathered_copper_grate", 64, Rarity::COMMON},
		ItemStack {"oxidized_copper_grate", 64, Rarity::COMMON},
		ItemStack {"waxed_copper_grate", 64, Rarity::COMMON},
		ItemStack {"waxed_exposed_copper_grate", 64, Rarity::COMMON},
		ItemStack {"waxed_weathered_copper_grate", 64, Rarity::COMMON},
		ItemStack {"waxed_oxidized_copper_grate", 64, Rarity::COMMON},
		ItemStack {"copper_bulb", 64, Rarity::COMMON},
		ItemStack {"exposed_copper_bulb", 64, Rarity::COMMON},
		ItemStack {"weathered_copper_bulb", 64, Rarity::COMMON},
		ItemStack {"oxidized_copper_bulb", 64, Rarity::COMMON},
		ItemStack {"waxed_copper_bulb", 64, Rarity::COMMON},
		ItemStack {"waxed_exposed_copper_bulb", 64, Rarity::COMMON},
		ItemStack {"waxed_weathered_copper_bulb", 64, Rarity::COMMON},
		ItemStack {"waxed_oxidized_copper_bulb", 64, Rarity::COMMON},
		ItemStack {"trial_spawner", 64, Rarity::COMMON},
		ItemStack {"trial_key", 64, Rarity::COMMON},
		ItemStack {"ominous_trial_key", 64, Rarity::COMMON},
		ItemStack {"vault", 64, Rarity::COMMON},
		ItemStack {"ominous_bottle", 64, Rarity::UNCOMMON},
	};

	constexpr inline auto& AIR = ItemRegistry[0];
	constexpr inline auto& STONE = ItemRegistry[1];
	constexpr inline auto& GRANITE = ItemRegistry[2];
	constexpr inline auto& POLISHED_GRANITE = ItemRegistry[3];
	constexpr inline auto& DIORITE = ItemRegistry[4];
	constexpr inline auto& POLISHED_DIORITE = ItemRegistry[5];
	constexpr inline auto& ANDESITE = ItemRegistry[6];
	constexpr inline auto& POLISHED_ANDESITE = ItemRegistry[7];
	constexpr inline auto& DEEPSLATE = ItemRegistry[8];
	constexpr inline auto& COBBLED_DEEPSLATE = ItemRegistry[9];
	constexpr inline auto& POLISHED_DEEPSLATE = ItemRegistry[10];
	constexpr inline auto& CALCITE = ItemRegistry[11];
	constexpr inline auto& TUFF = ItemRegistry[12];
	constexpr inline auto& TUFF_SLAB = ItemRegistry[13];
	constexpr inline auto& TUFF_STAIRS = ItemRegistry[14];
	constexpr inline auto& TUFF_WALL = ItemRegistry[15];
	constexpr inline auto& CHISELED_TUFF = ItemRegistry[16];
	constexpr inline auto& POLISHED_TUFF = ItemRegistry[17];
	constexpr inline auto& POLISHED_TUFF_SLAB = ItemRegistry[18];
	constexpr inline auto& POLISHED_TUFF_STAIRS = ItemRegistry[19];
	constexpr inline auto& POLISHED_TUFF_WALL = ItemRegistry[20];
	constexpr inline auto& TUFF_BRICKS = ItemRegistry[21];
	constexpr inline auto& TUFF_BRICK_SLAB = ItemRegistry[22];
	constexpr inline auto& TUFF_BRICK_STAIRS = ItemRegistry[23];
	constexpr inline auto& TUFF_BRICK_WALL = ItemRegistry[24];
	constexpr inline auto& CHISELED_TUFF_BRICKS = ItemRegistry[25];
	constexpr inline auto& DRIPSTONE_BLOCK = ItemRegistry[26];
	constexpr inline auto& GRASS_BLOCK = ItemRegistry[27];
	constexpr inline auto& DIRT = ItemRegistry[28];
	constexpr inline auto& COARSE_DIRT = ItemRegistry[29];
	constexpr inline auto& PODZOL = ItemRegistry[30];
	constexpr inline auto& ROOTED_DIRT = ItemRegistry[31];
	constexpr inline auto& MUD = ItemRegistry[32];
	constexpr inline auto& CRIMSON_NYLIUM = ItemRegistry[33];
	constexpr inline auto& WARPED_NYLIUM = ItemRegistry[34];
	constexpr inline auto& COBBLESTONE = ItemRegistry[35];
	constexpr inline auto& OAK_PLANKS = ItemRegistry[36];
	constexpr inline auto& SPRUCE_PLANKS = ItemRegistry[37];
	constexpr inline auto& BIRCH_PLANKS = ItemRegistry[38];
	constexpr inline auto& JUNGLE_PLANKS = ItemRegistry[39];
	constexpr inline auto& ACACIA_PLANKS = ItemRegistry[40];
	constexpr inline auto& CHERRY_PLANKS = ItemRegistry[41];
	constexpr inline auto& DARK_OAK_PLANKS = ItemRegistry[42];
	constexpr inline auto& PALE_OAK_PLANKS = ItemRegistry[43];
	constexpr inline auto& MANGROVE_PLANKS = ItemRegistry[44];
	constexpr inline auto& BAMBOO_PLANKS = ItemRegistry[45];
	constexpr inline auto& CRIMSON_PLANKS = ItemRegistry[46];
	constexpr inline auto& WARPED_PLANKS = ItemRegistry[47];
	constexpr inline auto& BAMBOO_MOSAIC = ItemRegistry[48];
	constexpr inline auto& OAK_SAPLING = ItemRegistry[49];
	constexpr inline auto& SPRUCE_SAPLING = ItemRegistry[50];
	constexpr inline auto& BIRCH_SAPLING = ItemRegistry[51];
	constexpr inline auto& JUNGLE_SAPLING = ItemRegistry[52];
	constexpr inline auto& ACACIA_SAPLING = ItemRegistry[53];
	constexpr inline auto& CHERRY_SAPLING = ItemRegistry[54];
	constexpr inline auto& DARK_OAK_SAPLING = ItemRegistry[55];
	constexpr inline auto& PALE_OAK_SAPLING = ItemRegistry[56];
	constexpr inline auto& MANGROVE_PROPAGULE = ItemRegistry[57];
	constexpr inline auto& BEDROCK = ItemRegistry[58];
	constexpr inline auto& SAND = ItemRegistry[59];
	constexpr inline auto& SUSPICIOUS_SAND = ItemRegistry[60];
	constexpr inline auto& SUSPICIOUS_GRAVEL = ItemRegistry[61];
	constexpr inline auto& RED_SAND = ItemRegistry[62];
	constexpr inline auto& GRAVEL = ItemRegistry[63];
	constexpr inline auto& COAL_ORE = ItemRegistry[64];
	constexpr inline auto& DEEPSLATE_COAL_ORE = ItemRegistry[65];
	constexpr inline auto& IRON_ORE = ItemRegistry[66];
	constexpr inline auto& DEEPSLATE_IRON_ORE = ItemRegistry[67];
	constexpr inline auto& COPPER_ORE = ItemRegistry[68];
	constexpr inline auto& DEEPSLATE_COPPER_ORE = ItemRegistry[69];
	constexpr inline auto& GOLD_ORE = ItemRegistry[70];
	constexpr inline auto& DEEPSLATE_GOLD_ORE = ItemRegistry[71];
	constexpr inline auto& REDSTONE_ORE = ItemRegistry[72];
	constexpr inline auto& DEEPSLATE_REDSTONE_ORE = ItemRegistry[73];
	constexpr inline auto& EMERALD_ORE = ItemRegistry[74];
	constexpr inline auto& DEEPSLATE_EMERALD_ORE = ItemRegistry[75];
	constexpr inline auto& LAPIS_ORE = ItemRegistry[76];
	constexpr inline auto& DEEPSLATE_LAPIS_ORE = ItemRegistry[77];
	constexpr inline auto& DIAMOND_ORE = ItemRegistry[78];
	constexpr inline auto& DEEPSLATE_DIAMOND_ORE = ItemRegistry[79];
	constexpr inline auto& NETHER_GOLD_ORE = ItemRegistry[80];
	constexpr inline auto& NETHER_QUARTZ_ORE = ItemRegistry[81];
	constexpr inline auto& ANCIENT_DEBRIS = ItemRegistry[82];
	constexpr inline auto& COAL_BLOCK = ItemRegistry[83];
	constexpr inline auto& RAW_IRON_BLOCK = ItemRegistry[84];
	constexpr inline auto& RAW_COPPER_BLOCK = ItemRegistry[85];
	constexpr inline auto& RAW_GOLD_BLOCK = ItemRegistry[86];
	constexpr inline auto& HEAVY_CORE = ItemRegistry[87];
	constexpr inline auto& AMETHYST_BLOCK = ItemRegistry[88];
	constexpr inline auto& BUDDING_AMETHYST = ItemRegistry[89];
	constexpr inline auto& IRON_BLOCK = ItemRegistry[90];
	constexpr inline auto& COPPER_BLOCK = ItemRegistry[91];
	constexpr inline auto& GOLD_BLOCK = ItemRegistry[92];
	constexpr inline auto& DIAMOND_BLOCK = ItemRegistry[93];
	constexpr inline auto& NETHERITE_BLOCK = ItemRegistry[94];
	constexpr inline auto& EXPOSED_COPPER = ItemRegistry[95];
	constexpr inline auto& WEATHERED_COPPER = ItemRegistry[96];
	constexpr inline auto& OXIDIZED_COPPER = ItemRegistry[97];
	constexpr inline auto& CHISELED_COPPER = ItemRegistry[98];
	constexpr inline auto& EXPOSED_CHISELED_COPPER = ItemRegistry[99];
	constexpr inline auto& WEATHERED_CHISELED_COPPER = ItemRegistry[100];
	constexpr inline auto& OXIDIZED_CHISELED_COPPER = ItemRegistry[101];
	constexpr inline auto& CUT_COPPER = ItemRegistry[102];
	constexpr inline auto& EXPOSED_CUT_COPPER = ItemRegistry[103];
	constexpr inline auto& WEATHERED_CUT_COPPER = ItemRegistry[104];
	constexpr inline auto& OXIDIZED_CUT_COPPER = ItemRegistry[105];
	constexpr inline auto& CUT_COPPER_STAIRS = ItemRegistry[106];
	constexpr inline auto& EXPOSED_CUT_COPPER_STAIRS = ItemRegistry[107];
	constexpr inline auto& WEATHERED_CUT_COPPER_STAIRS = ItemRegistry[108];
	constexpr inline auto& OXIDIZED_CUT_COPPER_STAIRS = ItemRegistry[109];
	constexpr inline auto& CUT_COPPER_SLAB = ItemRegistry[110];
	constexpr inline auto& EXPOSED_CUT_COPPER_SLAB = ItemRegistry[111];
	constexpr inline auto& WEATHERED_CUT_COPPER_SLAB = ItemRegistry[112];
	constexpr inline auto& OXIDIZED_CUT_COPPER_SLAB = ItemRegistry[113];
	constexpr inline auto& WAXED_COPPER_BLOCK = ItemRegistry[114];
	constexpr inline auto& WAXED_EXPOSED_COPPER = ItemRegistry[115];
	constexpr inline auto& WAXED_WEATHERED_COPPER = ItemRegistry[116];
	constexpr inline auto& WAXED_OXIDIZED_COPPER = ItemRegistry[117];
	constexpr inline auto& WAXED_CHISELED_COPPER = ItemRegistry[118];
	constexpr inline auto& WAXED_EXPOSED_CHISELED_COPPER = ItemRegistry[119];
	constexpr inline auto& WAXED_WEATHERED_CHISELED_COPPER = ItemRegistry[120];
	constexpr inline auto& WAXED_OXIDIZED_CHISELED_COPPER = ItemRegistry[121];
	constexpr inline auto& WAXED_CUT_COPPER = ItemRegistry[122];
	constexpr inline auto& WAXED_EXPOSED_CUT_COPPER = ItemRegistry[123];
	constexpr inline auto& WAXED_WEATHERED_CUT_COPPER = ItemRegistry[124];
	constexpr inline auto& WAXED_OXIDIZED_CUT_COPPER = ItemRegistry[125];
	constexpr inline auto& WAXED_CUT_COPPER_STAIRS = ItemRegistry[126];
	constexpr inline auto& WAXED_EXPOSED_CUT_COPPER_STAIRS = ItemRegistry[127];
	constexpr inline auto& WAXED_WEATHERED_CUT_COPPER_STAIRS = ItemRegistry[128];
	constexpr inline auto& WAXED_OXIDIZED_CUT_COPPER_STAIRS = ItemRegistry[129];
	constexpr inline auto& WAXED_CUT_COPPER_SLAB = ItemRegistry[130];
	constexpr inline auto& WAXED_EXPOSED_CUT_COPPER_SLAB = ItemRegistry[131];
	constexpr inline auto& WAXED_WEATHERED_CUT_COPPER_SLAB = ItemRegistry[132];
	constexpr inline auto& WAXED_OXIDIZED_CUT_COPPER_SLAB = ItemRegistry[133];
	constexpr inline auto& OAK_LOG = ItemRegistry[134];
	constexpr inline auto& SPRUCE_LOG = ItemRegistry[135];
	constexpr inline auto& BIRCH_LOG = ItemRegistry[136];
	constexpr inline auto& JUNGLE_LOG = ItemRegistry[137];
	constexpr inline auto& ACACIA_LOG = ItemRegistry[138];
	constexpr inline auto& CHERRY_LOG = ItemRegistry[139];
	constexpr inline auto& PALE_OAK_LOG = ItemRegistry[140];
	constexpr inline auto& DARK_OAK_LOG = ItemRegistry[141];
	constexpr inline auto& MANGROVE_LOG = ItemRegistry[142];
	constexpr inline auto& MANGROVE_ROOTS = ItemRegistry[143];
	constexpr inline auto& MUDDY_MANGROVE_ROOTS = ItemRegistry[144];
	constexpr inline auto& CRIMSON_STEM = ItemRegistry[145];
	constexpr inline auto& WARPED_STEM = ItemRegistry[146];
	constexpr inline auto& BAMBOO_BLOCK = ItemRegistry[147];
	constexpr inline auto& STRIPPED_OAK_LOG = ItemRegistry[148];
	constexpr inline auto& STRIPPED_SPRUCE_LOG = ItemRegistry[149];
	constexpr inline auto& STRIPPED_BIRCH_LOG = ItemRegistry[150];
	constexpr inline auto& STRIPPED_JUNGLE_LOG = ItemRegistry[151];
	constexpr inline auto& STRIPPED_ACACIA_LOG = ItemRegistry[152];
	constexpr inline auto& STRIPPED_CHERRY_LOG = ItemRegistry[153];
	constexpr inline auto& STRIPPED_DARK_OAK_LOG = ItemRegistry[154];
	constexpr inline auto& STRIPPED_PALE_OAK_LOG = ItemRegistry[155];
	constexpr inline auto& STRIPPED_MANGROVE_LOG = ItemRegistry[156];
	constexpr inline auto& STRIPPED_CRIMSON_STEM = ItemRegistry[157];
	constexpr inline auto& STRIPPED_WARPED_STEM = ItemRegistry[158];
	constexpr inline auto& STRIPPED_OAK_WOOD = ItemRegistry[159];
	constexpr inline auto& STRIPPED_SPRUCE_WOOD = ItemRegistry[160];
	constexpr inline auto& STRIPPED_BIRCH_WOOD = ItemRegistry[161];
	constexpr inline auto& STRIPPED_JUNGLE_WOOD = ItemRegistry[162];
	constexpr inline auto& STRIPPED_ACACIA_WOOD = ItemRegistry[163];
	constexpr inline auto& STRIPPED_CHERRY_WOOD = ItemRegistry[164];
	constexpr inline auto& STRIPPED_DARK_OAK_WOOD = ItemRegistry[165];
	constexpr inline auto& STRIPPED_PALE_OAK_WOOD = ItemRegistry[166];
	constexpr inline auto& STRIPPED_MANGROVE_WOOD = ItemRegistry[167];
	constexpr inline auto& STRIPPED_CRIMSON_HYPHAE = ItemRegistry[168];
	constexpr inline auto& STRIPPED_WARPED_HYPHAE = ItemRegistry[169];
	constexpr inline auto& STRIPPED_BAMBOO_BLOCK = ItemRegistry[170];
	constexpr inline auto& OAK_WOOD = ItemRegistry[171];
	constexpr inline auto& SPRUCE_WOOD = ItemRegistry[172];
	constexpr inline auto& BIRCH_WOOD = ItemRegistry[173];
	constexpr inline auto& JUNGLE_WOOD = ItemRegistry[174];
	constexpr inline auto& ACACIA_WOOD = ItemRegistry[175];
	constexpr inline auto& CHERRY_WOOD = ItemRegistry[176];
	constexpr inline auto& PALE_OAK_WOOD = ItemRegistry[177];
	constexpr inline auto& DARK_OAK_WOOD = ItemRegistry[178];
	constexpr inline auto& MANGROVE_WOOD = ItemRegistry[179];
	constexpr inline auto& CRIMSON_HYPHAE = ItemRegistry[180];
	constexpr inline auto& WARPED_HYPHAE = ItemRegistry[181];
	constexpr inline auto& OAK_LEAVES = ItemRegistry[182];
	constexpr inline auto& SPRUCE_LEAVES = ItemRegistry[183];
	constexpr inline auto& BIRCH_LEAVES = ItemRegistry[184];
	constexpr inline auto& JUNGLE_LEAVES = ItemRegistry[185];
	constexpr inline auto& ACACIA_LEAVES = ItemRegistry[186];
	constexpr inline auto& CHERRY_LEAVES = ItemRegistry[187];
	constexpr inline auto& DARK_OAK_LEAVES = ItemRegistry[188];
	constexpr inline auto& PALE_OAK_LEAVES = ItemRegistry[189];
	constexpr inline auto& MANGROVE_LEAVES = ItemRegistry[190];
	constexpr inline auto& AZALEA_LEAVES = ItemRegistry[191];
	constexpr inline auto& FLOWERING_AZALEA_LEAVES = ItemRegistry[192];
	constexpr inline auto& SPONGE = ItemRegistry[193];
	constexpr inline auto& WET_SPONGE = ItemRegistry[194];
	constexpr inline auto& GLASS = ItemRegistry[195];
	constexpr inline auto& TINTED_GLASS = ItemRegistry[196];
	constexpr inline auto& LAPIS_BLOCK = ItemRegistry[197];
	constexpr inline auto& SANDSTONE = ItemRegistry[198];
	constexpr inline auto& CHISELED_SANDSTONE = ItemRegistry[199];
	constexpr inline auto& CUT_SANDSTONE = ItemRegistry[200];
	constexpr inline auto& COBWEB = ItemRegistry[201];
	constexpr inline auto& SHORT_GRASS = ItemRegistry[202];
	constexpr inline auto& FERN = ItemRegistry[203];
	constexpr inline auto& BUSH = ItemRegistry[204];
	constexpr inline auto& AZALEA = ItemRegistry[205];
	constexpr inline auto& FLOWERING_AZALEA = ItemRegistry[206];
	constexpr inline auto& DEAD_BUSH = ItemRegistry[207];
	constexpr inline auto& FIREFLY_BUSH = ItemRegistry[208];
	constexpr inline auto& SHORT_DRY_GRASS = ItemRegistry[209];
	constexpr inline auto& TALL_DRY_GRASS = ItemRegistry[210];
	constexpr inline auto& SEAGRASS = ItemRegistry[211];
	constexpr inline auto& SEA_PICKLE = ItemRegistry[212];
	constexpr inline auto& WHITE_WOOL = ItemRegistry[213];
	constexpr inline auto& ORANGE_WOOL = ItemRegistry[214];
	constexpr inline auto& MAGENTA_WOOL = ItemRegistry[215];
	constexpr inline auto& LIGHT_BLUE_WOOL = ItemRegistry[216];
	constexpr inline auto& YELLOW_WOOL = ItemRegistry[217];
	constexpr inline auto& LIME_WOOL = ItemRegistry[218];
	constexpr inline auto& PINK_WOOL = ItemRegistry[219];
	constexpr inline auto& GRAY_WOOL = ItemRegistry[220];
	constexpr inline auto& LIGHT_GRAY_WOOL = ItemRegistry[221];
	constexpr inline auto& CYAN_WOOL = ItemRegistry[222];
	constexpr inline auto& PURPLE_WOOL = ItemRegistry[223];
	constexpr inline auto& BLUE_WOOL = ItemRegistry[224];
	constexpr inline auto& BROWN_WOOL = ItemRegistry[225];
	constexpr inline auto& GREEN_WOOL = ItemRegistry[226];
	constexpr inline auto& RED_WOOL = ItemRegistry[227];
	constexpr inline auto& BLACK_WOOL = ItemRegistry[228];
	constexpr inline auto& DANDELION = ItemRegistry[229];
	constexpr inline auto& OPEN_EYEBLOSSOM = ItemRegistry[230];
	constexpr inline auto& CLOSED_EYEBLOSSOM = ItemRegistry[231];
	constexpr inline auto& POPPY = ItemRegistry[232];
	constexpr inline auto& BLUE_ORCHID = ItemRegistry[233];
	constexpr inline auto& ALLIUM = ItemRegistry[234];
	constexpr inline auto& AZURE_BLUET = ItemRegistry[235];
	constexpr inline auto& RED_TULIP = ItemRegistry[236];
	constexpr inline auto& ORANGE_TULIP = ItemRegistry[237];
	constexpr inline auto& WHITE_TULIP = ItemRegistry[238];
	constexpr inline auto& PINK_TULIP = ItemRegistry[239];
	constexpr inline auto& OXEYE_DAISY = ItemRegistry[240];
	constexpr inline auto& CORNFLOWER = ItemRegistry[241];
	constexpr inline auto& LILY_OF_THE_VALLEY = ItemRegistry[242];
	constexpr inline auto& WITHER_ROSE = ItemRegistry[243];
	constexpr inline auto& TORCHFLOWER = ItemRegistry[244];
	constexpr inline auto& PITCHER_PLANT = ItemRegistry[245];
	constexpr inline auto& SPORE_BLOSSOM = ItemRegistry[246];
	constexpr inline auto& BROWN_MUSHROOM = ItemRegistry[247];
	constexpr inline auto& RED_MUSHROOM = ItemRegistry[248];
	constexpr inline auto& CRIMSON_FUNGUS = ItemRegistry[249];
	constexpr inline auto& WARPED_FUNGUS = ItemRegistry[250];
	constexpr inline auto& CRIMSON_ROOTS = ItemRegistry[251];
	constexpr inline auto& WARPED_ROOTS = ItemRegistry[252];
	constexpr inline auto& NETHER_SPROUTS = ItemRegistry[253];
	constexpr inline auto& WEEPING_VINES = ItemRegistry[254];
	constexpr inline auto& TWISTING_VINES = ItemRegistry[255];
	constexpr inline auto& SUGAR_CANE = ItemRegistry[256];
	constexpr inline auto& KELP = ItemRegistry[257];
	constexpr inline auto& PINK_PETALS = ItemRegistry[258];
	constexpr inline auto& WILDFLOWERS = ItemRegistry[259];
	constexpr inline auto& LEAF_LITTER = ItemRegistry[260];
	constexpr inline auto& MOSS_CARPET = ItemRegistry[261];
	constexpr inline auto& MOSS_BLOCK = ItemRegistry[262];
	constexpr inline auto& PALE_MOSS_CARPET = ItemRegistry[263];
	constexpr inline auto& PALE_HANGING_MOSS = ItemRegistry[264];
	constexpr inline auto& PALE_MOSS_BLOCK = ItemRegistry[265];
	constexpr inline auto& HANGING_ROOTS = ItemRegistry[266];
	constexpr inline auto& BIG_DRIPLEAF = ItemRegistry[267];
	constexpr inline auto& SMALL_DRIPLEAF = ItemRegistry[268];
	constexpr inline auto& BAMBOO = ItemRegistry[269];
	constexpr inline auto& OAK_SLAB = ItemRegistry[270];
	constexpr inline auto& SPRUCE_SLAB = ItemRegistry[271];
	constexpr inline auto& BIRCH_SLAB = ItemRegistry[272];
	constexpr inline auto& JUNGLE_SLAB = ItemRegistry[273];
	constexpr inline auto& ACACIA_SLAB = ItemRegistry[274];
	constexpr inline auto& CHERRY_SLAB = ItemRegistry[275];
	constexpr inline auto& DARK_OAK_SLAB = ItemRegistry[276];
	constexpr inline auto& PALE_OAK_SLAB = ItemRegistry[277];
	constexpr inline auto& MANGROVE_SLAB = ItemRegistry[278];
	constexpr inline auto& BAMBOO_SLAB = ItemRegistry[279];
	constexpr inline auto& BAMBOO_MOSAIC_SLAB = ItemRegistry[280];
	constexpr inline auto& CRIMSON_SLAB = ItemRegistry[281];
	constexpr inline auto& WARPED_SLAB = ItemRegistry[282];
	constexpr inline auto& STONE_SLAB = ItemRegistry[283];
	constexpr inline auto& SMOOTH_STONE_SLAB = ItemRegistry[284];
	constexpr inline auto& SANDSTONE_SLAB = ItemRegistry[285];
	constexpr inline auto& CUT_SANDSTONE_SLAB = ItemRegistry[286];
	constexpr inline auto& PETRIFIED_OAK_SLAB = ItemRegistry[287];
	constexpr inline auto& COBBLESTONE_SLAB = ItemRegistry[288];
	constexpr inline auto& BRICK_SLAB = ItemRegistry[289];
	constexpr inline auto& STONE_BRICK_SLAB = ItemRegistry[290];
	constexpr inline auto& MUD_BRICK_SLAB = ItemRegistry[291];
	constexpr inline auto& NETHER_BRICK_SLAB = ItemRegistry[292];
	constexpr inline auto& QUARTZ_SLAB = ItemRegistry[293];
	constexpr inline auto& RED_SANDSTONE_SLAB = ItemRegistry[294];
	constexpr inline auto& CUT_RED_SANDSTONE_SLAB = ItemRegistry[295];
	constexpr inline auto& PURPUR_SLAB = ItemRegistry[296];
	constexpr inline auto& PRISMARINE_SLAB = ItemRegistry[297];
	constexpr inline auto& PRISMARINE_BRICK_SLAB = ItemRegistry[298];
	constexpr inline auto& DARK_PRISMARINE_SLAB = ItemRegistry[299];
	constexpr inline auto& SMOOTH_QUARTZ = ItemRegistry[300];
	constexpr inline auto& SMOOTH_RED_SANDSTONE = ItemRegistry[301];
	constexpr inline auto& SMOOTH_SANDSTONE = ItemRegistry[302];
	constexpr inline auto& SMOOTH_STONE = ItemRegistry[303];
	constexpr inline auto& BRICKS = ItemRegistry[304];
	constexpr inline auto& BOOKSHELF = ItemRegistry[305];
	constexpr inline auto& CHISELED_BOOKSHELF = ItemRegistry[306];
	constexpr inline auto& DECORATED_POT = ItemRegistry[307];
	constexpr inline auto& MOSSY_COBBLESTONE = ItemRegistry[308];
	constexpr inline auto& OBSIDIAN = ItemRegistry[309];
	constexpr inline auto& TORCH = ItemRegistry[310];
	constexpr inline auto& END_ROD = ItemRegistry[311];
	constexpr inline auto& CHORUS_PLANT = ItemRegistry[312];
	constexpr inline auto& CHORUS_FLOWER = ItemRegistry[313];
	constexpr inline auto& PURPUR_BLOCK = ItemRegistry[314];
	constexpr inline auto& PURPUR_PILLAR = ItemRegistry[315];
	constexpr inline auto& PURPUR_STAIRS = ItemRegistry[316];
	constexpr inline auto& SPAWNER = ItemRegistry[317];
	constexpr inline auto& CREAKING_HEART = ItemRegistry[318];
	constexpr inline auto& CHEST = ItemRegistry[319];
	constexpr inline auto& CRAFTING_TABLE = ItemRegistry[320];
	constexpr inline auto& FARMLAND = ItemRegistry[321];
	constexpr inline auto& FURNACE = ItemRegistry[322];
	constexpr inline auto& LADDER = ItemRegistry[323];
	constexpr inline auto& COBBLESTONE_STAIRS = ItemRegistry[324];
	constexpr inline auto& SNOW = ItemRegistry[325];
	constexpr inline auto& ICE = ItemRegistry[326];
	constexpr inline auto& SNOW_BLOCK = ItemRegistry[327];
	constexpr inline auto& CACTUS = ItemRegistry[328];
	constexpr inline auto& CACTUS_FLOWER = ItemRegistry[329];
	constexpr inline auto& CLAY = ItemRegistry[330];
	constexpr inline auto& JUKEBOX = ItemRegistry[331];
	constexpr inline auto& OAK_FENCE = ItemRegistry[332];
	constexpr inline auto& SPRUCE_FENCE = ItemRegistry[333];
	constexpr inline auto& BIRCH_FENCE = ItemRegistry[334];
	constexpr inline auto& JUNGLE_FENCE = ItemRegistry[335];
	constexpr inline auto& ACACIA_FENCE = ItemRegistry[336];
	constexpr inline auto& CHERRY_FENCE = ItemRegistry[337];
	constexpr inline auto& DARK_OAK_FENCE = ItemRegistry[338];
	constexpr inline auto& PALE_OAK_FENCE = ItemRegistry[339];
	constexpr inline auto& MANGROVE_FENCE = ItemRegistry[340];
	constexpr inline auto& BAMBOO_FENCE = ItemRegistry[341];
	constexpr inline auto& CRIMSON_FENCE = ItemRegistry[342];
	constexpr inline auto& WARPED_FENCE = ItemRegistry[343];
	constexpr inline auto& PUMPKIN = ItemRegistry[344];
	constexpr inline auto& CARVED_PUMPKIN = ItemRegistry[345];
	constexpr inline auto& JACK_O_LANTERN = ItemRegistry[346];
	constexpr inline auto& NETHERRACK = ItemRegistry[347];
	constexpr inline auto& SOUL_SAND = ItemRegistry[348];
	constexpr inline auto& SOUL_SOIL = ItemRegistry[349];
	constexpr inline auto& BASALT = ItemRegistry[350];
	constexpr inline auto& POLISHED_BASALT = ItemRegistry[351];
	constexpr inline auto& SMOOTH_BASALT = ItemRegistry[352];
	constexpr inline auto& SOUL_TORCH = ItemRegistry[353];
	constexpr inline auto& GLOWSTONE = ItemRegistry[354];
	constexpr inline auto& INFESTED_STONE = ItemRegistry[355];
	constexpr inline auto& INFESTED_COBBLESTONE = ItemRegistry[356];
	constexpr inline auto& INFESTED_STONE_BRICKS = ItemRegistry[357];
	constexpr inline auto& INFESTED_MOSSY_STONE_BRICKS = ItemRegistry[358];
	constexpr inline auto& INFESTED_CRACKED_STONE_BRICKS = ItemRegistry[359];
	constexpr inline auto& INFESTED_CHISELED_STONE_BRICKS = ItemRegistry[360];
	constexpr inline auto& INFESTED_DEEPSLATE = ItemRegistry[361];
	constexpr inline auto& STONE_BRICKS = ItemRegistry[362];
	constexpr inline auto& MOSSY_STONE_BRICKS = ItemRegistry[363];
	constexpr inline auto& CRACKED_STONE_BRICKS = ItemRegistry[364];
	constexpr inline auto& CHISELED_STONE_BRICKS = ItemRegistry[365];
	constexpr inline auto& PACKED_MUD = ItemRegistry[366];
	constexpr inline auto& MUD_BRICKS = ItemRegistry[367];
	constexpr inline auto& DEEPSLATE_BRICKS = ItemRegistry[368];
	constexpr inline auto& CRACKED_DEEPSLATE_BRICKS = ItemRegistry[369];
	constexpr inline auto& DEEPSLATE_TILES = ItemRegistry[370];
	constexpr inline auto& CRACKED_DEEPSLATE_TILES = ItemRegistry[371];
	constexpr inline auto& CHISELED_DEEPSLATE = ItemRegistry[372];
	constexpr inline auto& REINFORCED_DEEPSLATE = ItemRegistry[373];
	constexpr inline auto& BROWN_MUSHROOM_BLOCK = ItemRegistry[374];
	constexpr inline auto& RED_MUSHROOM_BLOCK = ItemRegistry[375];
	constexpr inline auto& MUSHROOM_STEM = ItemRegistry[376];
	constexpr inline auto& IRON_BARS = ItemRegistry[377];
	constexpr inline auto& CHAIN = ItemRegistry[378];
	constexpr inline auto& GLASS_PANE = ItemRegistry[379];
	constexpr inline auto& MELON = ItemRegistry[380];
	constexpr inline auto& VINE = ItemRegistry[381];
	constexpr inline auto& GLOW_LICHEN = ItemRegistry[382];
	constexpr inline auto& RESIN_CLUMP = ItemRegistry[383];
	constexpr inline auto& RESIN_BLOCK = ItemRegistry[384];
	constexpr inline auto& RESIN_BRICKS = ItemRegistry[385];
	constexpr inline auto& RESIN_BRICK_STAIRS = ItemRegistry[386];
	constexpr inline auto& RESIN_BRICK_SLAB = ItemRegistry[387];
	constexpr inline auto& RESIN_BRICK_WALL = ItemRegistry[388];
	constexpr inline auto& CHISELED_RESIN_BRICKS = ItemRegistry[389];
	constexpr inline auto& BRICK_STAIRS = ItemRegistry[390];
	constexpr inline auto& STONE_BRICK_STAIRS = ItemRegistry[391];
	constexpr inline auto& MUD_BRICK_STAIRS = ItemRegistry[392];
	constexpr inline auto& MYCELIUM = ItemRegistry[393];
	constexpr inline auto& LILY_PAD = ItemRegistry[394];
	constexpr inline auto& NETHER_BRICKS = ItemRegistry[395];
	constexpr inline auto& CRACKED_NETHER_BRICKS = ItemRegistry[396];
	constexpr inline auto& CHISELED_NETHER_BRICKS = ItemRegistry[397];
	constexpr inline auto& NETHER_BRICK_FENCE = ItemRegistry[398];
	constexpr inline auto& NETHER_BRICK_STAIRS = ItemRegistry[399];
	constexpr inline auto& SCULK = ItemRegistry[400];
	constexpr inline auto& SCULK_VEIN = ItemRegistry[401];
	constexpr inline auto& SCULK_CATALYST = ItemRegistry[402];
	constexpr inline auto& SCULK_SHRIEKER = ItemRegistry[403];
	constexpr inline auto& ENCHANTING_TABLE = ItemRegistry[404];
	constexpr inline auto& END_PORTAL_FRAME = ItemRegistry[405];
	constexpr inline auto& END_STONE = ItemRegistry[406];
	constexpr inline auto& END_STONE_BRICKS = ItemRegistry[407];
	constexpr inline auto& DRAGON_EGG = ItemRegistry[408];
	constexpr inline auto& SANDSTONE_STAIRS = ItemRegistry[409];
	constexpr inline auto& ENDER_CHEST = ItemRegistry[410];
	constexpr inline auto& EMERALD_BLOCK = ItemRegistry[411];
	constexpr inline auto& OAK_STAIRS = ItemRegistry[412];
	constexpr inline auto& SPRUCE_STAIRS = ItemRegistry[413];
	constexpr inline auto& BIRCH_STAIRS = ItemRegistry[414];
	constexpr inline auto& JUNGLE_STAIRS = ItemRegistry[415];
	constexpr inline auto& ACACIA_STAIRS = ItemRegistry[416];
	constexpr inline auto& CHERRY_STAIRS = ItemRegistry[417];
	constexpr inline auto& DARK_OAK_STAIRS = ItemRegistry[418];
	constexpr inline auto& PALE_OAK_STAIRS = ItemRegistry[419];
	constexpr inline auto& MANGROVE_STAIRS = ItemRegistry[420];
	constexpr inline auto& BAMBOO_STAIRS = ItemRegistry[421];
	constexpr inline auto& BAMBOO_MOSAIC_STAIRS = ItemRegistry[422];
	constexpr inline auto& CRIMSON_STAIRS = ItemRegistry[423];
	constexpr inline auto& WARPED_STAIRS = ItemRegistry[424];
	constexpr inline auto& COMMAND_BLOCK = ItemRegistry[425];
	constexpr inline auto& BEACON = ItemRegistry[426];
	constexpr inline auto& COBBLESTONE_WALL = ItemRegistry[427];
	constexpr inline auto& MOSSY_COBBLESTONE_WALL = ItemRegistry[428];
	constexpr inline auto& BRICK_WALL = ItemRegistry[429];
	constexpr inline auto& PRISMARINE_WALL = ItemRegistry[430];
	constexpr inline auto& RED_SANDSTONE_WALL = ItemRegistry[431];
	constexpr inline auto& MOSSY_STONE_BRICK_WALL = ItemRegistry[432];
	constexpr inline auto& GRANITE_WALL = ItemRegistry[433];
	constexpr inline auto& STONE_BRICK_WALL = ItemRegistry[434];
	constexpr inline auto& MUD_BRICK_WALL = ItemRegistry[435];
	constexpr inline auto& NETHER_BRICK_WALL = ItemRegistry[436];
	constexpr inline auto& ANDESITE_WALL = ItemRegistry[437];
	constexpr inline auto& RED_NETHER_BRICK_WALL = ItemRegistry[438];
	constexpr inline auto& SANDSTONE_WALL = ItemRegistry[439];
	constexpr inline auto& END_STONE_BRICK_WALL = ItemRegistry[440];
	constexpr inline auto& DIORITE_WALL = ItemRegistry[441];
	constexpr inline auto& BLACKSTONE_WALL = ItemRegistry[442];
	constexpr inline auto& POLISHED_BLACKSTONE_WALL = ItemRegistry[443];
	constexpr inline auto& POLISHED_BLACKSTONE_BRICK_WALL = ItemRegistry[444];
	constexpr inline auto& COBBLED_DEEPSLATE_WALL = ItemRegistry[445];
	constexpr inline auto& POLISHED_DEEPSLATE_WALL = ItemRegistry[446];
	constexpr inline auto& DEEPSLATE_BRICK_WALL = ItemRegistry[447];
	constexpr inline auto& DEEPSLATE_TILE_WALL = ItemRegistry[448];
	constexpr inline auto& ANVIL = ItemRegistry[449];
	constexpr inline auto& CHIPPED_ANVIL = ItemRegistry[450];
	constexpr inline auto& DAMAGED_ANVIL = ItemRegistry[451];
	constexpr inline auto& CHISELED_QUARTZ_BLOCK = ItemRegistry[452];
	constexpr inline auto& QUARTZ_BLOCK = ItemRegistry[453];
	constexpr inline auto& QUARTZ_BRICKS = ItemRegistry[454];
	constexpr inline auto& QUARTZ_PILLAR = ItemRegistry[455];
	constexpr inline auto& QUARTZ_STAIRS = ItemRegistry[456];
	constexpr inline auto& WHITE_TERRACOTTA = ItemRegistry[457];
	constexpr inline auto& ORANGE_TERRACOTTA = ItemRegistry[458];
	constexpr inline auto& MAGENTA_TERRACOTTA = ItemRegistry[459];
	constexpr inline auto& LIGHT_BLUE_TERRACOTTA = ItemRegistry[460];
	constexpr inline auto& YELLOW_TERRACOTTA = ItemRegistry[461];
	constexpr inline auto& LIME_TERRACOTTA = ItemRegistry[462];
	constexpr inline auto& PINK_TERRACOTTA = ItemRegistry[463];
	constexpr inline auto& GRAY_TERRACOTTA = ItemRegistry[464];
	constexpr inline auto& LIGHT_GRAY_TERRACOTTA = ItemRegistry[465];
	constexpr inline auto& CYAN_TERRACOTTA = ItemRegistry[466];
	constexpr inline auto& PURPLE_TERRACOTTA = ItemRegistry[467];
	constexpr inline auto& BLUE_TERRACOTTA = ItemRegistry[468];
	constexpr inline auto& BROWN_TERRACOTTA = ItemRegistry[469];
	constexpr inline auto& GREEN_TERRACOTTA = ItemRegistry[470];
	constexpr inline auto& RED_TERRACOTTA = ItemRegistry[471];
	constexpr inline auto& BLACK_TERRACOTTA = ItemRegistry[472];
	constexpr inline auto& BARRIER = ItemRegistry[473];
	constexpr inline auto& LIGHT = ItemRegistry[474];
	constexpr inline auto& HAY_BLOCK = ItemRegistry[475];
	constexpr inline auto& WHITE_CARPET = ItemRegistry[476];
	constexpr inline auto& ORANGE_CARPET = ItemRegistry[477];
	constexpr inline auto& MAGENTA_CARPET = ItemRegistry[478];
	constexpr inline auto& LIGHT_BLUE_CARPET = ItemRegistry[479];
	constexpr inline auto& YELLOW_CARPET = ItemRegistry[480];
	constexpr inline auto& LIME_CARPET = ItemRegistry[481];
	constexpr inline auto& PINK_CARPET = ItemRegistry[482];
	constexpr inline auto& GRAY_CARPET = ItemRegistry[483];
	constexpr inline auto& LIGHT_GRAY_CARPET = ItemRegistry[484];
	constexpr inline auto& CYAN_CARPET = ItemRegistry[485];
	constexpr inline auto& PURPLE_CARPET = ItemRegistry[486];
	constexpr inline auto& BLUE_CARPET = ItemRegistry[487];
	constexpr inline auto& BROWN_CARPET = ItemRegistry[488];
	constexpr inline auto& GREEN_CARPET = ItemRegistry[489];
	constexpr inline auto& RED_CARPET = ItemRegistry[490];
	constexpr inline auto& BLACK_CARPET = ItemRegistry[491];
	constexpr inline auto& TERRACOTTA = ItemRegistry[492];
	constexpr inline auto& PACKED_ICE = ItemRegistry[493];
	constexpr inline auto& DIRT_PATH = ItemRegistry[494];
	constexpr inline auto& SUNFLOWER = ItemRegistry[495];
	constexpr inline auto& LILAC = ItemRegistry[496];
	constexpr inline auto& ROSE_BUSH = ItemRegistry[497];
	constexpr inline auto& PEONY = ItemRegistry[498];
	constexpr inline auto& TALL_GRASS = ItemRegistry[499];
	constexpr inline auto& LARGE_FERN = ItemRegistry[500];
	constexpr inline auto& WHITE_STAINED_GLASS = ItemRegistry[501];
	constexpr inline auto& ORANGE_STAINED_GLASS = ItemRegistry[502];
	constexpr inline auto& MAGENTA_STAINED_GLASS = ItemRegistry[503];
	constexpr inline auto& LIGHT_BLUE_STAINED_GLASS = ItemRegistry[504];
	constexpr inline auto& YELLOW_STAINED_GLASS = ItemRegistry[505];
	constexpr inline auto& LIME_STAINED_GLASS = ItemRegistry[506];
	constexpr inline auto& PINK_STAINED_GLASS = ItemRegistry[507];
	constexpr inline auto& GRAY_STAINED_GLASS = ItemRegistry[508];
	constexpr inline auto& LIGHT_GRAY_STAINED_GLASS = ItemRegistry[509];
	constexpr inline auto& CYAN_STAINED_GLASS = ItemRegistry[510];
	constexpr inline auto& PURPLE_STAINED_GLASS = ItemRegistry[511];
	constexpr inline auto& BLUE_STAINED_GLASS = ItemRegistry[512];
	constexpr inline auto& BROWN_STAINED_GLASS = ItemRegistry[513];
	constexpr inline auto& GREEN_STAINED_GLASS = ItemRegistry[514];
	constexpr inline auto& RED_STAINED_GLASS = ItemRegistry[515];
	constexpr inline auto& BLACK_STAINED_GLASS = ItemRegistry[516];
	constexpr inline auto& WHITE_STAINED_GLASS_PANE = ItemRegistry[517];
	constexpr inline auto& ORANGE_STAINED_GLASS_PANE = ItemRegistry[518];
	constexpr inline auto& MAGENTA_STAINED_GLASS_PANE = ItemRegistry[519];
	constexpr inline auto& LIGHT_BLUE_STAINED_GLASS_PANE = ItemRegistry[520];
	constexpr inline auto& YELLOW_STAINED_GLASS_PANE = ItemRegistry[521];
	constexpr inline auto& LIME_STAINED_GLASS_PANE = ItemRegistry[522];
	constexpr inline auto& PINK_STAINED_GLASS_PANE = ItemRegistry[523];
	constexpr inline auto& GRAY_STAINED_GLASS_PANE = ItemRegistry[524];
	constexpr inline auto& LIGHT_GRAY_STAINED_GLASS_PANE = ItemRegistry[525];
	constexpr inline auto& CYAN_STAINED_GLASS_PANE = ItemRegistry[526];
	constexpr inline auto& PURPLE_STAINED_GLASS_PANE = ItemRegistry[527];
	constexpr inline auto& BLUE_STAINED_GLASS_PANE = ItemRegistry[528];
	constexpr inline auto& BROWN_STAINED_GLASS_PANE = ItemRegistry[529];
	constexpr inline auto& GREEN_STAINED_GLASS_PANE = ItemRegistry[530];
	constexpr inline auto& RED_STAINED_GLASS_PANE = ItemRegistry[531];
	constexpr inline auto& BLACK_STAINED_GLASS_PANE = ItemRegistry[532];
	constexpr inline auto& PRISMARINE = ItemRegistry[533];
	constexpr inline auto& PRISMARINE_BRICKS = ItemRegistry[534];
	constexpr inline auto& DARK_PRISMARINE = ItemRegistry[535];
	constexpr inline auto& PRISMARINE_STAIRS = ItemRegistry[536];
	constexpr inline auto& PRISMARINE_BRICK_STAIRS = ItemRegistry[537];
	constexpr inline auto& DARK_PRISMARINE_STAIRS = ItemRegistry[538];
	constexpr inline auto& SEA_LANTERN = ItemRegistry[539];
	constexpr inline auto& RED_SANDSTONE = ItemRegistry[540];
	constexpr inline auto& CHISELED_RED_SANDSTONE = ItemRegistry[541];
	constexpr inline auto& CUT_RED_SANDSTONE = ItemRegistry[542];
	constexpr inline auto& RED_SANDSTONE_STAIRS = ItemRegistry[543];
	constexpr inline auto& REPEATING_COMMAND_BLOCK = ItemRegistry[544];
	constexpr inline auto& CHAIN_COMMAND_BLOCK = ItemRegistry[545];
	constexpr inline auto& MAGMA_BLOCK = ItemRegistry[546];
	constexpr inline auto& NETHER_WART_BLOCK = ItemRegistry[547];
	constexpr inline auto& WARPED_WART_BLOCK = ItemRegistry[548];
	constexpr inline auto& RED_NETHER_BRICKS = ItemRegistry[549];
	constexpr inline auto& BONE_BLOCK = ItemRegistry[550];
	constexpr inline auto& STRUCTURE_VOID = ItemRegistry[551];
	constexpr inline auto& SHULKER_BOX = ItemRegistry[552];
	constexpr inline auto& WHITE_SHULKER_BOX = ItemRegistry[553];
	constexpr inline auto& ORANGE_SHULKER_BOX = ItemRegistry[554];
	constexpr inline auto& MAGENTA_SHULKER_BOX = ItemRegistry[555];
	constexpr inline auto& LIGHT_BLUE_SHULKER_BOX = ItemRegistry[556];
	constexpr inline auto& YELLOW_SHULKER_BOX = ItemRegistry[557];
	constexpr inline auto& LIME_SHULKER_BOX = ItemRegistry[558];
	constexpr inline auto& PINK_SHULKER_BOX = ItemRegistry[559];
	constexpr inline auto& GRAY_SHULKER_BOX = ItemRegistry[560];
	constexpr inline auto& LIGHT_GRAY_SHULKER_BOX = ItemRegistry[561];
	constexpr inline auto& CYAN_SHULKER_BOX = ItemRegistry[562];
	constexpr inline auto& PURPLE_SHULKER_BOX = ItemRegistry[563];
	constexpr inline auto& BLUE_SHULKER_BOX = ItemRegistry[564];
	constexpr inline auto& BROWN_SHULKER_BOX = ItemRegistry[565];
	constexpr inline auto& GREEN_SHULKER_BOX = ItemRegistry[566];
	constexpr inline auto& RED_SHULKER_BOX = ItemRegistry[567];
	constexpr inline auto& BLACK_SHULKER_BOX = ItemRegistry[568];
	constexpr inline auto& WHITE_GLAZED_TERRACOTTA = ItemRegistry[569];
	constexpr inline auto& ORANGE_GLAZED_TERRACOTTA = ItemRegistry[570];
	constexpr inline auto& MAGENTA_GLAZED_TERRACOTTA = ItemRegistry[571];
	constexpr inline auto& LIGHT_BLUE_GLAZED_TERRACOTTA = ItemRegistry[572];
	constexpr inline auto& YELLOW_GLAZED_TERRACOTTA = ItemRegistry[573];
	constexpr inline auto& LIME_GLAZED_TERRACOTTA = ItemRegistry[574];
	constexpr inline auto& PINK_GLAZED_TERRACOTTA = ItemRegistry[575];
	constexpr inline auto& GRAY_GLAZED_TERRACOTTA = ItemRegistry[576];
	constexpr inline auto& LIGHT_GRAY_GLAZED_TERRACOTTA = ItemRegistry[577];
	constexpr inline auto& CYAN_GLAZED_TERRACOTTA = ItemRegistry[578];
	constexpr inline auto& PURPLE_GLAZED_TERRACOTTA = ItemRegistry[579];
	constexpr inline auto& BLUE_GLAZED_TERRACOTTA = ItemRegistry[580];
	constexpr inline auto& BROWN_GLAZED_TERRACOTTA = ItemRegistry[581];
	constexpr inline auto& GREEN_GLAZED_TERRACOTTA = ItemRegistry[582];
	constexpr inline auto& RED_GLAZED_TERRACOTTA = ItemRegistry[583];
	constexpr inline auto& BLACK_GLAZED_TERRACOTTA = ItemRegistry[584];
	constexpr inline auto& WHITE_CONCRETE = ItemRegistry[585];
	constexpr inline auto& ORANGE_CONCRETE = ItemRegistry[586];
	constexpr inline auto& MAGENTA_CONCRETE = ItemRegistry[587];
	constexpr inline auto& LIGHT_BLUE_CONCRETE = ItemRegistry[588];
	constexpr inline auto& YELLOW_CONCRETE = ItemRegistry[589];
	constexpr inline auto& LIME_CONCRETE = ItemRegistry[590];
	constexpr inline auto& PINK_CONCRETE = ItemRegistry[591];
	constexpr inline auto& GRAY_CONCRETE = ItemRegistry[592];
	constexpr inline auto& LIGHT_GRAY_CONCRETE = ItemRegistry[593];
	constexpr inline auto& CYAN_CONCRETE = ItemRegistry[594];
	constexpr inline auto& PURPLE_CONCRETE = ItemRegistry[595];
	constexpr inline auto& BLUE_CONCRETE = ItemRegistry[596];
	constexpr inline auto& BROWN_CONCRETE = ItemRegistry[597];
	constexpr inline auto& GREEN_CONCRETE = ItemRegistry[598];
	constexpr inline auto& RED_CONCRETE = ItemRegistry[599];
	constexpr inline auto& BLACK_CONCRETE = ItemRegistry[600];
	constexpr inline auto& WHITE_CONCRETE_POWDER = ItemRegistry[601];
	constexpr inline auto& ORANGE_CONCRETE_POWDER = ItemRegistry[602];
	constexpr inline auto& MAGENTA_CONCRETE_POWDER = ItemRegistry[603];
	constexpr inline auto& LIGHT_BLUE_CONCRETE_POWDER = ItemRegistry[604];
	constexpr inline auto& YELLOW_CONCRETE_POWDER = ItemRegistry[605];
	constexpr inline auto& LIME_CONCRETE_POWDER = ItemRegistry[606];
	constexpr inline auto& PINK_CONCRETE_POWDER = ItemRegistry[607];
	constexpr inline auto& GRAY_CONCRETE_POWDER = ItemRegistry[608];
	constexpr inline auto& LIGHT_GRAY_CONCRETE_POWDER = ItemRegistry[609];
	constexpr inline auto& CYAN_CONCRETE_POWDER = ItemRegistry[610];
	constexpr inline auto& PURPLE_CONCRETE_POWDER = ItemRegistry[611];
	constexpr inline auto& BLUE_CONCRETE_POWDER = ItemRegistry[612];
	constexpr inline auto& BROWN_CONCRETE_POWDER = ItemRegistry[613];
	constexpr inline auto& GREEN_CONCRETE_POWDER = ItemRegistry[614];
	constexpr inline auto& RED_CONCRETE_POWDER = ItemRegistry[615];
	constexpr inline auto& BLACK_CONCRETE_POWDER = ItemRegistry[616];
	constexpr inline auto& TURTLE_EGG = ItemRegistry[617];
	constexpr inline auto& SNIFFER_EGG = ItemRegistry[618];
	constexpr inline auto& DEAD_TUBE_CORAL_BLOCK = ItemRegistry[619];
	constexpr inline auto& DEAD_BRAIN_CORAL_BLOCK = ItemRegistry[620];
	constexpr inline auto& DEAD_BUBBLE_CORAL_BLOCK = ItemRegistry[621];
	constexpr inline auto& DEAD_FIRE_CORAL_BLOCK = ItemRegistry[622];
	constexpr inline auto& DEAD_HORN_CORAL_BLOCK = ItemRegistry[623];
	constexpr inline auto& TUBE_CORAL_BLOCK = ItemRegistry[624];
	constexpr inline auto& BRAIN_CORAL_BLOCK = ItemRegistry[625];
	constexpr inline auto& BUBBLE_CORAL_BLOCK = ItemRegistry[626];
	constexpr inline auto& FIRE_CORAL_BLOCK = ItemRegistry[627];
	constexpr inline auto& HORN_CORAL_BLOCK = ItemRegistry[628];
	constexpr inline auto& TUBE_CORAL = ItemRegistry[629];
	constexpr inline auto& BRAIN_CORAL = ItemRegistry[630];
	constexpr inline auto& BUBBLE_CORAL = ItemRegistry[631];
	constexpr inline auto& FIRE_CORAL = ItemRegistry[632];
	constexpr inline auto& HORN_CORAL = ItemRegistry[633];
	constexpr inline auto& DEAD_BRAIN_CORAL = ItemRegistry[634];
	constexpr inline auto& DEAD_BUBBLE_CORAL = ItemRegistry[635];
	constexpr inline auto& DEAD_FIRE_CORAL = ItemRegistry[636];
	constexpr inline auto& DEAD_HORN_CORAL = ItemRegistry[637];
	constexpr inline auto& DEAD_TUBE_CORAL = ItemRegistry[638];
	constexpr inline auto& TUBE_CORAL_FAN = ItemRegistry[639];
	constexpr inline auto& BRAIN_CORAL_FAN = ItemRegistry[640];
	constexpr inline auto& BUBBLE_CORAL_FAN = ItemRegistry[641];
	constexpr inline auto& FIRE_CORAL_FAN = ItemRegistry[642];
	constexpr inline auto& HORN_CORAL_FAN = ItemRegistry[643];
	constexpr inline auto& DEAD_TUBE_CORAL_FAN = ItemRegistry[644];
	constexpr inline auto& DEAD_BRAIN_CORAL_FAN = ItemRegistry[645];
	constexpr inline auto& DEAD_BUBBLE_CORAL_FAN = ItemRegistry[646];
	constexpr inline auto& DEAD_FIRE_CORAL_FAN = ItemRegistry[647];
	constexpr inline auto& DEAD_HORN_CORAL_FAN = ItemRegistry[648];
	constexpr inline auto& BLUE_ICE = ItemRegistry[649];
	constexpr inline auto& CONDUIT = ItemRegistry[650];
	constexpr inline auto& POLISHED_GRANITE_STAIRS = ItemRegistry[651];
	constexpr inline auto& SMOOTH_RED_SANDSTONE_STAIRS = ItemRegistry[652];
	constexpr inline auto& MOSSY_STONE_BRICK_STAIRS = ItemRegistry[653];
	constexpr inline auto& POLISHED_DIORITE_STAIRS = ItemRegistry[654];
	constexpr inline auto& MOSSY_COBBLESTONE_STAIRS = ItemRegistry[655];
	constexpr inline auto& END_STONE_BRICK_STAIRS = ItemRegistry[656];
	constexpr inline auto& STONE_STAIRS = ItemRegistry[657];
	constexpr inline auto& SMOOTH_SANDSTONE_STAIRS = ItemRegistry[658];
	constexpr inline auto& SMOOTH_QUARTZ_STAIRS = ItemRegistry[659];
	constexpr inline auto& GRANITE_STAIRS = ItemRegistry[660];
	constexpr inline auto& ANDESITE_STAIRS = ItemRegistry[661];
	constexpr inline auto& RED_NETHER_BRICK_STAIRS = ItemRegistry[662];
	constexpr inline auto& POLISHED_ANDESITE_STAIRS = ItemRegistry[663];
	constexpr inline auto& DIORITE_STAIRS = ItemRegistry[664];
	constexpr inline auto& COBBLED_DEEPSLATE_STAIRS = ItemRegistry[665];
	constexpr inline auto& POLISHED_DEEPSLATE_STAIRS = ItemRegistry[666];
	constexpr inline auto& DEEPSLATE_BRICK_STAIRS = ItemRegistry[667];
	constexpr inline auto& DEEPSLATE_TILE_STAIRS = ItemRegistry[668];
	constexpr inline auto& POLISHED_GRANITE_SLAB = ItemRegistry[669];
	constexpr inline auto& SMOOTH_RED_SANDSTONE_SLAB = ItemRegistry[670];
	constexpr inline auto& MOSSY_STONE_BRICK_SLAB = ItemRegistry[671];
	constexpr inline auto& POLISHED_DIORITE_SLAB = ItemRegistry[672];
	constexpr inline auto& MOSSY_COBBLESTONE_SLAB = ItemRegistry[673];
	constexpr inline auto& END_STONE_BRICK_SLAB = ItemRegistry[674];
	constexpr inline auto& SMOOTH_SANDSTONE_SLAB = ItemRegistry[675];
	constexpr inline auto& SMOOTH_QUARTZ_SLAB = ItemRegistry[676];
	constexpr inline auto& GRANITE_SLAB = ItemRegistry[677];
	constexpr inline auto& ANDESITE_SLAB = ItemRegistry[678];
	constexpr inline auto& RED_NETHER_BRICK_SLAB = ItemRegistry[679];
	constexpr inline auto& POLISHED_ANDESITE_SLAB = ItemRegistry[680];
	constexpr inline auto& DIORITE_SLAB = ItemRegistry[681];
	constexpr inline auto& COBBLED_DEEPSLATE_SLAB = ItemRegistry[682];
	constexpr inline auto& POLISHED_DEEPSLATE_SLAB = ItemRegistry[683];
	constexpr inline auto& DEEPSLATE_BRICK_SLAB = ItemRegistry[684];
	constexpr inline auto& DEEPSLATE_TILE_SLAB = ItemRegistry[685];
	constexpr inline auto& SCAFFOLDING = ItemRegistry[686];
	constexpr inline auto& REDSTONE = ItemRegistry[687];
	constexpr inline auto& REDSTONE_TORCH = ItemRegistry[688];
	constexpr inline auto& REDSTONE_BLOCK = ItemRegistry[689];
	constexpr inline auto& REPEATER = ItemRegistry[690];
	constexpr inline auto& COMPARATOR = ItemRegistry[691];
	constexpr inline auto& PISTON = ItemRegistry[692];
	constexpr inline auto& STICKY_PISTON = ItemRegistry[693];
	constexpr inline auto& SLIME_BLOCK = ItemRegistry[694];
	constexpr inline auto& HONEY_BLOCK = ItemRegistry[695];
	constexpr inline auto& OBSERVER = ItemRegistry[696];
	constexpr inline auto& HOPPER = ItemRegistry[697];
	constexpr inline auto& DISPENSER = ItemRegistry[698];
	constexpr inline auto& DROPPER = ItemRegistry[699];
	constexpr inline auto& LECTERN = ItemRegistry[700];
	constexpr inline auto& TARGET = ItemRegistry[701];
	constexpr inline auto& LEVER = ItemRegistry[702];
	constexpr inline auto& LIGHTNING_ROD = ItemRegistry[703];
	constexpr inline auto& DAYLIGHT_DETECTOR = ItemRegistry[704];
	constexpr inline auto& SCULK_SENSOR = ItemRegistry[705];
	constexpr inline auto& CALIBRATED_SCULK_SENSOR = ItemRegistry[706];
	constexpr inline auto& TRIPWIRE_HOOK = ItemRegistry[707];
	constexpr inline auto& TRAPPED_CHEST = ItemRegistry[708];
	constexpr inline auto& TNT = ItemRegistry[709];
	constexpr inline auto& REDSTONE_LAMP = ItemRegistry[710];
	constexpr inline auto& NOTE_BLOCK = ItemRegistry[711];
	constexpr inline auto& STONE_BUTTON = ItemRegistry[712];
	constexpr inline auto& POLISHED_BLACKSTONE_BUTTON = ItemRegistry[713];
	constexpr inline auto& OAK_BUTTON = ItemRegistry[714];
	constexpr inline auto& SPRUCE_BUTTON = ItemRegistry[715];
	constexpr inline auto& BIRCH_BUTTON = ItemRegistry[716];
	constexpr inline auto& JUNGLE_BUTTON = ItemRegistry[717];
	constexpr inline auto& ACACIA_BUTTON = ItemRegistry[718];
	constexpr inline auto& CHERRY_BUTTON = ItemRegistry[719];
	constexpr inline auto& DARK_OAK_BUTTON = ItemRegistry[720];
	constexpr inline auto& PALE_OAK_BUTTON = ItemRegistry[721];
	constexpr inline auto& MANGROVE_BUTTON = ItemRegistry[722];
	constexpr inline auto& BAMBOO_BUTTON = ItemRegistry[723];
	constexpr inline auto& CRIMSON_BUTTON = ItemRegistry[724];
	constexpr inline auto& WARPED_BUTTON = ItemRegistry[725];
	constexpr inline auto& STONE_PRESSURE_PLATE = ItemRegistry[726];
	constexpr inline auto& POLISHED_BLACKSTONE_PRESSURE_PLATE = ItemRegistry[727];
	constexpr inline auto& LIGHT_WEIGHTED_PRESSURE_PLATE = ItemRegistry[728];
	constexpr inline auto& HEAVY_WEIGHTED_PRESSURE_PLATE = ItemRegistry[729];
	constexpr inline auto& OAK_PRESSURE_PLATE = ItemRegistry[730];
	constexpr inline auto& SPRUCE_PRESSURE_PLATE = ItemRegistry[731];
	constexpr inline auto& BIRCH_PRESSURE_PLATE = ItemRegistry[732];
	constexpr inline auto& JUNGLE_PRESSURE_PLATE = ItemRegistry[733];
	constexpr inline auto& ACACIA_PRESSURE_PLATE = ItemRegistry[734];
	constexpr inline auto& CHERRY_PRESSURE_PLATE = ItemRegistry[735];
	constexpr inline auto& DARK_OAK_PRESSURE_PLATE = ItemRegistry[736];
	constexpr inline auto& PALE_OAK_PRESSURE_PLATE = ItemRegistry[737];
	constexpr inline auto& MANGROVE_PRESSURE_PLATE = ItemRegistry[738];
	constexpr inline auto& BAMBOO_PRESSURE_PLATE = ItemRegistry[739];
	constexpr inline auto& CRIMSON_PRESSURE_PLATE = ItemRegistry[740];
	constexpr inline auto& WARPED_PRESSURE_PLATE = ItemRegistry[741];
	constexpr inline auto& IRON_DOOR = ItemRegistry[742];
	constexpr inline auto& OAK_DOOR = ItemRegistry[743];
	constexpr inline auto& SPRUCE_DOOR = ItemRegistry[744];
	constexpr inline auto& BIRCH_DOOR = ItemRegistry[745];
	constexpr inline auto& JUNGLE_DOOR = ItemRegistry[746];
	constexpr inline auto& ACACIA_DOOR = ItemRegistry[747];
	constexpr inline auto& CHERRY_DOOR = ItemRegistry[748];
	constexpr inline auto& DARK_OAK_DOOR = ItemRegistry[749];
	constexpr inline auto& PALE_OAK_DOOR = ItemRegistry[750];
	constexpr inline auto& MANGROVE_DOOR = ItemRegistry[751];
	constexpr inline auto& BAMBOO_DOOR = ItemRegistry[752];
	constexpr inline auto& CRIMSON_DOOR = ItemRegistry[753];
	constexpr inline auto& WARPED_DOOR = ItemRegistry[754];
	constexpr inline auto& COPPER_DOOR = ItemRegistry[755];
	constexpr inline auto& EXPOSED_COPPER_DOOR = ItemRegistry[756];
	constexpr inline auto& WEATHERED_COPPER_DOOR = ItemRegistry[757];
	constexpr inline auto& OXIDIZED_COPPER_DOOR = ItemRegistry[758];
	constexpr inline auto& WAXED_COPPER_DOOR = ItemRegistry[759];
	constexpr inline auto& WAXED_EXPOSED_COPPER_DOOR = ItemRegistry[760];
	constexpr inline auto& WAXED_WEATHERED_COPPER_DOOR = ItemRegistry[761];
	constexpr inline auto& WAXED_OXIDIZED_COPPER_DOOR = ItemRegistry[762];
	constexpr inline auto& IRON_TRAPDOOR = ItemRegistry[763];
	constexpr inline auto& OAK_TRAPDOOR = ItemRegistry[764];
	constexpr inline auto& SPRUCE_TRAPDOOR = ItemRegistry[765];
	constexpr inline auto& BIRCH_TRAPDOOR = ItemRegistry[766];
	constexpr inline auto& JUNGLE_TRAPDOOR = ItemRegistry[767];
	constexpr inline auto& ACACIA_TRAPDOOR = ItemRegistry[768];
	constexpr inline auto& CHERRY_TRAPDOOR = ItemRegistry[769];
	constexpr inline auto& DARK_OAK_TRAPDOOR = ItemRegistry[770];
	constexpr inline auto& PALE_OAK_TRAPDOOR = ItemRegistry[771];
	constexpr inline auto& MANGROVE_TRAPDOOR = ItemRegistry[772];
	constexpr inline auto& BAMBOO_TRAPDOOR = ItemRegistry[773];
	constexpr inline auto& CRIMSON_TRAPDOOR = ItemRegistry[774];
	constexpr inline auto& WARPED_TRAPDOOR = ItemRegistry[775];
	constexpr inline auto& COPPER_TRAPDOOR = ItemRegistry[776];
	constexpr inline auto& EXPOSED_COPPER_TRAPDOOR = ItemRegistry[777];
	constexpr inline auto& WEATHERED_COPPER_TRAPDOOR = ItemRegistry[778];
	constexpr inline auto& OXIDIZED_COPPER_TRAPDOOR = ItemRegistry[779];
	constexpr inline auto& WAXED_COPPER_TRAPDOOR = ItemRegistry[780];
	constexpr inline auto& WAXED_EXPOSED_COPPER_TRAPDOOR = ItemRegistry[781];
	constexpr inline auto& WAXED_WEATHERED_COPPER_TRAPDOOR = ItemRegistry[782];
	constexpr inline auto& WAXED_OXIDIZED_COPPER_TRAPDOOR = ItemRegistry[783];
	constexpr inline auto& OAK_FENCE_GATE = ItemRegistry[784];
	constexpr inline auto& SPRUCE_FENCE_GATE = ItemRegistry[785];
	constexpr inline auto& BIRCH_FENCE_GATE = ItemRegistry[786];
	constexpr inline auto& JUNGLE_FENCE_GATE = ItemRegistry[787];
	constexpr inline auto& ACACIA_FENCE_GATE = ItemRegistry[788];
	constexpr inline auto& CHERRY_FENCE_GATE = ItemRegistry[789];
	constexpr inline auto& DARK_OAK_FENCE_GATE = ItemRegistry[790];
	constexpr inline auto& PALE_OAK_FENCE_GATE = ItemRegistry[791];
	constexpr inline auto& MANGROVE_FENCE_GATE = ItemRegistry[792];
	constexpr inline auto& BAMBOO_FENCE_GATE = ItemRegistry[793];
	constexpr inline auto& CRIMSON_FENCE_GATE = ItemRegistry[794];
	constexpr inline auto& WARPED_FENCE_GATE = ItemRegistry[795];
	constexpr inline auto& POWERED_RAIL = ItemRegistry[796];
	constexpr inline auto& DETECTOR_RAIL = ItemRegistry[797];
	constexpr inline auto& RAIL = ItemRegistry[798];
	constexpr inline auto& ACTIVATOR_RAIL = ItemRegistry[799];
	constexpr inline auto& SADDLE = ItemRegistry[800];
	constexpr inline auto& MINECART = ItemRegistry[801];
	constexpr inline auto& CHEST_MINECART = ItemRegistry[802];
	constexpr inline auto& FURNACE_MINECART = ItemRegistry[803];
	constexpr inline auto& TNT_MINECART = ItemRegistry[804];
	constexpr inline auto& HOPPER_MINECART = ItemRegistry[805];
	constexpr inline auto& CARROT_ON_A_STICK = ItemRegistry[806];
	constexpr inline auto& WARPED_FUNGUS_ON_A_STICK = ItemRegistry[807];
	constexpr inline auto& PHANTOM_MEMBRANE = ItemRegistry[808];
	constexpr inline auto& ELYTRA = ItemRegistry[809];
	constexpr inline auto& OAK_BOAT = ItemRegistry[810];
	constexpr inline auto& OAK_CHEST_BOAT = ItemRegistry[811];
	constexpr inline auto& SPRUCE_BOAT = ItemRegistry[812];
	constexpr inline auto& SPRUCE_CHEST_BOAT = ItemRegistry[813];
	constexpr inline auto& BIRCH_BOAT = ItemRegistry[814];
	constexpr inline auto& BIRCH_CHEST_BOAT = ItemRegistry[815];
	constexpr inline auto& JUNGLE_BOAT = ItemRegistry[816];
	constexpr inline auto& JUNGLE_CHEST_BOAT = ItemRegistry[817];
	constexpr inline auto& ACACIA_BOAT = ItemRegistry[818];
	constexpr inline auto& ACACIA_CHEST_BOAT = ItemRegistry[819];
	constexpr inline auto& CHERRY_BOAT = ItemRegistry[820];
	constexpr inline auto& CHERRY_CHEST_BOAT = ItemRegistry[821];
	constexpr inline auto& DARK_OAK_BOAT = ItemRegistry[822];
	constexpr inline auto& DARK_OAK_CHEST_BOAT = ItemRegistry[823];
	constexpr inline auto& PALE_OAK_BOAT = ItemRegistry[824];
	constexpr inline auto& PALE_OAK_CHEST_BOAT = ItemRegistry[825];
	constexpr inline auto& MANGROVE_BOAT = ItemRegistry[826];
	constexpr inline auto& MANGROVE_CHEST_BOAT = ItemRegistry[827];
	constexpr inline auto& BAMBOO_RAFT = ItemRegistry[828];
	constexpr inline auto& BAMBOO_CHEST_RAFT = ItemRegistry[829];
	constexpr inline auto& STRUCTURE_BLOCK = ItemRegistry[830];
	constexpr inline auto& JIGSAW = ItemRegistry[831];
	constexpr inline auto& TEST_BLOCK = ItemRegistry[832];
	constexpr inline auto& TEST_INSTANCE_BLOCK = ItemRegistry[833];
	constexpr inline auto& TURTLE_HELMET = ItemRegistry[834];
	constexpr inline auto& TURTLE_SCUTE = ItemRegistry[835];
	constexpr inline auto& ARMADILLO_SCUTE = ItemRegistry[836];
	constexpr inline auto& WOLF_ARMOR = ItemRegistry[837];
	constexpr inline auto& FLINT_AND_STEEL = ItemRegistry[838];
	constexpr inline auto& BOWL = ItemRegistry[839];
	constexpr inline auto& APPLE = ItemRegistry[840];
	constexpr inline auto& BOW = ItemRegistry[841];
	constexpr inline auto& ARROW = ItemRegistry[842];
	constexpr inline auto& COAL = ItemRegistry[843];
	constexpr inline auto& CHARCOAL = ItemRegistry[844];
	constexpr inline auto& DIAMOND = ItemRegistry[845];
	constexpr inline auto& EMERALD = ItemRegistry[846];
	constexpr inline auto& LAPIS_LAZULI = ItemRegistry[847];
	constexpr inline auto& QUARTZ = ItemRegistry[848];
	constexpr inline auto& AMETHYST_SHARD = ItemRegistry[849];
	constexpr inline auto& RAW_IRON = ItemRegistry[850];
	constexpr inline auto& IRON_INGOT = ItemRegistry[851];
	constexpr inline auto& RAW_COPPER = ItemRegistry[852];
	constexpr inline auto& COPPER_INGOT = ItemRegistry[853];
	constexpr inline auto& RAW_GOLD = ItemRegistry[854];
	constexpr inline auto& GOLD_INGOT = ItemRegistry[855];
	constexpr inline auto& NETHERITE_INGOT = ItemRegistry[856];
	constexpr inline auto& NETHERITE_SCRAP = ItemRegistry[857];
	constexpr inline auto& WOODEN_SWORD = ItemRegistry[858];
	constexpr inline auto& WOODEN_SHOVEL = ItemRegistry[859];
	constexpr inline auto& WOODEN_PICKAXE = ItemRegistry[860];
	constexpr inline auto& WOODEN_AXE = ItemRegistry[861];
	constexpr inline auto& WOODEN_HOE = ItemRegistry[862];
	constexpr inline auto& STONE_SWORD = ItemRegistry[863];
	constexpr inline auto& STONE_SHOVEL = ItemRegistry[864];
	constexpr inline auto& STONE_PICKAXE = ItemRegistry[865];
	constexpr inline auto& STONE_AXE = ItemRegistry[866];
	constexpr inline auto& STONE_HOE = ItemRegistry[867];
	constexpr inline auto& GOLDEN_SWORD = ItemRegistry[868];
	constexpr inline auto& GOLDEN_SHOVEL = ItemRegistry[869];
	constexpr inline auto& GOLDEN_PICKAXE = ItemRegistry[870];
	constexpr inline auto& GOLDEN_AXE = ItemRegistry[871];
	constexpr inline auto& GOLDEN_HOE = ItemRegistry[872];
	constexpr inline auto& IRON_SWORD = ItemRegistry[873];
	constexpr inline auto& IRON_SHOVEL = ItemRegistry[874];
	constexpr inline auto& IRON_PICKAXE = ItemRegistry[875];
	constexpr inline auto& IRON_AXE = ItemRegistry[876];
	constexpr inline auto& IRON_HOE = ItemRegistry[877];
	constexpr inline auto& DIAMOND_SWORD = ItemRegistry[878];
	constexpr inline auto& DIAMOND_SHOVEL = ItemRegistry[879];
	constexpr inline auto& DIAMOND_PICKAXE = ItemRegistry[880];
	constexpr inline auto& DIAMOND_AXE = ItemRegistry[881];
	constexpr inline auto& DIAMOND_HOE = ItemRegistry[882];
	constexpr inline auto& NETHERITE_SWORD = ItemRegistry[883];
	constexpr inline auto& NETHERITE_SHOVEL = ItemRegistry[884];
	constexpr inline auto& NETHERITE_PICKAXE = ItemRegistry[885];
	constexpr inline auto& NETHERITE_AXE = ItemRegistry[886];
	constexpr inline auto& NETHERITE_HOE = ItemRegistry[887];
	constexpr inline auto& STICK = ItemRegistry[888];
	constexpr inline auto& MUSHROOM_STEW = ItemRegistry[889];
	constexpr inline auto& STRING = ItemRegistry[890];
	constexpr inline auto& FEATHER = ItemRegistry[891];
	constexpr inline auto& GUNPOWDER = ItemRegistry[892];
	constexpr inline auto& WHEAT_SEEDS = ItemRegistry[893];
	constexpr inline auto& WHEAT = ItemRegistry[894];
	constexpr inline auto& BREAD = ItemRegistry[895];
	constexpr inline auto& LEATHER_HELMET = ItemRegistry[896];
	constexpr inline auto& LEATHER_CHESTPLATE = ItemRegistry[897];
	constexpr inline auto& LEATHER_LEGGINGS = ItemRegistry[898];
	constexpr inline auto& LEATHER_BOOTS = ItemRegistry[899];
	constexpr inline auto& CHAINMAIL_HELMET = ItemRegistry[900];
	constexpr inline auto& CHAINMAIL_CHESTPLATE = ItemRegistry[901];
	constexpr inline auto& CHAINMAIL_LEGGINGS = ItemRegistry[902];
	constexpr inline auto& CHAINMAIL_BOOTS = ItemRegistry[903];
	constexpr inline auto& IRON_HELMET = ItemRegistry[904];
	constexpr inline auto& IRON_CHESTPLATE = ItemRegistry[905];
	constexpr inline auto& IRON_LEGGINGS = ItemRegistry[906];
	constexpr inline auto& IRON_BOOTS = ItemRegistry[907];
	constexpr inline auto& DIAMOND_HELMET = ItemRegistry[908];
	constexpr inline auto& DIAMOND_CHESTPLATE = ItemRegistry[909];
	constexpr inline auto& DIAMOND_LEGGINGS = ItemRegistry[910];
	constexpr inline auto& DIAMOND_BOOTS = ItemRegistry[911];
	constexpr inline auto& GOLDEN_HELMET = ItemRegistry[912];
	constexpr inline auto& GOLDEN_CHESTPLATE = ItemRegistry[913];
	constexpr inline auto& GOLDEN_LEGGINGS = ItemRegistry[914];
	constexpr inline auto& GOLDEN_BOOTS = ItemRegistry[915];
	constexpr inline auto& NETHERITE_HELMET = ItemRegistry[916];
	constexpr inline auto& NETHERITE_CHESTPLATE = ItemRegistry[917];
	constexpr inline auto& NETHERITE_LEGGINGS = ItemRegistry[918];
	constexpr inline auto& NETHERITE_BOOTS = ItemRegistry[919];
	constexpr inline auto& FLINT = ItemRegistry[920];
	constexpr inline auto& PORKCHOP = ItemRegistry[921];
	constexpr inline auto& COOKED_PORKCHOP = ItemRegistry[922];
	constexpr inline auto& PAINTING = ItemRegistry[923];
	constexpr inline auto& GOLDEN_APPLE = ItemRegistry[924];
	constexpr inline auto& ENCHANTED_GOLDEN_APPLE = ItemRegistry[925];
	constexpr inline auto& OAK_SIGN = ItemRegistry[926];
	constexpr inline auto& SPRUCE_SIGN = ItemRegistry[927];
	constexpr inline auto& BIRCH_SIGN = ItemRegistry[928];
	constexpr inline auto& JUNGLE_SIGN = ItemRegistry[929];
	constexpr inline auto& ACACIA_SIGN = ItemRegistry[930];
	constexpr inline auto& CHERRY_SIGN = ItemRegistry[931];
	constexpr inline auto& DARK_OAK_SIGN = ItemRegistry[932];
	constexpr inline auto& PALE_OAK_SIGN = ItemRegistry[933];
	constexpr inline auto& MANGROVE_SIGN = ItemRegistry[934];
	constexpr inline auto& BAMBOO_SIGN = ItemRegistry[935];
	constexpr inline auto& CRIMSON_SIGN = ItemRegistry[936];
	constexpr inline auto& WARPED_SIGN = ItemRegistry[937];
	constexpr inline auto& OAK_HANGING_SIGN = ItemRegistry[938];
	constexpr inline auto& SPRUCE_HANGING_SIGN = ItemRegistry[939];
	constexpr inline auto& BIRCH_HANGING_SIGN = ItemRegistry[940];
	constexpr inline auto& JUNGLE_HANGING_SIGN = ItemRegistry[941];
	constexpr inline auto& ACACIA_HANGING_SIGN = ItemRegistry[942];
	constexpr inline auto& CHERRY_HANGING_SIGN = ItemRegistry[943];
	constexpr inline auto& DARK_OAK_HANGING_SIGN = ItemRegistry[944];
	constexpr inline auto& PALE_OAK_HANGING_SIGN = ItemRegistry[945];
	constexpr inline auto& MANGROVE_HANGING_SIGN = ItemRegistry[946];
	constexpr inline auto& BAMBOO_HANGING_SIGN = ItemRegistry[947];
	constexpr inline auto& CRIMSON_HANGING_SIGN = ItemRegistry[948];
	constexpr inline auto& WARPED_HANGING_SIGN = ItemRegistry[949];
	constexpr inline auto& BUCKET = ItemRegistry[950];
	constexpr inline auto& WATER_BUCKET = ItemRegistry[951];
	constexpr inline auto& LAVA_BUCKET = ItemRegistry[952];
	constexpr inline auto& POWDER_SNOW_BUCKET = ItemRegistry[953];
	constexpr inline auto& SNOWBALL = ItemRegistry[954];
	constexpr inline auto& LEATHER = ItemRegistry[955];
	constexpr inline auto& MILK_BUCKET = ItemRegistry[956];
	constexpr inline auto& PUFFERFISH_BUCKET = ItemRegistry[957];
	constexpr inline auto& SALMON_BUCKET = ItemRegistry[958];
	constexpr inline auto& COD_BUCKET = ItemRegistry[959];
	constexpr inline auto& TROPICAL_FISH_BUCKET = ItemRegistry[960];
	constexpr inline auto& AXOLOTL_BUCKET = ItemRegistry[961];
	constexpr inline auto& TADPOLE_BUCKET = ItemRegistry[962];
	constexpr inline auto& BRICK = ItemRegistry[963];
	constexpr inline auto& CLAY_BALL = ItemRegistry[964];
	constexpr inline auto& DRIED_KELP_BLOCK = ItemRegistry[965];
	constexpr inline auto& PAPER = ItemRegistry[966];
	constexpr inline auto& BOOK = ItemRegistry[967];
	constexpr inline auto& SLIME_BALL = ItemRegistry[968];
	constexpr inline auto& EGG = ItemRegistry[969];
	constexpr inline auto& BLUE_EGG = ItemRegistry[970];
	constexpr inline auto& BROWN_EGG = ItemRegistry[971];
	constexpr inline auto& COMPASS = ItemRegistry[972];
	constexpr inline auto& RECOVERY_COMPASS = ItemRegistry[973];
	constexpr inline auto& BUNDLE = ItemRegistry[974];
	constexpr inline auto& WHITE_BUNDLE = ItemRegistry[975];
	constexpr inline auto& ORANGE_BUNDLE = ItemRegistry[976];
	constexpr inline auto& MAGENTA_BUNDLE = ItemRegistry[977];
	constexpr inline auto& LIGHT_BLUE_BUNDLE = ItemRegistry[978];
	constexpr inline auto& YELLOW_BUNDLE = ItemRegistry[979];
	constexpr inline auto& LIME_BUNDLE = ItemRegistry[980];
	constexpr inline auto& PINK_BUNDLE = ItemRegistry[981];
	constexpr inline auto& GRAY_BUNDLE = ItemRegistry[982];
	constexpr inline auto& LIGHT_GRAY_BUNDLE = ItemRegistry[983];
	constexpr inline auto& CYAN_BUNDLE = ItemRegistry[984];
	constexpr inline auto& PURPLE_BUNDLE = ItemRegistry[985];
	constexpr inline auto& BLUE_BUNDLE = ItemRegistry[986];
	constexpr inline auto& BROWN_BUNDLE = ItemRegistry[987];
	constexpr inline auto& GREEN_BUNDLE = ItemRegistry[988];
	constexpr inline auto& RED_BUNDLE = ItemRegistry[989];
	constexpr inline auto& BLACK_BUNDLE = ItemRegistry[990];
	constexpr inline auto& FISHING_ROD = ItemRegistry[991];
	constexpr inline auto& CLOCK = ItemRegistry[992];
	constexpr inline auto& SPYGLASS = ItemRegistry[993];
	constexpr inline auto& GLOWSTONE_DUST = ItemRegistry[994];
	constexpr inline auto& COD = ItemRegistry[995];
	constexpr inline auto& SALMON = ItemRegistry[996];
	constexpr inline auto& TROPICAL_FISH = ItemRegistry[997];
	constexpr inline auto& PUFFERFISH = ItemRegistry[998];
	constexpr inline auto& COOKED_COD = ItemRegistry[999];
	constexpr inline auto& COOKED_SALMON = ItemRegistry[1000];
	constexpr inline auto& INK_SAC = ItemRegistry[1001];
	constexpr inline auto& GLOW_INK_SAC = ItemRegistry[1002];
	constexpr inline auto& COCOA_BEANS = ItemRegistry[1003];
	constexpr inline auto& WHITE_DYE = ItemRegistry[1004];
	constexpr inline auto& ORANGE_DYE = ItemRegistry[1005];
	constexpr inline auto& MAGENTA_DYE = ItemRegistry[1006];
	constexpr inline auto& LIGHT_BLUE_DYE = ItemRegistry[1007];
	constexpr inline auto& YELLOW_DYE = ItemRegistry[1008];
	constexpr inline auto& LIME_DYE = ItemRegistry[1009];
	constexpr inline auto& PINK_DYE = ItemRegistry[1010];
	constexpr inline auto& GRAY_DYE = ItemRegistry[1011];
	constexpr inline auto& LIGHT_GRAY_DYE = ItemRegistry[1012];
	constexpr inline auto& CYAN_DYE = ItemRegistry[1013];
	constexpr inline auto& PURPLE_DYE = ItemRegistry[1014];
	constexpr inline auto& BLUE_DYE = ItemRegistry[1015];
	constexpr inline auto& BROWN_DYE = ItemRegistry[1016];
	constexpr inline auto& GREEN_DYE = ItemRegistry[1017];
	constexpr inline auto& RED_DYE = ItemRegistry[1018];
	constexpr inline auto& BLACK_DYE = ItemRegistry[1019];
	constexpr inline auto& BONE_MEAL = ItemRegistry[1020];
	constexpr inline auto& BONE = ItemRegistry[1021];
	constexpr inline auto& SUGAR = ItemRegistry[1022];
	constexpr inline auto& CAKE = ItemRegistry[1023];
	constexpr inline auto& WHITE_BED = ItemRegistry[1024];
	constexpr inline auto& ORANGE_BED = ItemRegistry[1025];
	constexpr inline auto& MAGENTA_BED = ItemRegistry[1026];
	constexpr inline auto& LIGHT_BLUE_BED = ItemRegistry[1027];
	constexpr inline auto& YELLOW_BED = ItemRegistry[1028];
	constexpr inline auto& LIME_BED = ItemRegistry[1029];
	constexpr inline auto& PINK_BED = ItemRegistry[1030];
	constexpr inline auto& GRAY_BED = ItemRegistry[1031];
	constexpr inline auto& LIGHT_GRAY_BED = ItemRegistry[1032];
	constexpr inline auto& CYAN_BED = ItemRegistry[1033];
	constexpr inline auto& PURPLE_BED = ItemRegistry[1034];
	constexpr inline auto& BLUE_BED = ItemRegistry[1035];
	constexpr inline auto& BROWN_BED = ItemRegistry[1036];
	constexpr inline auto& GREEN_BED = ItemRegistry[1037];
	constexpr inline auto& RED_BED = ItemRegistry[1038];
	constexpr inline auto& BLACK_BED = ItemRegistry[1039];
	constexpr inline auto& COOKIE = ItemRegistry[1040];
	constexpr inline auto& CRAFTER = ItemRegistry[1041];
	constexpr inline auto& FILLED_MAP = ItemRegistry[1042];
	constexpr inline auto& SHEARS = ItemRegistry[1043];
	constexpr inline auto& MELON_SLICE = ItemRegistry[1044];
	constexpr inline auto& DRIED_KELP = ItemRegistry[1045];
	constexpr inline auto& PUMPKIN_SEEDS = ItemRegistry[1046];
	constexpr inline auto& MELON_SEEDS = ItemRegistry[1047];
	constexpr inline auto& BEEF = ItemRegistry[1048];
	constexpr inline auto& COOKED_BEEF = ItemRegistry[1049];
	constexpr inline auto& CHICKEN = ItemRegistry[1050];
	constexpr inline auto& COOKED_CHICKEN = ItemRegistry[1051];
	constexpr inline auto& ROTTEN_FLESH = ItemRegistry[1052];
	constexpr inline auto& ENDER_PEARL = ItemRegistry[1053];
	constexpr inline auto& BLAZE_ROD = ItemRegistry[1054];
	constexpr inline auto& GHAST_TEAR = ItemRegistry[1055];
	constexpr inline auto& GOLD_NUGGET = ItemRegistry[1056];
	constexpr inline auto& NETHER_WART = ItemRegistry[1057];
	constexpr inline auto& GLASS_BOTTLE = ItemRegistry[1058];
	constexpr inline auto& POTION = ItemRegistry[1059];
	constexpr inline auto& SPIDER_EYE = ItemRegistry[1060];
	constexpr inline auto& FERMENTED_SPIDER_EYE = ItemRegistry[1061];
	constexpr inline auto& BLAZE_POWDER = ItemRegistry[1062];
	constexpr inline auto& MAGMA_CREAM = ItemRegistry[1063];
	constexpr inline auto& BREWING_STAND = ItemRegistry[1064];
	constexpr inline auto& CAULDRON = ItemRegistry[1065];
	constexpr inline auto& ENDER_EYE = ItemRegistry[1066];
	constexpr inline auto& GLISTERING_MELON_SLICE = ItemRegistry[1067];
	constexpr inline auto& ARMADILLO_SPAWN_EGG = ItemRegistry[1068];
	constexpr inline auto& ALLAY_SPAWN_EGG = ItemRegistry[1069];
	constexpr inline auto& AXOLOTL_SPAWN_EGG = ItemRegistry[1070];
	constexpr inline auto& BAT_SPAWN_EGG = ItemRegistry[1071];
	constexpr inline auto& BEE_SPAWN_EGG = ItemRegistry[1072];
	constexpr inline auto& BLAZE_SPAWN_EGG = ItemRegistry[1073];
	constexpr inline auto& BOGGED_SPAWN_EGG = ItemRegistry[1074];
	constexpr inline auto& BREEZE_SPAWN_EGG = ItemRegistry[1075];
	constexpr inline auto& CAT_SPAWN_EGG = ItemRegistry[1076];
	constexpr inline auto& CAMEL_SPAWN_EGG = ItemRegistry[1077];
	constexpr inline auto& CAVE_SPIDER_SPAWN_EGG = ItemRegistry[1078];
	constexpr inline auto& CHICKEN_SPAWN_EGG = ItemRegistry[1079];
	constexpr inline auto& COD_SPAWN_EGG = ItemRegistry[1080];
	constexpr inline auto& COW_SPAWN_EGG = ItemRegistry[1081];
	constexpr inline auto& CREEPER_SPAWN_EGG = ItemRegistry[1082];
	constexpr inline auto& DOLPHIN_SPAWN_EGG = ItemRegistry[1083];
	constexpr inline auto& DONKEY_SPAWN_EGG = ItemRegistry[1084];
	constexpr inline auto& DROWNED_SPAWN_EGG = ItemRegistry[1085];
	constexpr inline auto& ELDER_GUARDIAN_SPAWN_EGG = ItemRegistry[1086];
	constexpr inline auto& ENDER_DRAGON_SPAWN_EGG = ItemRegistry[1087];
	constexpr inline auto& ENDERMAN_SPAWN_EGG = ItemRegistry[1088];
	constexpr inline auto& ENDERMITE_SPAWN_EGG = ItemRegistry[1089];
	constexpr inline auto& EVOKER_SPAWN_EGG = ItemRegistry[1090];
	constexpr inline auto& FOX_SPAWN_EGG = ItemRegistry[1091];
	constexpr inline auto& FROG_SPAWN_EGG = ItemRegistry[1092];
	constexpr inline auto& GHAST_SPAWN_EGG = ItemRegistry[1093];
	constexpr inline auto& GLOW_SQUID_SPAWN_EGG = ItemRegistry[1094];
	constexpr inline auto& GOAT_SPAWN_EGG = ItemRegistry[1095];
	constexpr inline auto& GUARDIAN_SPAWN_EGG = ItemRegistry[1096];
	constexpr inline auto& HOGLIN_SPAWN_EGG = ItemRegistry[1097];
	constexpr inline auto& HORSE_SPAWN_EGG = ItemRegistry[1098];
	constexpr inline auto& HUSK_SPAWN_EGG = ItemRegistry[1099];
	constexpr inline auto& IRON_GOLEM_SPAWN_EGG = ItemRegistry[1100];
	constexpr inline auto& LLAMA_SPAWN_EGG = ItemRegistry[1101];
	constexpr inline auto& MAGMA_CUBE_SPAWN_EGG = ItemRegistry[1102];
	constexpr inline auto& MOOSHROOM_SPAWN_EGG = ItemRegistry[1103];
	constexpr inline auto& MULE_SPAWN_EGG = ItemRegistry[1104];
	constexpr inline auto& OCELOT_SPAWN_EGG = ItemRegistry[1105];
	constexpr inline auto& PANDA_SPAWN_EGG = ItemRegistry[1106];
	constexpr inline auto& PARROT_SPAWN_EGG = ItemRegistry[1107];
	constexpr inline auto& PHANTOM_SPAWN_EGG = ItemRegistry[1108];
	constexpr inline auto& PIG_SPAWN_EGG = ItemRegistry[1109];
	constexpr inline auto& PIGLIN_SPAWN_EGG = ItemRegistry[1110];
	constexpr inline auto& PIGLIN_BRUTE_SPAWN_EGG = ItemRegistry[1111];
	constexpr inline auto& PILLAGER_SPAWN_EGG = ItemRegistry[1112];
	constexpr inline auto& POLAR_BEAR_SPAWN_EGG = ItemRegistry[1113];
	constexpr inline auto& PUFFERFISH_SPAWN_EGG = ItemRegistry[1114];
	constexpr inline auto& RABBIT_SPAWN_EGG = ItemRegistry[1115];
	constexpr inline auto& RAVAGER_SPAWN_EGG = ItemRegistry[1116];
	constexpr inline auto& SALMON_SPAWN_EGG = ItemRegistry[1117];
	constexpr inline auto& SHEEP_SPAWN_EGG = ItemRegistry[1118];
	constexpr inline auto& SHULKER_SPAWN_EGG = ItemRegistry[1119];
	constexpr inline auto& SILVERFISH_SPAWN_EGG = ItemRegistry[1120];
	constexpr inline auto& SKELETON_SPAWN_EGG = ItemRegistry[1121];
	constexpr inline auto& SKELETON_HORSE_SPAWN_EGG = ItemRegistry[1122];
	constexpr inline auto& SLIME_SPAWN_EGG = ItemRegistry[1123];
	constexpr inline auto& SNIFFER_SPAWN_EGG = ItemRegistry[1124];
	constexpr inline auto& SNOW_GOLEM_SPAWN_EGG = ItemRegistry[1125];
	constexpr inline auto& SPIDER_SPAWN_EGG = ItemRegistry[1126];
	constexpr inline auto& SQUID_SPAWN_EGG = ItemRegistry[1127];
	constexpr inline auto& STRAY_SPAWN_EGG = ItemRegistry[1128];
	constexpr inline auto& STRIDER_SPAWN_EGG = ItemRegistry[1129];
	constexpr inline auto& TADPOLE_SPAWN_EGG = ItemRegistry[1130];
	constexpr inline auto& TRADER_LLAMA_SPAWN_EGG = ItemRegistry[1131];
	constexpr inline auto& TROPICAL_FISH_SPAWN_EGG = ItemRegistry[1132];
	constexpr inline auto& TURTLE_SPAWN_EGG = ItemRegistry[1133];
	constexpr inline auto& VEX_SPAWN_EGG = ItemRegistry[1134];
	constexpr inline auto& VILLAGER_SPAWN_EGG = ItemRegistry[1135];
	constexpr inline auto& VINDICATOR_SPAWN_EGG = ItemRegistry[1136];
	constexpr inline auto& WANDERING_TRADER_SPAWN_EGG = ItemRegistry[1137];
	constexpr inline auto& WARDEN_SPAWN_EGG = ItemRegistry[1138];
	constexpr inline auto& WITCH_SPAWN_EGG = ItemRegistry[1139];
	constexpr inline auto& WITHER_SPAWN_EGG = ItemRegistry[1140];
	constexpr inline auto& WITHER_SKELETON_SPAWN_EGG = ItemRegistry[1141];
	constexpr inline auto& WOLF_SPAWN_EGG = ItemRegistry[1142];
	constexpr inline auto& ZOGLIN_SPAWN_EGG = ItemRegistry[1143];
	constexpr inline auto& CREAKING_SPAWN_EGG = ItemRegistry[1144];
	constexpr inline auto& ZOMBIE_SPAWN_EGG = ItemRegistry[1145];
	constexpr inline auto& ZOMBIE_HORSE_SPAWN_EGG = ItemRegistry[1146];
	constexpr inline auto& ZOMBIE_VILLAGER_SPAWN_EGG = ItemRegistry[1147];
	constexpr inline auto& ZOMBIFIED_PIGLIN_SPAWN_EGG = ItemRegistry[1148];
	constexpr inline auto& EXPERIENCE_BOTTLE = ItemRegistry[1149];
	constexpr inline auto& FIRE_CHARGE = ItemRegistry[1150];
	constexpr inline auto& WIND_CHARGE = ItemRegistry[1151];
	constexpr inline auto& WRITABLE_BOOK = ItemRegistry[1152];
	constexpr inline auto& WRITTEN_BOOK = ItemRegistry[1153];
	constexpr inline auto& BREEZE_ROD = ItemRegistry[1154];
	constexpr inline auto& MACE = ItemRegistry[1155];
	constexpr inline auto& ITEM_FRAME = ItemRegistry[1156];
	constexpr inline auto& GLOW_ITEM_FRAME = ItemRegistry[1157];
	constexpr inline auto& FLOWER_POT = ItemRegistry[1158];
	constexpr inline auto& CARROT = ItemRegistry[1159];
	constexpr inline auto& POTATO = ItemRegistry[1160];
	constexpr inline auto& BAKED_POTATO = ItemRegistry[1161];
	constexpr inline auto& POISONOUS_POTATO = ItemRegistry[1162];
	constexpr inline auto& MAP = ItemRegistry[1163];
	constexpr inline auto& GOLDEN_CARROT = ItemRegistry[1164];
	constexpr inline auto& SKELETON_SKULL = ItemRegistry[1165];
	constexpr inline auto& WITHER_SKELETON_SKULL = ItemRegistry[1166];
	constexpr inline auto& PLAYER_HEAD = ItemRegistry[1167];
	constexpr inline auto& ZOMBIE_HEAD = ItemRegistry[1168];
	constexpr inline auto& CREEPER_HEAD = ItemRegistry[1169];
	constexpr inline auto& DRAGON_HEAD = ItemRegistry[1170];
	constexpr inline auto& PIGLIN_HEAD = ItemRegistry[1171];
	constexpr inline auto& NETHER_STAR = ItemRegistry[1172];
	constexpr inline auto& PUMPKIN_PIE = ItemRegistry[1173];
	constexpr inline auto& FIREWORK_ROCKET = ItemRegistry[1174];
	constexpr inline auto& FIREWORK_STAR = ItemRegistry[1175];
	constexpr inline auto& ENCHANTED_BOOK = ItemRegistry[1176];
	constexpr inline auto& NETHER_BRICK = ItemRegistry[1177];
	constexpr inline auto& RESIN_BRICK = ItemRegistry[1178];
	constexpr inline auto& PRISMARINE_SHARD = ItemRegistry[1179];
	constexpr inline auto& PRISMARINE_CRYSTALS = ItemRegistry[1180];
	constexpr inline auto& RABBIT = ItemRegistry[1181];
	constexpr inline auto& COOKED_RABBIT = ItemRegistry[1182];
	constexpr inline auto& RABBIT_STEW = ItemRegistry[1183];
	constexpr inline auto& RABBIT_FOOT = ItemRegistry[1184];
	constexpr inline auto& RABBIT_HIDE = ItemRegistry[1185];
	constexpr inline auto& ARMOR_STAND = ItemRegistry[1186];
	constexpr inline auto& IRON_HORSE_ARMOR = ItemRegistry[1187];
	constexpr inline auto& GOLDEN_HORSE_ARMOR = ItemRegistry[1188];
	constexpr inline auto& DIAMOND_HORSE_ARMOR = ItemRegistry[1189];
	constexpr inline auto& LEATHER_HORSE_ARMOR = ItemRegistry[1190];
	constexpr inline auto& LEAD = ItemRegistry[1191];
	constexpr inline auto& NAME_TAG = ItemRegistry[1192];
	constexpr inline auto& COMMAND_BLOCK_MINECART = ItemRegistry[1193];
	constexpr inline auto& MUTTON = ItemRegistry[1194];
	constexpr inline auto& COOKED_MUTTON = ItemRegistry[1195];
	constexpr inline auto& WHITE_BANNER = ItemRegistry[1196];
	constexpr inline auto& ORANGE_BANNER = ItemRegistry[1197];
	constexpr inline auto& MAGENTA_BANNER = ItemRegistry[1198];
	constexpr inline auto& LIGHT_BLUE_BANNER = ItemRegistry[1199];
	constexpr inline auto& YELLOW_BANNER = ItemRegistry[1200];
	constexpr inline auto& LIME_BANNER = ItemRegistry[1201];
	constexpr inline auto& PINK_BANNER = ItemRegistry[1202];
	constexpr inline auto& GRAY_BANNER = ItemRegistry[1203];
	constexpr inline auto& LIGHT_GRAY_BANNER = ItemRegistry[1204];
	constexpr inline auto& CYAN_BANNER = ItemRegistry[1205];
	constexpr inline auto& PURPLE_BANNER = ItemRegistry[1206];
	constexpr inline auto& BLUE_BANNER = ItemRegistry[1207];
	constexpr inline auto& BROWN_BANNER = ItemRegistry[1208];
	constexpr inline auto& GREEN_BANNER = ItemRegistry[1209];
	constexpr inline auto& RED_BANNER = ItemRegistry[1210];
	constexpr inline auto& BLACK_BANNER = ItemRegistry[1211];
	constexpr inline auto& END_CRYSTAL = ItemRegistry[1212];
	constexpr inline auto& CHORUS_FRUIT = ItemRegistry[1213];
	constexpr inline auto& POPPED_CHORUS_FRUIT = ItemRegistry[1214];
	constexpr inline auto& TORCHFLOWER_SEEDS = ItemRegistry[1215];
	constexpr inline auto& PITCHER_POD = ItemRegistry[1216];
	constexpr inline auto& BEETROOT = ItemRegistry[1217];
	constexpr inline auto& BEETROOT_SEEDS = ItemRegistry[1218];
	constexpr inline auto& BEETROOT_SOUP = ItemRegistry[1219];
	constexpr inline auto& DRAGON_BREATH = ItemRegistry[1220];
	constexpr inline auto& SPLASH_POTION = ItemRegistry[1221];
	constexpr inline auto& SPECTRAL_ARROW = ItemRegistry[1222];
	constexpr inline auto& TIPPED_ARROW = ItemRegistry[1223];
	constexpr inline auto& LINGERING_POTION = ItemRegistry[1224];
	constexpr inline auto& SHIELD = ItemRegistry[1225];
	constexpr inline auto& TOTEM_OF_UNDYING = ItemRegistry[1226];
	constexpr inline auto& SHULKER_SHELL = ItemRegistry[1227];
	constexpr inline auto& IRON_NUGGET = ItemRegistry[1228];
	constexpr inline auto& KNOWLEDGE_BOOK = ItemRegistry[1229];
	constexpr inline auto& DEBUG_STICK = ItemRegistry[1230];
	constexpr inline auto& MUSIC_DISC_13 = ItemRegistry[1231];
	constexpr inline auto& MUSIC_DISC_CAT = ItemRegistry[1232];
	constexpr inline auto& MUSIC_DISC_BLOCKS = ItemRegistry[1233];
	constexpr inline auto& MUSIC_DISC_CHIRP = ItemRegistry[1234];
	constexpr inline auto& MUSIC_DISC_CREATOR = ItemRegistry[1235];
	constexpr inline auto& MUSIC_DISC_CREATOR_MUSIC_BOX = ItemRegistry[1236];
	constexpr inline auto& MUSIC_DISC_FAR = ItemRegistry[1237];
	constexpr inline auto& MUSIC_DISC_MALL = ItemRegistry[1238];
	constexpr inline auto& MUSIC_DISC_MELLOHI = ItemRegistry[1239];
	constexpr inline auto& MUSIC_DISC_STAL = ItemRegistry[1240];
	constexpr inline auto& MUSIC_DISC_STRAD = ItemRegistry[1241];
	constexpr inline auto& MUSIC_DISC_WARD = ItemRegistry[1242];
	constexpr inline auto& MUSIC_DISC_11 = ItemRegistry[1243];
	constexpr inline auto& MUSIC_DISC_WAIT = ItemRegistry[1244];
	constexpr inline auto& MUSIC_DISC_OTHERSIDE = ItemRegistry[1245];
	constexpr inline auto& MUSIC_DISC_RELIC = ItemRegistry[1246];
	constexpr inline auto& MUSIC_DISC_5 = ItemRegistry[1247];
	constexpr inline auto& MUSIC_DISC_PIGSTEP = ItemRegistry[1248];
	constexpr inline auto& MUSIC_DISC_PRECIPICE = ItemRegistry[1249];
	constexpr inline auto& DISC_FRAGMENT_5 = ItemRegistry[1250];
	constexpr inline auto& TRIDENT = ItemRegistry[1251];
	constexpr inline auto& NAUTILUS_SHELL = ItemRegistry[1252];
	constexpr inline auto& HEART_OF_THE_SEA = ItemRegistry[1253];
	constexpr inline auto& CROSSBOW = ItemRegistry[1254];
	constexpr inline auto& SUSPICIOUS_STEW = ItemRegistry[1255];
	constexpr inline auto& LOOM = ItemRegistry[1256];
	constexpr inline auto& FLOWER_BANNER_PATTERN = ItemRegistry[1257];
	constexpr inline auto& CREEPER_BANNER_PATTERN = ItemRegistry[1258];
	constexpr inline auto& SKULL_BANNER_PATTERN = ItemRegistry[1259];
	constexpr inline auto& MOJANG_BANNER_PATTERN = ItemRegistry[1260];
	constexpr inline auto& GLOBE_BANNER_PATTERN = ItemRegistry[1261];
	constexpr inline auto& PIGLIN_BANNER_PATTERN = ItemRegistry[1262];
	constexpr inline auto& FLOW_BANNER_PATTERN = ItemRegistry[1263];
	constexpr inline auto& GUSTER_BANNER_PATTERN = ItemRegistry[1264];
	constexpr inline auto& FIELD_MASONED_BANNER_PATTERN = ItemRegistry[1265];
	constexpr inline auto& BORDURE_INDENTED_BANNER_PATTERN = ItemRegistry[1266];
	constexpr inline auto& GOAT_HORN = ItemRegistry[1267];
	constexpr inline auto& COMPOSTER = ItemRegistry[1268];
	constexpr inline auto& BARREL = ItemRegistry[1269];
	constexpr inline auto& SMOKER = ItemRegistry[1270];
	constexpr inline auto& BLAST_FURNACE = ItemRegistry[1271];
	constexpr inline auto& CARTOGRAPHY_TABLE = ItemRegistry[1272];
	constexpr inline auto& FLETCHING_TABLE = ItemRegistry[1273];
	constexpr inline auto& GRINDSTONE = ItemRegistry[1274];
	constexpr inline auto& SMITHING_TABLE = ItemRegistry[1275];
	constexpr inline auto& STONECUTTER = ItemRegistry[1276];
	constexpr inline auto& BELL = ItemRegistry[1277];
	constexpr inline auto& LANTERN = ItemRegistry[1278];
	constexpr inline auto& SOUL_LANTERN = ItemRegistry[1279];
	constexpr inline auto& SWEET_BERRIES = ItemRegistry[1280];
	constexpr inline auto& GLOW_BERRIES = ItemRegistry[1281];
	constexpr inline auto& CAMPFIRE = ItemRegistry[1282];
	constexpr inline auto& SOUL_CAMPFIRE = ItemRegistry[1283];
	constexpr inline auto& SHROOMLIGHT = ItemRegistry[1284];
	constexpr inline auto& HONEYCOMB = ItemRegistry[1285];
	constexpr inline auto& BEE_NEST = ItemRegistry[1286];
	constexpr inline auto& BEEHIVE = ItemRegistry[1287];
	constexpr inline auto& HONEY_BOTTLE = ItemRegistry[1288];
	constexpr inline auto& HONEYCOMB_BLOCK = ItemRegistry[1289];
	constexpr inline auto& LODESTONE = ItemRegistry[1290];
	constexpr inline auto& CRYING_OBSIDIAN = ItemRegistry[1291];
	constexpr inline auto& BLACKSTONE = ItemRegistry[1292];
	constexpr inline auto& BLACKSTONE_SLAB = ItemRegistry[1293];
	constexpr inline auto& BLACKSTONE_STAIRS = ItemRegistry[1294];
	constexpr inline auto& GILDED_BLACKSTONE = ItemRegistry[1295];
	constexpr inline auto& POLISHED_BLACKSTONE = ItemRegistry[1296];
	constexpr inline auto& POLISHED_BLACKSTONE_SLAB = ItemRegistry[1297];
	constexpr inline auto& POLISHED_BLACKSTONE_STAIRS = ItemRegistry[1298];
	constexpr inline auto& CHISELED_POLISHED_BLACKSTONE = ItemRegistry[1299];
	constexpr inline auto& POLISHED_BLACKSTONE_BRICKS = ItemRegistry[1300];
	constexpr inline auto& POLISHED_BLACKSTONE_BRICK_SLAB = ItemRegistry[1301];
	constexpr inline auto& POLISHED_BLACKSTONE_BRICK_STAIRS = ItemRegistry[1302];
	constexpr inline auto& CRACKED_POLISHED_BLACKSTONE_BRICKS = ItemRegistry[1303];
	constexpr inline auto& RESPAWN_ANCHOR = ItemRegistry[1304];
	constexpr inline auto& CANDLE = ItemRegistry[1305];
	constexpr inline auto& WHITE_CANDLE = ItemRegistry[1306];
	constexpr inline auto& ORANGE_CANDLE = ItemRegistry[1307];
	constexpr inline auto& MAGENTA_CANDLE = ItemRegistry[1308];
	constexpr inline auto& LIGHT_BLUE_CANDLE = ItemRegistry[1309];
	constexpr inline auto& YELLOW_CANDLE = ItemRegistry[1310];
	constexpr inline auto& LIME_CANDLE = ItemRegistry[1311];
	constexpr inline auto& PINK_CANDLE = ItemRegistry[1312];
	constexpr inline auto& GRAY_CANDLE = ItemRegistry[1313];
	constexpr inline auto& LIGHT_GRAY_CANDLE = ItemRegistry[1314];
	constexpr inline auto& CYAN_CANDLE = ItemRegistry[1315];
	constexpr inline auto& PURPLE_CANDLE = ItemRegistry[1316];
	constexpr inline auto& BLUE_CANDLE = ItemRegistry[1317];
	constexpr inline auto& BROWN_CANDLE = ItemRegistry[1318];
	constexpr inline auto& GREEN_CANDLE = ItemRegistry[1319];
	constexpr inline auto& RED_CANDLE = ItemRegistry[1320];
	constexpr inline auto& BLACK_CANDLE = ItemRegistry[1321];
	constexpr inline auto& SMALL_AMETHYST_BUD = ItemRegistry[1322];
	constexpr inline auto& MEDIUM_AMETHYST_BUD = ItemRegistry[1323];
	constexpr inline auto& LARGE_AMETHYST_BUD = ItemRegistry[1324];
	constexpr inline auto& AMETHYST_CLUSTER = ItemRegistry[1325];
	constexpr inline auto& POINTED_DRIPSTONE = ItemRegistry[1326];
	constexpr inline auto& OCHRE_FROGLIGHT = ItemRegistry[1327];
	constexpr inline auto& VERDANT_FROGLIGHT = ItemRegistry[1328];
	constexpr inline auto& PEARLESCENT_FROGLIGHT = ItemRegistry[1329];
	constexpr inline auto& FROGSPAWN = ItemRegistry[1330];
	constexpr inline auto& ECHO_SHARD = ItemRegistry[1331];
	constexpr inline auto& BRUSH = ItemRegistry[1332];
	constexpr inline auto& NETHERITE_UPGRADE_SMITHING_TEMPLATE = ItemRegistry[1333];
	constexpr inline auto& SENTRY_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1334];
	constexpr inline auto& DUNE_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1335];
	constexpr inline auto& COAST_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1336];
	constexpr inline auto& WILD_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1337];
	constexpr inline auto& WARD_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1338];
	constexpr inline auto& EYE_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1339];
	constexpr inline auto& VEX_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1340];
	constexpr inline auto& TIDE_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1341];
	constexpr inline auto& SNOUT_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1342];
	constexpr inline auto& RIB_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1343];
	constexpr inline auto& SPIRE_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1344];
	constexpr inline auto& WAYFINDER_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1345];
	constexpr inline auto& SHAPER_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1346];
	constexpr inline auto& SILENCE_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1347];
	constexpr inline auto& RAISER_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1348];
	constexpr inline auto& HOST_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1349];
	constexpr inline auto& FLOW_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1350];
	constexpr inline auto& BOLT_ARMOR_TRIM_SMITHING_TEMPLATE = ItemRegistry[1351];
	constexpr inline auto& ANGLER_POTTERY_SHERD = ItemRegistry[1352];
	constexpr inline auto& ARCHER_POTTERY_SHERD = ItemRegistry[1353];
	constexpr inline auto& ARMS_UP_POTTERY_SHERD = ItemRegistry[1354];
	constexpr inline auto& BLADE_POTTERY_SHERD = ItemRegistry[1355];
	constexpr inline auto& BREWER_POTTERY_SHERD = ItemRegistry[1356];
	constexpr inline auto& BURN_POTTERY_SHERD = ItemRegistry[1357];
	constexpr inline auto& DANGER_POTTERY_SHERD = ItemRegistry[1358];
	constexpr inline auto& EXPLORER_POTTERY_SHERD = ItemRegistry[1359];
	constexpr inline auto& FLOW_POTTERY_SHERD = ItemRegistry[1360];
	constexpr inline auto& FRIEND_POTTERY_SHERD = ItemRegistry[1361];
	constexpr inline auto& GUSTER_POTTERY_SHERD = ItemRegistry[1362];
	constexpr inline auto& HEART_POTTERY_SHERD = ItemRegistry[1363];
	constexpr inline auto& HEARTBREAK_POTTERY_SHERD = ItemRegistry[1364];
	constexpr inline auto& HOWL_POTTERY_SHERD = ItemRegistry[1365];
	constexpr inline auto& MINER_POTTERY_SHERD = ItemRegistry[1366];
	constexpr inline auto& MOURNER_POTTERY_SHERD = ItemRegistry[1367];
	constexpr inline auto& PLENTY_POTTERY_SHERD = ItemRegistry[1368];
	constexpr inline auto& PRIZE_POTTERY_SHERD = ItemRegistry[1369];
	constexpr inline auto& SCRAPE_POTTERY_SHERD = ItemRegistry[1370];
	constexpr inline auto& SHEAF_POTTERY_SHERD = ItemRegistry[1371];
	constexpr inline auto& SHELTER_POTTERY_SHERD = ItemRegistry[1372];
	constexpr inline auto& SKULL_POTTERY_SHERD = ItemRegistry[1373];
	constexpr inline auto& SNORT_POTTERY_SHERD = ItemRegistry[1374];
	constexpr inline auto& COPPER_GRATE = ItemRegistry[1375];
	constexpr inline auto& EXPOSED_COPPER_GRATE = ItemRegistry[1376];
	constexpr inline auto& WEATHERED_COPPER_GRATE = ItemRegistry[1377];
	constexpr inline auto& OXIDIZED_COPPER_GRATE = ItemRegistry[1378];
	constexpr inline auto& WAXED_COPPER_GRATE = ItemRegistry[1379];
	constexpr inline auto& WAXED_EXPOSED_COPPER_GRATE = ItemRegistry[1380];
	constexpr inline auto& WAXED_WEATHERED_COPPER_GRATE = ItemRegistry[1381];
	constexpr inline auto& WAXED_OXIDIZED_COPPER_GRATE = ItemRegistry[1382];
	constexpr inline auto& COPPER_BULB = ItemRegistry[1383];
	constexpr inline auto& EXPOSED_COPPER_BULB = ItemRegistry[1384];
	constexpr inline auto& WEATHERED_COPPER_BULB = ItemRegistry[1385];
	constexpr inline auto& OXIDIZED_COPPER_BULB = ItemRegistry[1386];
	constexpr inline auto& WAXED_COPPER_BULB = ItemRegistry[1387];
	constexpr inline auto& WAXED_EXPOSED_COPPER_BULB = ItemRegistry[1388];
	constexpr inline auto& WAXED_WEATHERED_COPPER_BULB = ItemRegistry[1389];
	constexpr inline auto& WAXED_OXIDIZED_COPPER_BULB = ItemRegistry[1390];
	constexpr inline auto& TRIAL_SPAWNER = ItemRegistry[1391];
	constexpr inline auto& TRIAL_KEY = ItemRegistry[1392];
	constexpr inline auto& OMINOUS_TRIAL_KEY = ItemRegistry[1393];
	constexpr inline auto& VAULT = ItemRegistry[1394];
	constexpr inline auto& OMINOUS_BOTTLE = ItemRegistry[1395];
};
#endif