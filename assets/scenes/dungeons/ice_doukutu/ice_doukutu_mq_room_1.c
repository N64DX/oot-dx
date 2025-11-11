#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_ice_doukutu_room1[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ice_doukutu_room1),
};

#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_1.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/objects/room1_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/actors/room1_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/headers/room1.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ice_doukutu/cq/objects/room1_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/ice_doukutu/cq/actors/room1_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/cq/headers/room1.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/headers/room1.inc.c"
};

SceneCmd* questHeaders_ice_doukutu_room1[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
