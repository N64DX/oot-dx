#include "assets/scenes/dungeons/men/men_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/men/men_room_0.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room0_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room0_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room0.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
