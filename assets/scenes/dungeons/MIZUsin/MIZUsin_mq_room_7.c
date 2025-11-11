#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_MIZUsin_room7[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_MIZUsin_room7),
};

#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_7.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room7_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room7_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room7.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/objects/room7_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/actors/room7_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/cq/headers/room7.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room7.inc.c"
};

SceneCmd* questHeaders_MIZUsin_room7[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
