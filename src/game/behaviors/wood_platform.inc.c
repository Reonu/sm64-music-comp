#include "point_lights.h"

#define BASE_VALUE 10

void bhv_wood_platform_loop(void) {
    Vec3f pos = { o->oPosX, o->oPosY + 300, o->oPosZ };
    u8 r = 0;
    // u8 r = BASE_VALUE;

    switch(o->oAction) {
        case 0:
            if (o->oTimer > o->oBehParams2ndByte) {
                o->oAction = 1;
            }
            break;
        case 1:
            // r = BASE_VALUE + o->oTimer;
            r = o->oTimer;
            if (o->oTimer > 125) {
                o->oAction = 2;
                cur_obj_become_intangible();
                cur_obj_set_model(MODEL_WOOD_PLATFORM_INTANGIBLE);
            }
            load_object_collision_model();

            //emit_light(pos, (o->oTimer*2), 0, 0, 0, 0, 45);
            break;
        case 2:
            if (o->oTimer > 125) {
                o->oAction = 1;
                cur_obj_become_tangible();
                cur_obj_set_model(MODEL_WOOD_PLATFORM);
            }
            break;
    }
    // o->oEnvRGB = ((r << 16) | (BASE_VALUE << 8) | BASE_VALUE);
    o->oEnvRGB = r << 16;
}

void bhv_wood_platform_init(void) {
    // o->oEnvRGB = ((BASE_VALUE << 16) | (BASE_VALUE << 8) | BASE_VALUE);
    o->oEnvRGB = 0;
}
