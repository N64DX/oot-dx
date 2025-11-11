#include "assets/scenes/overworld/ganon_tou/ganon_tou_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_ganon_tou_scene[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ganon_tou_scene),
};

#include "assets/scenes/overworld/ganon_tou/ganon_tou_scene.c"

static s16 cq_exit_list[] = {
#include "assets/scenes/overworld/ganon_tou/cq/scene/exitList.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/ganon_tou/cq/scene/header.inc.c"
};

SceneCmd* questHeaders_ganon_tou_scene[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
