#include "src/game/envfx_snow.h"

const GeoLayout drum_machine_collected_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_DISPLAY_LIST(5, drum_machine_collected_DrumMachineCollected_mesh_layer_5),
		GEO_DISPLAY_LIST(5, drum_machine_collected_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
