// sound_birds.inc.c
#include "src/game/game_init.h"
void bhv_birds_sound_loop(void) {
    /*
    if (gCamera->mode == CAMERA_MODE_BEHIND_MARIO)
        return;

    switch (o->oBehParams2ndByte) {
        case 0:
            cur_obj_play_sound_1(SOUND_OBJ2_BIRD_CHIRP1);
            break;

        case 1:
            cur_obj_play_sound_1(SOUND_GENERAL2_BIRD_CHIRP2);
            break;

        case 2:
            cur_obj_play_sound_1(SOUND_OBJ_BIRD_CHIRP3);
            break;
    }*/
    Vec3f dir = {0.0f, -1.0f, 0.0f};
    u8 lightLevel = gIsConsole ? 105 : 85;
    set_directional_light(dir, lightLevel, lightLevel, lightLevel+10);
    set_ambient_light(lightLevel/3,lightLevel/3,(lightLevel/3)+10);
    //print_text_fmt_int(20,20,"%d",lightLevel);
}
