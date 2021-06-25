#include "src/game/envfx_snow.h"

const GeoLayout drum_machine_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_RENDER_RANGE(-20, 5000),
		GEO_OPEN_NODE(),
			GEO_BILLBOARD_WITH_PARAMS_AND_DL(5, 0, 0, 0, drum_machine_APlane_mesh_layer_5),
		GEO_CLOSE_NODE(),
		GEO_RENDER_RANGE(-200, 1000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, drum_machine_DrumMachine_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_RENDER_RANGE(1000, 10000),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, drum_machine_DrumMachineLOD_mesh_layer_1),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(1, drum_machine_material_revert_render_settings),
		GEO_DISPLAY_LIST(5, drum_machine_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
