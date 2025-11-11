#include "assets/scenes/dungeons/ydan/ydan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_ydan_room3[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ydan_room3),
};

#include "assets/scenes/dungeons/ydan/ydan_room_3.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room3.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ydan/cq/objects/room3_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/ydan/cq/actors/room3_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ydan/cq/headers/room3.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room3.inc.c"
};

SceneCmd* questHeaders_ydan_room3[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
