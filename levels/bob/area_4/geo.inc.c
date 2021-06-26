#include "src/game/envfx_snow.h"

const GeoLayout bob_area_4_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_TRANSLATE_NODE_WITH_DL(1, -8845, -6450, 17010, bob_dl_A_Part1_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -8845, -6450, 17010, bob_dl_A_Part2_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -1136, -4889, 16868, bob_dl_A_Pillar_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 882, -4889, 16868, bob_dl_A_Pillar_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 277, -4889, 16945, bob_dl_A_Pillar_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1892, -4346, 16868, bob_dl_A_Pillar_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 2782, -4889, 16868, bob_dl_A_Pillar_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 346, -2362, 18240, bob_dl_B_Stalactite_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 3477, -2362, 17625, bob_dl_B_Stalactite_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 2031, -2362, 18154, bob_dl_B_Stalactite_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -2129, -2357, 17333, bob_dl_B_Stalactite_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -7605, -2357, 17529, bob_dl_B_Stalactite_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(4, -8845, -6450, 17010, bob_dl_hangableVisual_mesh_layer_4),
		GEO_TRANSLATE_NODE_WITH_DL(1, -8845, -6509, 17010, bob_dl_Invisible_instant_warp_001_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -8788, -4559, 18680, bob_dl_Rocks_002_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -10670, -4379, 18680, bob_dl_Rocks_003_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -4461, -4245, 18680, bob_dl_Rocks_004_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, 1126, -4355, 18680, bob_dl_Rocks_006_mesh_layer_1),
		GEO_TRANSLATE_NODE_WITH_DL(1, -8845, -6450, 17010, bob_dl_Z_background_mesh_layer_1),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout bob_area_4[] = {
	GEO_NODE_SCREEN_AREA(10, SCREEN_WIDTH/2, SCREEN_HEIGHT/2, SCREEN_WIDTH/2, SCREEN_HEIGHT/2),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100.0000),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0x0001),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45.0000, 100, 30000, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(CAMERA_MODE_8_DIRECTIONS, 0, 0, -300000, 0, -100, -300000, geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_BRANCH(1, bob_area_4_geo),
					GEO_RENDER_OBJ(),
					GEO_ASM(ENVFX_MODE_NONE, geo_envfx_main),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(4, bob_dl_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, bob_dl_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
