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
#include "levels/castle_grounds/header.h"

const LevelScript level_castle_grounds_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_MIO0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _outside_yay0SegmentRomStart, _outside_yay0SegmentRomEnd), 
	LOAD_MIO0(0x05, _group4_yay0SegmentRomStart, _group4_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group4_geoSegmentRomStart, _group4_geoSegmentRomEnd), 
	LOAD_MIO0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_MIO0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x7, _castle_grounds_segment_7SegmentRomStart, _castle_grounds_segment_7SegmentRomEnd), 
	LOAD_YAY0(0xa, _bidw_skybox_yay0SegmentRomStart, _bidw_skybox_yay0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_5), 
	JUMP_LINK(script_func_global_18), 

	AREA(1, castle_grounds_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		INSTANT_WARP(0x0A, 0x01, 0, 0, 0),
		WARP_NODE(0x10, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -5315, -5251, 3380, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -3673, -5251, 3380, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -2061, -5251, 3380, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -457, -5251, 3380, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_HMC_WOODEN_DOOR, 1138, -5251, 3380, 0, 0, 0, 0x00000000, bhvDoor),
		OBJECT(MODEL_NONE, 1933, -7510, 7282, 0, 0, 0, 0x01000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_CASTLE_GROUNDS_WARP_PIPE, 1513, -7777, 9497, 0, 0, 0, 0x00100000, bhvWarpPipe),
		OBJECT(MODEL_NONE, 345, 401, 12888, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -3157, -7681, 10864, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -3157, -7681, 9857, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -3157, -7681, 8427, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_BOB_BUBBLY_TREE, -3157, -7681, 7422, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_NONE, 0, -8944, 13175, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		MARIO_POS(0x01, 0, 0, -8831, 13175),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, -8831, 13175),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
