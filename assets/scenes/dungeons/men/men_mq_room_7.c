#include "assets/scenes/dungeons/men/men_scene.h"

extern SceneCmd* questHeaders_men_room7[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_men_room7),
};

#include "assets/scenes/dungeons/men/men_room_7.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room7_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room7_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room7.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_men_room7[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
