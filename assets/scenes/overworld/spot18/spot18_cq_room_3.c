#include "assets/scenes/overworld/spot18/spot18_scene.h"
#include "save.h"

static SceneCmd* questHeaders[QUEST_MAX];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot18/spot18_room_3.c"

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot18/cq/actors/room3_actor_header2.inc.c"
};

static ActorEntry cq_actors_header3[] = {
#include "assets/scenes/overworld/spot18/cq/actors/room3_actor_header3.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot18/cq/headers/room3_header2.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot18/cq/headers/room3_header3.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot18/cq/headers/room3_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot18/cq/headers/room3.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
