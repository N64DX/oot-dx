#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_15.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/objects/room15_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/actors/room15_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room15.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/objects/room15_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/actors/room15_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/headers/room15.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
