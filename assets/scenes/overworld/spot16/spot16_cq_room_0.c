#include "assets/scenes/overworld/spot16/spot16_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot16/spot16_room_0.c"

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot16/cq/actors/room0_actor_header2.inc.c"
};

#if OOT_VERSION <= NTSC_1_1

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot16/cq/headers/room0_header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot16/cq/headers/room0_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot16/cq/headers/room0.inc.c"
};

#else

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot16/cq/headers/room0_header2_pal.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot16/cq/headers/room0_altHeaders_pal.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot16/cq/headers/room0_pal.inc.c"
};

#endif

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
