#include "assets/scenes/overworld/spot00/spot00_scene.h"
#include "save.h"

static SceneCmd* questHeaders[QUEST_MAX];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot00/spot00_scene.c"

static s16 cq_exit_list[] = {
#include "assets/scenes/overworld/spot00/cq/scene/exitList.inc.c"
};

#if OOT_NTSC

static SceneCmd cq_header1[] = {
#include "assets/scenes/overworld/spot00/cq/scene/header1.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot00/cq/scene/header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot00/cq/scene/altHeaders.inc.c"
};

#else
    
static SceneCmd cq_header1[] = {
#include "assets/scenes/overworld/spot00/cq/scene/header1_pal.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot00/cq/scene/header2_pal.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot00/cq/scene/altHeaders_pal.inc.c"
};

#endif

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot00/cq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
