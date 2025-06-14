#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/Bmori1/Bmori1_room_1.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room1_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room1_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room1.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
