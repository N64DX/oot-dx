#include "assets/scenes/dungeons/bdan/bdan_scene.h"

extern SceneCmd* questHeaders_bdan_room13[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_bdan_room13),
};

#include "assets/scenes/dungeons/bdan/bdan_room_13.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room13_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room13_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room13.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_bdan_room13[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
