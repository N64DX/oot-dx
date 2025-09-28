#include "assets/scenes/dungeons/men/men_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/men/men_room_1.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room1_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room1_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room1.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/men/cq/objects/room1_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/men/cq/actors/room1_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/men/cq/headers/room1.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
