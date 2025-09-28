#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_0.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room0_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room0_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room0.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/objects/room0_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/actors/room0_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/headers/room0.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
