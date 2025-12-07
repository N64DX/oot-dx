#include "assets/scenes/overworld/spot03/spot03_scene.h"

extern SceneCmd* questHeaders_spot03_room1[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot03_room1),
};

#include "assets/scenes/overworld/spot03/spot03_room_1.c"

static s16 cq_objects_header2[] = {
#include "assets/scenes/overworld/spot03/cq/objects/room1_obj_header2.inc.c"
};

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot03/cq/actors/room1_actor_header2.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot03/cq/headers/room1_header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot03/cq/headers/room1_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot03/cq/headers/room1.inc.c"
};

SceneCmd* questHeaders_spot03_room1[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
