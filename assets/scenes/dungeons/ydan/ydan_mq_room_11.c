#include "assets/scenes/dungeons/ydan/ydan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_ydan_room11[QUEST_MAX];

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

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ydan/cq/objects/room11_obj.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ydan/cq/headers/room11.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room11.inc.c"
};

SceneCmd* questHeaders_ydan_room11[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
