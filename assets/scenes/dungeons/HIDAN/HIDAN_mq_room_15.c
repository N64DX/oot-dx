#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/HIDAN/HIDAN_room_15.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room15_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room15_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room15.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
