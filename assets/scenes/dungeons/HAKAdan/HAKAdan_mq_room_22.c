#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_HAKAdan_room22[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HAKAdan_room22),
};

#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_22.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room22_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room22.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/cq/objects/room22_obj.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/cq/headers/room22.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room22.inc.c"
};

SceneCmd* questHeaders_HAKAdan_room22[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
