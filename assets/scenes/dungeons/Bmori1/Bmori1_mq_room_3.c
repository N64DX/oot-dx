#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"

extern SceneCmd* questHeaders_Bmori1_room3[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_Bmori1_room3),
};

#include "assets/scenes/dungeons/Bmori1/Bmori1_room_3.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room3.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_Bmori1_room3[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
