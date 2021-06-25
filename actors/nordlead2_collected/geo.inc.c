#include "src/game/envfx_snow.h"

const GeoLayout nordlead2_collected_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_RENDER_RANGE(0, 10000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(5, nordlead2_collected_NordLead2Collected_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(5, nordlead2_collected_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
