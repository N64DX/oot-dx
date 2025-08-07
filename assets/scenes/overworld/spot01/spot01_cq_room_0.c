#include "assets/scenes/overworld/spot01/spot01_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot01/spot01_room_0.c"

static s16 cq_objects_header2[] = {
#include "assets/scenes/overworld/spot01/cq/objects/room0_obj_header2.inc.c"
};

static s16 cq_objects_header3[] = {
#include "assets/scenes/overworld/spot01/cq/objects/room0_obj_header3.inc.c"
};

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot01/cq/actors/room0_actor_header2.inc.c"
};

static ActorEntry cq_actors_header3[] = {
#include "assets/scenes/overworld/spot01/cq/actors/room0_actor_header3.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot01/cq/headers/room0_header2.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot01/cq/headers/room0_header3.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot01/cq/headers/room0_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot01/cq/headers/room0.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
