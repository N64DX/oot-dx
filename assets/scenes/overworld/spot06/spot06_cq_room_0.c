#include "assets/scenes/overworld/spot06/spot06_scene.h"

extern SceneCmd* questHeaders_spot06_room0[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot06_room0),
};

#include "assets/scenes/overworld/spot06/spot06_room_0.c"

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot06/cq/actors/room0_actor_header2.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot06/cq/headers/room0_header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot06/cq/headers/room0_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot06/cq/headers/room0.inc.c"
};

SceneCmd* questHeaders_spot06_room0[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
