#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_HIDAN_room26[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HIDAN_room26),
};

#include "assets/scenes/dungeons/HIDAN/HIDAN_room_26.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room26_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room26.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/cq/objects/room26_obj.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/HIDAN/cq/headers/room26.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room26.inc.c"
};

SceneCmd* questHeaders_HIDAN_room26[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
