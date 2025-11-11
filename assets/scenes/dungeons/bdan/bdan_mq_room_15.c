#include "assets/scenes/dungeons/bdan/bdan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_bdan_room15[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_bdan_room15),
};

#include "assets/scenes/dungeons/bdan/bdan_room_15.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room15_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room15.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/bdan/cq/objects/room15_obj.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/bdan/cq/headers/room15.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room15.inc.c"
};

SceneCmd* questHeaders_bdan_room15[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
