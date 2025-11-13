#include "assets/scenes/dungeons/ydan/ydan_scene.h"

extern SceneCmd* questHeaders_ydan_room11[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ydan_room11),
};

#include "assets/scenes/dungeons/ydan/ydan_room_11.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room11_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room11.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_ydan_room11[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
