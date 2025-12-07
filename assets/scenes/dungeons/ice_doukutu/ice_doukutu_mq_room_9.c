#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"

extern SceneCmd* questHeaders_ice_doukutu_room9[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ice_doukutu_room9),
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

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_ice_doukutu_room9[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
