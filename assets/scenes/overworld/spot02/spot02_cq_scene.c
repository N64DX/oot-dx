#include "assets/scenes/overworld/spot02/spot02_scene.h"
#include "versions.h"

extern SceneCmd* questHeaders_spot02_scene[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot02_scene),
};

#include "assets/scenes/overworld/spot02/spot02_scene.c"

static Path cq_path_list_header2[] = {
#include "assets/scenes/overworld/spot02/cq/scene/pathList_header2.inc.c"
};

static Path cq_path_list_header3[] = {
#include "assets/scenes/overworld/spot02/cq/scene/pathList_header3.inc.c"
};

#if OOT_VERSION == NTSC_1_0

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot02/cq/scene/header2.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot02/cq/scene/header3.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot02/cq/scene/altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot02/cq/scene/header.inc.c"
};

#else
    
static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot02/cq/scene/header2_pal.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot02/cq/scene/header3_pal.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot02/cq/scene/altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot02/cq/scene/header_pal.inc.c"
};

#endif

SceneCmd* questHeaders_spot02_scene[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
