#include "assets/scenes/dungeons/ddan/ddan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_ddan_room16[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ddan_room16),
};

#include "assets/scenes/dungeons/ddan/ddan_room_16.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ddan/mq/objects/room16_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/headers/room16.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ddan/cq/objects/room16_obj.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ddan/cq/headers/room16.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ddan/mq/headers/room16.inc.c"
};

SceneCmd* questHeaders_ddan_room16[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
