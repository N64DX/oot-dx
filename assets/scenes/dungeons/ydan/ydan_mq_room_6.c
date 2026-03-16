#include "assets/scenes/dungeons/ydan/ydan_scene.h"

extern SceneCmd* questHeaders_ydan_room6[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ydan_room6),
};

#include "assets/scenes/dungeons/ydan/ydan_room_6.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room6_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/actors/room6_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room6.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_ydan_room6[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
