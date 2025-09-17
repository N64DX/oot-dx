#include "assets/scenes/overworld/spot06/spot06_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot06/spot06_scene.c"

static s16 cq_exit_list[] = {
#include "assets/scenes/overworld/spot06/cq/scene/exitList.inc.c"
};

#if OOT_NTSC

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot06/cq/scene/header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot06/cq/scene/altHeaders.inc.c"
};

#else
    
static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot06/cq/scene/header2_pal.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot06/cq/scene/altHeaders_pal.inc.c"
};
    
#endif

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot06/cq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
