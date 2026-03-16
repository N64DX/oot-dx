#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"

extern SceneCmd* questHeaders_jyasinzou_room28[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_jyasinzou_room28),
};

#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_28.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/objects/room28_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room28.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_jyasinzou_room28[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
