#include "assets/scenes/dungeons/ddan/ddan_scene.h"

extern SceneCmd* questHeaders_ddan_room5[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ddan_room5),
};

#include "assets/scenes/dungeons/ddan/ddan_room_5.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ddan/mq/objects/room5_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ddan/mq/actors/room5_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/headers/room5.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_ddan_room5[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
