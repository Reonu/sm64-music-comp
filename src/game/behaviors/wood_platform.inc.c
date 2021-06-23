#include "point_lights.h"

void bhv_wood_platform_loop(void) {
    Vec3f pos = {o->oPosX, o->oPosY + 300, o->oPosZ};
    switch(o->oAction) {
        case 0:
            if (o->oTimer > o->oBehParams2ndByte) {
                o->oAction = 1;
            }
            break;
        case 1:
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
}