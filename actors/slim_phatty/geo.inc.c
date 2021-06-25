#include "src/game/envfx_snow.h"

const GeoLayout slim_phatty_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(5, 0, 0, 0, slim_phatty_BPlane_mesh_layer_5),
		GEO_RENDER_RANGE(-200, 1000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, slim_phatty_SlimPhatty_mesh_layer_1),
			GEO_DISPLAY_LIST(6, slim_phatty_SlimPhatty_mesh_layer_6),
		GEO_CLOSE_NODE(),
		GEO_RENDER_RANGE(1000, 20000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, slim_phatty_SlimPhattyLOD_mesh_layer_1),
			GEO_DISPLAY_LIST(6, slim_phatty_SlimPhattyLOD_mesh_layer_6),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(6, slim_phatty_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, slim_phatty_material_revert_render_settings),
		GEO_DISPLAY_LIST(1, slim_phatty_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
