#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_MIZUsin_room3[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_MIZUsin_room3),
};

#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_3.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room3_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room3_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room3.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/objects/room3_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/actors/room3_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/headers/room3.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room3.inc.c"
};

SceneCmd* questHeaders_MIZUsin_room3[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
