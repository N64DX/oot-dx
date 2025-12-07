#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

extern SceneCmd* questHeaders_MIZUsin_room2[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_MIZUsin_room2),
};

#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_2.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room2_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room2_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room2.inc.c"
};

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/cmq/actors/room2_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/cmq/headers/room2.inc.c"
};

#define cq_header NULL

SceneCmd* questHeaders_MIZUsin_room2[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
