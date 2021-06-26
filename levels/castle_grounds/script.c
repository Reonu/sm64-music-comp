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
		WARP_NODE(0xF3, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0x20, LEVEL_CASTLE_GROUNDS, 0x01, 0x30, WARP_NO_CHECKPOINT),
		WARP_NODE(0x30, LEVEL_CASTLE_GROUNDS, 0x01, 0x20, WARP_NO_CHECKPOINT),
		WARP_NODE(0x40, LEVEL_CASTLE_GROUNDS, 0x01, 0x60, WARP_NO_CHECKPOINT),
		WARP_NODE(0x50, LEVEL_CASTLE_GROUNDS, 0x01, 0x70, WARP_NO_CHECKPOINT),
		WARP_NODE(0x60, LEVEL_CASTLE_GROUNDS, 0x01, 0x40, WARP_NO_CHECKPOINT),
		WARP_NODE(0x70, LEVEL_CASTLE_GROUNDS, 0x01, 0x50, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BOAT, -289, -9209, 15255, 0, 0, 0, 0x01000000, bhvBoat),
		OBJECT(MODEL_TOAD_HEADPHONES, -4463, -4007, 3668, 0, 0, 0, 0x00A00000, bhvToadHeadphones),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -5315, -5251, 3380, 0, -180, 0, 0x00600000, bhvDoorWarp),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -3673, -5251, 3380, 0, 0, 0, 0x00500000, bhvDoorWarp),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -2061, -5251, 3380, 0, 0, 0, 0x00400000, bhvDoorWarp),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -457, -5251, 3380, 0, -180, 0, 0x00300000, bhvDoorWarp),
		OBJECT(MODEL_HMC_WOODEN_DOOR, 1138, -5251, 3380, 0, 0, 0, 0x00200000, bhvDoorWarp),
		OBJECT(MODEL_HMC_WOODEN_DOOR, -4474, -4007, 3387, 0, -180, 0, 0x00700000, bhvDoorWarp),
		OBJECT(MODEL_HMC_WOODEN_DOOR, 4354, -4006, 6083, 0, -90, 0, 0x00600000, bhvDoorWarp),
		MARIO_POS(0x01, 0, -363, -9310, 15051),
		OBJECT(MODEL_NONE, -2867, -4521, 3753, 0, 0, 0, 0x00000CFF, bhvLamp),
		OBJECT(MODEL_NONE, -5367, -4559, 3753, 0, 0, 0, 0xFE2E0CAA, bhvLamp),
		OBJECT(MODEL_NONE, 3987, -3070, 8913, 0, 0, 0, 0x00FF0C00, bhvLamp),
		OBJECT(MODEL_NONE, 262, -4403, 3753, 0, 0, 0, 0xFF990C33, bhvLamp),
		OBJECT(MODEL_NONE, 3987, -3070, 7156, 0, 0, 0, 0xFF000C00, bhvLamp),
		OBJECT(MODEL_RED_FLAME, -5911, -7016, 8824, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_RED_FLAME, -5920, -7016, 11234, 0, 0, 0, 0x00000000, bhvFlame),
		OBJECT(MODEL_TOAD_HEADPHONES, -4871, -5980, 5312, 0, 0, 0, 0x01080000, bhvToadHeadphones),
		OBJECT(MODEL_TOAD_HEADPHONES, -1304, -5980, 5312, 0, 0, 0, 0x01080000, bhvToadHeadphones),
		OBJECT(MODEL_TOAD_HEADPHONES, 4577, -3661, 8941, 0, -89, 0, 0x01080000, bhvToadHeadphones),
		OBJECT(MODEL_NONE, -3095, -7665, 10947, 0, 0, 0, 0x00200000, bhvPoleGrabbing),
		OBJECT(MODEL_NONE, 1933, -7510, 7282, 0, 0, 0, 0x01000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_NONE, 345, 401, 12888, 0, 0, 0, 0x00000000, bhvBirdsSoundLoop),
		OBJECT(MODEL_WOODEN_SIGNPOST, -932, -9143, 14513, 0, 0, 0, 0x00010000, bhvMessagePanel),
		OBJECT(MODEL_TOAD_HEADPHONES, 3977, -4007, 4292, 0, 0, 0, 0x01040001, bhvToadHeadphones),
		OBJECT(MODEL_TOAD_HEADPHONES, -692, -8769, 11699, 0, 0, 0, 0x01000000, bhvToadHeadphones),
		OBJECT(MODEL_TOAD_HEADPHONES, -2654, -7777, 9100, 0, 0, 0, 0x01020000, bhvToadHeadphones),
		OBJECT(MODEL_TOAD_HEADPHONES, 2794, -7777, 9591, 0, 0, 0, 0x01030000, bhvToadHeadphones),
		OBJECT(MODEL_TOAD_HEADPHONES, -3670, -7293, 6984, 0, 0, 0, 0x01050000, bhvToadHeadphones),
		OBJECT(MODEL_TOAD_HEADPHONES, -5262, -7293, 8798, 0, 0, 0, 0x01060000, bhvToadHeadphones),
		OBJECT(MODEL_TOAD_HEADPHONES, -746, -5251, 4025, 0, 0, 0, 0x01070000, bhvToadHeadphones),
		OBJECT(MODEL_TOAD_HEADPHONES, -2188, -5251, 3753, 0, 0, 0, 0x01080000, bhvToadHeadphones),
		OBJECT(MODEL_TOAD_HEADPHONES, 1850, -4007, 2366, 0, 0, 0, 0x00090000, bhvToadHeadphones),
		OBJECT(MODEL_TOAD_HEADPHONES, 2847, -5251, 5905, 0, 0, 0, 0x01000000, bhvToadHeadphones),
		OBJECT(MODEL_NONE, 2649, -4007, 2728, 0, 0, 0, 0x000A0000, bhvInstantActiveWarp),
		TERRAIN(castle_grounds_area_1_collision),
		MACRO_OBJECTS(castle_grounds_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_HUB),
		TERRAIN_TYPE(TERRAIN_GRASS),
	END_AREA(),

	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, -363, -9310, 15051),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};
