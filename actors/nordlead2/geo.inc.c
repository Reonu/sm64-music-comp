#include "src/game/envfx_snow.h"

const GeoLayout nordlead2_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_BILLBOARD_WITH_PARAMS_AND_DL(5, 0, 0, 0, nordlead2_CPlane_mesh_layer_5),
		GEO_RENDER_RANGE(-200, 1000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, nordlead2_NordLead2_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_RENDER_RANGE(1000, 10000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, nordlead2_NordLead2LOD_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(1, nordlead2_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, nordlead2_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
