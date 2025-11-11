#include "assets/scenes/indoors/miharigoya/miharigoya_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_miharigoya_scene[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_miharigoya_scene),
};

#include "assets/scenes/indoors/miharigoya/miharigoya_scene.c"

static s16 cq_exit_list[] = {
#include "assets/scenes/indoors/miharigoya/cq/scene/exitList.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/indoors/miharigoya/cq/scene/header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/indoors/miharigoya/cq/scene/altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/indoors/miharigoya/cq/scene/header.inc.c"
};

SceneCmd* questHeaders_miharigoya_scene[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
