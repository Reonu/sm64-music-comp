#include "src/game/envfx_snow.h"

const GeoLayout slim_phatty_collected_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_RENDER_RANGE(0, 20000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(5, slim_phatty_collected_SlimPhattyCollected_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(5, slim_phatty_collected_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
