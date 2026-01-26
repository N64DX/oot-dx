#include "assets/scenes/overworld/spot12/spot12_scene.h"

extern SceneCmd* questHeaders_spot12_room1[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot12_room1),
};

#include "assets/scenes/overworld/spot12/spot12_room_1.c"

static s16 cq_objects[] = {
#include "assets/scenes/overworld/spot12/cq/objects/room1_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/overworld/spot12/cq/actors/room1_actor.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot12/cq/headers/room1_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot12/cq/headers/room1.inc.c"
};

SceneCmd* questHeaders_spot12_room1[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
