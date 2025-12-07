#include "assets/scenes/overworld/spot12/spot12_scene.h"
#include "versions.h"

extern SceneCmd* questHeaders_spot12_scene[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot12_scene),
};

#include "assets/scenes/overworld/spot12/spot12_scene.c"

static s16 cq_exit_list[] = {
#include "assets/scenes/overworld/spot12/cq/scene/exitList.inc.c"
};

#if OOT_NTSC

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot12/cq/scene/header2.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot12/cq/scene/header3.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot12/cq/scene/altHeaders.inc.c"
};

#else

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot12/cq/scene/header2_pal.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot12/cq/scene/header3_pal.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot12/cq/scene/altHeaders_pal.inc.c"
};

#endif

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot12/cq/scene/header.inc.c"
};

SceneCmd* questHeaders_spot12_scene[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
