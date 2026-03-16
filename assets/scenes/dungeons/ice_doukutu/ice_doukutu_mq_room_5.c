#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"

extern SceneCmd* questHeaders_ice_doukutu_room5[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ice_doukutu_room5),
};

#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_5.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/objects/room5_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/actors/room5_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/headers/room5.inc.c"
};

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/ice_doukutu/cmq/actors/room5_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/cmq/headers/room5.inc.c"
};

#define cq_header NULL

SceneCmd* questHeaders_ice_doukutu_room5[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
