#include "assets/scenes/dungeons/bdan/bdan_scene.h"

extern SceneCmd* questHeaders_bdan_room11[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_bdan_room11),
};

#include "assets/scenes/dungeons/bdan/bdan_room_11.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room11_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room11_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room11.inc.c"
};

static s16 cmq_objects[] = {
#include "assets/scenes/dungeons/bdan/cmq/objects/room11_obj.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/bdan/cmq/headers/room11.inc.c"
};

#define cq_header NULL

SceneCmd* questHeaders_bdan_room11[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
