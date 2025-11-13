#include "assets/scenes/overworld/spot10/spot10_scene.h"

extern SceneCmd* questHeaders_spot10_room9[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot10_room9),
};

#include "assets/scenes/overworld/spot10/spot10_room_9.c"

static s16 cq_objects_header2[] = {
#include "assets/scenes/overworld/spot10/cq/objects/room9_obj_header2.inc.c"
};

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot10/cq/actors/room9_actor_header2.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot10/cq/headers/room9_header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot10/cq/headers/room9_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot10/cq/headers/room9.inc.c"
};

SceneCmd* questHeaders_spot10_room9[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
