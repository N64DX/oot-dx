#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

extern SceneCmd* questHeaders_MIZUsin_room1[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_MIZUsin_room1),
};

#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_1.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room1_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room1_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room1.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/objects/room1_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/actors/room1_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/headers/room1.inc.c"
};

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/cmq/actors/room1_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/cmq/headers/room1.inc.c"
};

SceneCmd* questHeaders_MIZUsin_room1[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
