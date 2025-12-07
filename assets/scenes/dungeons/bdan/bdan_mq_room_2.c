#include "assets/scenes/dungeons/bdan/bdan_scene.h"

extern SceneCmd* questHeaders_bdan_room2[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_bdan_room2),
};

#include "assets/scenes/dungeons/bdan/bdan_room_2.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room2_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room2_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room2.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_bdan_room2[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
