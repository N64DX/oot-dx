#include "assets/scenes/dungeons/men/men_scene.h"

extern SceneCmd* questHeaders_men_room2[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_men_room2),
};

#include "assets/scenes/dungeons/men/men_room_2.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room2_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room2_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room2.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_men_room2[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
