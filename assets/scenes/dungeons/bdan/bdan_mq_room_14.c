#include "assets/scenes/dungeons/bdan/bdan_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/bdan/bdan_room_14.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room14_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room14_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room14.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
