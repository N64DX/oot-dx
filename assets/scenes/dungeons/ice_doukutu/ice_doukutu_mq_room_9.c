#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_9.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/objects/room9_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/actors/room9_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/headers/room9.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
