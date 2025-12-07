#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

extern SceneCmd* questHeaders_MIZUsin_room19[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_MIZUsin_room19),
};

#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_19.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room19_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/actors/room19_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room19.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_MIZUsin_room19[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
