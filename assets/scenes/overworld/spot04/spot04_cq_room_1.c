#include "assets/scenes/overworld/spot04/spot04_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot04/spot04_room_1.c"

static s16 cq_objects_header3[] = {
#include "assets/scenes/overworld/spot04/cq/objects/room1_obj_header3.inc.c"
};

static ActorEntry cq_actors_header3[] = {
#include "assets/scenes/overworld/spot04/cq/actors/room1_actor_header3.inc.c"
};

#if OOT_VERSION <= NTSC_1_1

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot04/cq/headers/room1_header3.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot04/cq/headers/room1_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot04/cq/headers/room1.inc.c"
};

#else

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot04/cq/headers/room1_header3_pal.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot04/cq/headers/room1_altHeaders_pal.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot04/cq/headers/room1_pal.inc.c"
};

#endif

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
