#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_10.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/objects/room10_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/actors/room10_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room10.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
