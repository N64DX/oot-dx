#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"

extern SceneCmd* questHeaders_jyasinzou_room7[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_jyasinzou_room7),
};

#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_7.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/objects/room7_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/actors/room7_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room7.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_jyasinzou_room7[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
