#include "assets/scenes/overworld/ganon_tou/ganon_tou_scene.h"
#include "save.h"

static SceneCmd* questHeaders[QUEST_MAX];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/ganon_tou/ganon_tou_room_0.c"

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/ganon_tou/cq/headers/room0.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
