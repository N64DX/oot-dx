#include "assets/scenes/dungeons/bdan/bdan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_bdan_room10[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_bdan_room10),
};

#include "assets/scenes/dungeons/bdan/bdan_room_10.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room10_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room10_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room10.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/bdan/cq/objects/room10_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/bdan/cq/actors/room10_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/bdan/cq/headers/room10.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room10.inc.c"
};

SceneCmd* questHeaders_bdan_room10[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
