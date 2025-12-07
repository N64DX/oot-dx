#include "assets/scenes/overworld/spot20/spot20_scene.h"

extern SceneCmd* questHeaders_spot20_room0[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot20_room0),
};

#include "assets/scenes/overworld/spot20/spot20_room_0.c"

static s16 cq_objects_header2[] = {
#include "assets/scenes/overworld/spot20/cq/objects/room0_obj_header2.inc.c"
};

static s16 cq_objects_header3[] = {
#include "assets/scenes/overworld/spot20/cq/objects/room0_obj_header3.inc.c"
};

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot20/cq/actors/room0_actor_header2.inc.c"
};

static ActorEntry cq_actors_header3[] = {
#include "assets/scenes/overworld/spot20/cq/actors/room0_actor_header3.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot20/cq/headers/room0_header2.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot20/cq/headers/room0_header3.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot20/cq/headers/room0_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot20/cq/headers/room0.inc.c"
};

SceneCmd* questHeaders_spot20_room0[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
