#include "assets/scenes/overworld/ganon_tou/ganon_tou_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_ganon_tou_room0[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ganon_tou_room0),
};

#include "assets/scenes/overworld/ganon_tou/ganon_tou_room_0.c"

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/ganon_tou/cq/headers/room0.inc.c"
};

SceneCmd* questHeaders_ganon_tou_room0[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
