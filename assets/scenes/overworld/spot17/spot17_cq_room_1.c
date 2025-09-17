#include "assets/scenes/overworld/spot17/spot17_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot17/spot17_room_1.c"

static s16 cq_objects_header2[] = {
#include "assets/scenes/overworld/spot17/cq/objects/room1_obj_header2.inc.c"
};

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot17/cq/actors/room1_actor_header2.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot17/cq/headers/room1_header2.inc.c"
};

#if OOT_VERSION <= NTSC_1_1

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot17/cq/headers/room1_altHeaders.inc.c"
};

#else

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot17/cq/headers/room1_altHeaders_pal.inc.c"
};

#endif

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot17/cq/headers/room1.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
