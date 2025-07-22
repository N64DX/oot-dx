#include "assets/scenes/dungeons/gerudoway/gerudoway_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/dungeons/gerudoway/gerudoway_room_0.c"

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/gerudoway/cq/actors/room0_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/gerudoway/cq/headers/room0.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
