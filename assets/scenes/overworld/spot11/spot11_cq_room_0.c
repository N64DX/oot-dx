#include "assets/scenes/overworld/spot11/spot11_scene.h"

extern SceneCmd* questHeaders_spot11_room0[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot11_room0),
};

#include "assets/scenes/overworld/spot11/spot11_room_0.c"

static s16 cq_objects_header2[] = {
#include "assets/scenes/overworld/spot11/cq/objects/room0_obj_header2.inc.c"
};

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot11/cq/actors/room0_actor_header2.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot11/cq/headers/room0_header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot11/cq/headers/room0_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot11/cq/headers/room0.inc.c"
};

SceneCmd* questHeaders_spot11_room0[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
