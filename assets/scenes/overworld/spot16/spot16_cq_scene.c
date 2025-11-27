#include "assets/scenes/overworld/spot16/spot16_scene.h"

extern SceneCmd* questHeaders_spot16_scene[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot16_scene),
};

#include "assets/scenes/overworld/spot16/spot16_scene.c"
    
static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot16/cq/scene/header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot16/cq/scene/altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot16/cq/scene/header.inc.c"
};

SceneCmd* questHeaders_spot16_scene[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
