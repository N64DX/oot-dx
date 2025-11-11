#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_MIZUsin_room22[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_MIZUsin_room22),
};

#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_22.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room22_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room22.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/objects/room22_obj.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/headers/room22.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room22.inc.c"
};

SceneCmd* questHeaders_MIZUsin_room22[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
