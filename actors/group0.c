#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "geo_commands.h"

#include "make_const_nonconst.h"

// Note: This bin does not use bin IDs, unlike the other segmented bins.
#include "mario/model.inc.c"

#include "bubble/model.inc.c"

#include "walk_smoke/model.inc.c"

#include "burn_smoke/model.inc.c"

#include "stomp_smoke/model.inc.c"

#include "water_wave/model.inc.c"

#include "sparkle/model.inc.c"

#include "water_splash/model.inc.c"

#include "white_particle_small/model.inc.c"

#include "sparkle_animation/model.inc.c"

#include "whomp/model.inc.c"
#include "whomp/anims/data.inc.c"
#include "whomp/anims/table.inc.c"
#include "whomp/collision.inc.c"

#ifdef S2DEX_TEXT_ENGINE
#include "src/s2d_engine/config.h"
#include FONT_C_FILE
#endif
#include "lantern/model.inc.c"

#include "toad_headphones/model.inc.c"
#include "toad_headphones/anims/data.inc.c"
#include "toad_headphones/anims/table.inc.c"
#include "green_spring/model.inc.c"
#include "yellow_spring/model.inc.c"
#include "red_spring/model.inc.c"
#include "fan_spring/model.inc.c"
#include "wood_platform/model.inc.c"
#include "wood_platform/collision.inc.c"
#include "wood_platform_intangible/model.inc.c"

#include "bullet_bill/model.inc.c"

#include "snowman/model.inc.c"
#include "snowman/anims/data.inc.c"
#include "snowman/anims/table.inc.c"

#include "spindrift/model.inc.c"
#include "spindrift/anims/data.inc.c"
#include "spindrift/anims/table.inc.c"

#include "thwomp/model.inc.c"
#include "thwomp/collision.inc.c"
#include "snow_boulder/model.inc.c"

#include "scuttlebug/model.inc.c"
#include "scuttlebug/anims/data.inc.c"
#include "scuttlebug/anims/table.inc.c"
#include "drum_machine/model.inc.c"
#include "drum_machine_collected/model.inc.c"
#include "slim_phatty/model.inc.c"
#include "slim_phatty_collected/model.inc.c"
#include "nordlead2/model.inc.c"
#include "nordlead2_collected/model.inc.c"