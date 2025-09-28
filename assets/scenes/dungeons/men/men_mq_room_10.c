#include "assets/scenes/dungeons/men/men_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/men/men_room_10.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room10_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room10_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room10.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/men/cq/objects/room10_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/men/cq/actors/room10_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/men/cq/headers/room10.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
