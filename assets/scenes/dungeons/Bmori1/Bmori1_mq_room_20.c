#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_Bmori1_room20[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_Bmori1_room20),
};

#include "assets/scenes/dungeons/Bmori1/Bmori1_room_20.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room20_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room20_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room20.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/cq/objects/room20_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/cq/actors/room20_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/Bmori1/cq/headers/room20.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room20.inc.c"
};

SceneCmd* questHeaders_Bmori1_room20[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
