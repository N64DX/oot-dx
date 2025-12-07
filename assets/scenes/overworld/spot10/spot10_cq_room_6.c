#include "assets/scenes/overworld/spot10/spot10_scene.h"

extern SceneCmd* questHeaders_spot10_room6[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot10_room6),
};

#include "assets/scenes/overworld/spot10/spot10_room_6.c"

static s16 cq_objects_header2[] = {
#include "assets/scenes/overworld/spot10/cq/objects/room6_obj_header2.inc.c"
};

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot10/cq/actors/room6_actor_header2.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot10/cq/headers/room6_header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot10/cq/headers/room6_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot10/cq/headers/room6.inc.c"
};

SceneCmd* questHeaders_spot10_room6[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
