#include "assets/scenes/dungeons/men/men_scene.h"

extern SceneCmd* questHeaders_men_room3[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_men_room3),
};

#include "assets/scenes/dungeons/men/men_room_3.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room3.inc.c"
};

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/men/cmq/actors/room3_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/men/cmq/headers/room3.inc.c"
};

#define cq_header NULL

SceneCmd* questHeaders_men_room3[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
