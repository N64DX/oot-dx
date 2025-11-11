#include "assets/scenes/dungeons/bdan/bdan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_bdan_room0[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_bdan_room0),
};

#include "assets/scenes/dungeons/bdan/bdan_room_0.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room0_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room0_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room0.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/bdan/cq/objects/room0_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/bdan/cq/actors/room0_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/bdan/cq/headers/room0.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room0.inc.c"
};

SceneCmd* questHeaders_bdan_room0[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
