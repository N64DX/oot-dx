#include "assets/scenes/overworld/spot18/spot18_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot18/spot18_scene.c"

#if OOT_NTSC

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot18/cq/scene/header3.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot18/cq/scene/altHeaders.inc.c"
};

#else

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot18/cq/scene/header3_pal.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot18/cq/scene/altHeaders_pal.inc.c"
};

#endif

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot18/cq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
