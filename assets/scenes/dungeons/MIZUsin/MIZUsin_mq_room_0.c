#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

extern SceneCmd* questHeaders_MIZUsin_room0[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_MIZUsin_room0),
};

#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_0.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room0_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room0_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room0.inc.c"
};

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/cmq/actors/room0_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/cmq/headers/room0.inc.c"
};

#define cq_header NULL

SceneCmd* questHeaders_MIZUsin_room0[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
