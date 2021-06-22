#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"

#include "game/level_update.h"

#include "levels/scripts.h"

#include "actors/common1.h"

#include "make_const_nonconst.h"
#include "levels/bob/header.h"

const LevelScript level_bob_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _bob_segment_7SegmentRomStart, _bob_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _generic_yay0SegmentRomStart, _generic_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group3_yay0SegmentRomStart, _group3_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group3_geoSegmentRomStart, _group3_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_4), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_CHAIN_CHOMP_GATE, bob_geo_000440), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_SEESAW_PLATFORM, bob_geo_000458), 
	LOAD_MODEL_FROM_GEO(MODEL_BOB_BARS_GRILLS, bob_geo_000470), 

	AREA(1, bob_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF3, LEVEL_CASTLE_GROUNDS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x00, 0x02, 0, 0, 0),
		OBJECT(MODEL_NONE, 0, 0, 0, 0, 0, 0, 0x01000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_GOOMBA, 6524, -7425, 18191, 0, 0, 0, 0x00000001, bhvGoomba),
		MARIO_POS(0x01, 0, -591, -7725, 23375),
		OBJECT(MODEL_NONE, -441, -7739, 23766, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_WHOMP, 13611, -5249, 13924, 0, 0, 0, 0x00000000, bhvSmallWhomp),
		OBJECT(MODEL_YELLOW_SPRING, 7938, -5038, 18231, 0, 0, 0, 0x00000001, bhvGreenSpring),
		OBJECT(MODEL_FLYGUY, 10033, -3888, 9494, 0, 0, 0, 0x00000000, bhvFlyGuy),
		OBJECT(MODEL_BREAKABLE_BOX, 10006, -4226, 9445, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 10006, -3960, 9803, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 10006, -3659, 10205, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 10006, -3659, 10724, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_BREAKABLE_BOX, 10006, -3422, 11063, 0, 0, 0, 0x00000000, bhvHiddenObject),
		OBJECT(MODEL_PURPLE_SWITCH, 9145, -4603, 10542, 0, 0, 0, 0x00000000, bhvFloorSwitchHiddenObjects),
		OBJECT(MODEL_YELLOW_SPRING, 6314, -3003, 10369, 0, 0, 0, 0x00000000, bhvGreenSpring),
		TERRAIN(bob_area_1_collision),
		ROOMS(bob_area_1_collision_rooms),
		MACRO_OBJECTS(bob_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	AREA(2, bob_area_2),
		INSTANT_WARP(0x00, 0x01, 0, 0, 0),
		WARP_NODE(0xF0, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x02, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x0A, LEVEL_BOB, 0x02, 0x10, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x01, 0x01, 8000, -4500, 0),
		OBJECT(MODEL_BULLET_BILL, -3134, -502, 11331, 0, -180, 0, 0x00000000, bhvBulletBill),
		OBJECT(MODEL_BULLET_BILL, -3134, -1358, 11331, 0, -180, 0, 0x00000000, bhvBulletBill),
		OBJECT(MODEL_NONE, -3171, -1829, 10331, 0, 0, 0, 0x00800000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, -1829, -1440, 10338, 0, 0, 0, 0x00000000, bhvSnap2d),
		OBJECT(MODEL_GOOMBA, 5098, -1440, 10338, 0, 0, 0, 0x000A0001, bhvInstantActiveWarp),
		OBJECT(MODEL_WOOD_PLATFORM, 4494, -1440, 10338, 0, 0, 0, 0x00000000, bhvWoodPlatform),
		OBJECT(MODEL_WOOD_PLATFORM, 3739, -1440, 10338, 0, 0, 0, 0x00250000, bhvWoodPlatform),
		OBJECT(MODEL_WOOD_PLATFORM, 2910, -1440, 10879, 0, 0, 0, 0x004A0000, bhvWoodPlatform),
		OBJECT(MODEL_WOOD_PLATFORM, 2239, -1440, 10133, 0, 0, 0, 0x006F0000, bhvWoodPlatform),
		OBJECT(MODEL_WOOD_PLATFORM, 1516, -1440, 10607, 0, 0, 0, 0x00940000, bhvWoodPlatform),
		OBJECT(MODEL_WOOD_PLATFORM, 706, -1440, 10498, 0, 0, 0, 0x00B90000, bhvWoodPlatform),
		OBJECT(MODEL_WOOD_PLATFORM, -126, -1440, 10018, 0, 0, 0, 0x00DE0000, bhvWoodPlatform),
		OBJECT(MODEL_WOOD_PLATFORM, -2285, -1440, 10338, 0, 0, 0, 0x00000000, bhvWoodPlatform),
		OBJECT(MODEL_WOOD_PLATFORM, -3835, -1440, 10338, 0, 0, 0, 0x00000000, bhvWoodPlatform),
		OBJECT(MODEL_WOOD_PLATFORM, -3835, -1069, 10338, 0, 0, 0, 0x00500000, bhvWoodPlatform),
		OBJECT(MODEL_WOOD_PLATFORM, -3835, -724, 10338, 0, 0, 0, 0x00A00000, bhvWoodPlatform),
		OBJECT(MODEL_WOOD_PLATFORM, -4300, -405, 10338, 0, 0, 0, 0x00F00000, bhvWoodPlatform),
		OBJECT(MODEL_YELLOW_SPRING, 6314, -3003, 10369, 0, 0, 0, 0x00000000, bhvGreenSpring),
		OBJECT(MODEL_YELLOW_SPRING, 5859, -2241, 10369, 0, 0, 0, 0x00000000, bhvGreenSpring),
		OBJECT(MODEL_YELLOW_SPRING, 4734, -2258, 10405, 0, 0, 0, 0x00000000, bhvGreenSpring),
		TERRAIN(bob_area_2_collision),
		MACRO_OBJECTS(bob_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -591, -7725, 23375),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
