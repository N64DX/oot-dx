#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_jyasinzou_room28[QUEST_MAX];

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

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/objects/room28_obj.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/headers/room28.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room28.inc.c"
};

SceneCmd* questHeaders_jyasinzou_room28[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
