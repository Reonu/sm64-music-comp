#include "src/game/envfx_snow.h"

const GeoLayout wood_platform_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_ASM(1, geo_set_env_color),
		GEO_DISPLAY_LIST(1, wood_platform_Cube_mesh_layer_1),
		GEO_DISPLAY_LIST(1, wood_platform_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
