#include "assets/scenes/dungeons/ddan_boss/ddan_boss_scene.h"

extern SceneCmd* questHeaders_ddan_boss_room1[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ddan_boss_room1),
};

#include "assets/scenes/dungeons/ddan_boss/ddan_boss_room_1.c"

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ddan_boss/room1_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/ddan_boss/room1_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ddan_boss/room1.inc.c"
};

#define mq_header  NULL
#define cmq_header cq_header

SceneCmd* questHeaders_ddan_boss_room1[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
