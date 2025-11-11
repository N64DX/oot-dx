#include "assets/scenes/dungeons/bdan/bdan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_bdan_room14[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_bdan_room14),
};

#include "assets/scenes/dungeons/bdan/bdan_room_14.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room14_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/actors/room14_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room14.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/bdan/cq/objects/room14_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/bdan/cq/actors/room14_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/bdan/cq/headers/room14.inc.c"
};

static s16 cmq_objects[] = {
#include "assets/scenes/dungeons/bdan/cmq/objects/room14_obj.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/bdan/cmq/headers/room14.inc.c"
};

SceneCmd* questHeaders_bdan_room14[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
