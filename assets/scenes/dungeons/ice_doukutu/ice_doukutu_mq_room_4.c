#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_4.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/headers/room4.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
