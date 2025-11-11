#include "assets/scenes/overworld/spot09/spot09_scene.h"
#include "save.h"
#include "versions.h"

extern SceneCmd* questHeaders_spot09_scene[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot09_scene),
};

#include "assets/scenes/overworld/spot09/spot09_scene.c"

static s16 cq_exit_list[] = {
#include "assets/scenes/overworld/spot09/cq/scene/exitList.inc.c"
};

#if OOT_NTSC

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot09/cq/scene/header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot09/cq/scene/altHeaders.inc.c"
};

#else

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot09/cq/scene/header2_pal.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot09/cq/scene/altHeaders_pal.inc.c"
};

#endif

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot09/cq/scene/header.inc.c"
};

SceneCmd* questHeaders_spot09_scene[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
