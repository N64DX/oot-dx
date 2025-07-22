#include "assets/scenes/overworld/spot12/spot12_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot12/spot12_scene.c"

static s16 cq_exit_list[] = {
#include "assets/scenes/overworld/spot12/cq/scene/exitList.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot12/cq/scene/header2.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot12/cq/scene/header3.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot12/cq/scene/altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot12/cq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
