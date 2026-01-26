#include "assets/scenes/dungeons/ganon_demo/ganon_demo_scene.h"

extern SceneCmd* questHeaders_ganon_demo_room0[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ganon_demo_room0),
};

#include "assets/scenes/dungeons/ganon_demo/ganon_demo_room_0.c"

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ganon_demo/room0_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/ganon_demo/room0_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ganon_demo/room0.inc.c"
};

#define mq_header  NULL
#define cmq_header cq_header

SceneCmd* questHeaders_ganon_demo_room0[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
