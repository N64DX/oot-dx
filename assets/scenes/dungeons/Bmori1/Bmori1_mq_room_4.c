#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"

extern SceneCmd* questHeaders_Bmori1_room4[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_Bmori1_room4),
};

#include "assets/scenes/dungeons/Bmori1/Bmori1_room_4.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room4.inc.c"
};

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/cmq/actors/room4_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/Bmori1/cmq/headers/room4.inc.c"
};

#define cq_header NULL

SceneCmd* questHeaders_Bmori1_room4[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
