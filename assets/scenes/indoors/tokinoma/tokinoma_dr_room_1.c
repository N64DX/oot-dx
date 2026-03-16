#include "assets/scenes/indoors/tokinoma/tokinoma_scene.h"

extern SceneCmd* questHeaders_tokinoma_room1[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_tokinoma_room1),
};

#include "assets/scenes/indoors/tokinoma/tokinoma_room_1.c"

static s16 dr_objects[] = {
#include "assets/scenes/indoors/tokinoma/dr/objects/room1_obj.inc.c"
};

static ActorEntry dr_actors[] = {
#include "assets/scenes/indoors/tokinoma/dr/actors/room1_actor.inc.c"
};

static SceneCmd dr_header[] = {
#include "assets/scenes/indoors/tokinoma/dr/headers/room1.inc.c"
};

SceneCmd* questHeaders_tokinoma_room1[] = {
    NULL,      // 0
    NULL,      // 1
    NULL,      // 2
    NULL,      // 3
    NULL,      // 4
    dr_header, // 5
    dr_header, // 6
    dr_header, // 7
    dr_header, // 8
    dr_header, // 9
};
