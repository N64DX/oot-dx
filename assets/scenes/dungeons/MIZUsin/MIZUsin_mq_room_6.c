#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_6.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room6_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room6_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room6.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
