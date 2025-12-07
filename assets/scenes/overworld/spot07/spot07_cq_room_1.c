#include "assets/scenes/overworld/spot07/spot07_scene.h"

extern SceneCmd* questHeaders_spot07_room1[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot07_room1),
};

#include "assets/scenes/overworld/spot07/spot07_room_1.c"

static s16 cq_objects_header2[] = {
#include "assets/scenes/overworld/spot07/cq/objects/room1_obj_header2.inc.c"
};

static s16 cq_objects_header3[] = {
#include "assets/scenes/overworld/spot07/cq/objects/room1_obj_header3.inc.c"
};

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot07/cq/actors/room1_actor_header2.inc.c"
};

static ActorEntry cq_actors_header3[] = {
#include "assets/scenes/overworld/spot07/cq/actors/room1_actor_header3.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot07/cq/headers/room1_header2.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot07/cq/headers/room1_header3.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot07/cq/headers/room1_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot07/cq/headers/room1.inc.c"
};

SceneCmd* questHeaders_spot07_room1[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
