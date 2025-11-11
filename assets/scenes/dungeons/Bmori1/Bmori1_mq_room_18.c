#include "assets/scenes/dungeons/Bmori1/Bmori1_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_Bmori1_room18[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_Bmori1_room18),
};

#include "assets/scenes/dungeons/Bmori1/Bmori1_room_18.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/mq/objects/room18_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/mq/actors/room18_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room18.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/Bmori1/cq/objects/room18_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/Bmori1/cq/actors/room18_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/Bmori1/cq/headers/room18.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/Bmori1/mq/headers/room18.inc.c"
};

SceneCmd* questHeaders_Bmori1_room18[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
