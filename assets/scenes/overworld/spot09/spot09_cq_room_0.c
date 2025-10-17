#include "assets/scenes/overworld/spot09/spot09_scene.h"
#include "save.h"

static SceneCmd* questHeaders[QUEST_MAX];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot09/spot09_room_0.c"

static s16 cq_objects_header2[] = {
#include "assets/scenes/overworld/spot09/cq/objects/room0_obj_header2.inc.c"
};

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot09/cq/actors/room0_actor_header2.inc.c"
};

#if OOT_VERSION <= NTSC_1_1

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot09/cq/headers/room0_header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot09/cq/headers/room0_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot09/cq/headers/room0.inc.c"
};

#else

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot09/cq/headers/room0_header2_pal.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot09/cq/headers/room0_altHeaders_pal.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot09/cq/headers/room0_pal.inc.c"
};

#endif

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
