#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"

extern SceneCmd* questHeaders_Bmori1_room7[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_Bmori1_room7),
};

#include "assets/scenes/dungeons/Bmori1/Bmori1_room_7.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room7_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room7_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room7.inc.c"
};

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/cmq/actors/room7_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/Bmori1/cmq/headers/room7.inc.c"
};

#define cq_header NULL

SceneCmd* questHeaders_Bmori1_room7[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
