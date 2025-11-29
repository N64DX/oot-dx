#include "assets/scenes/overworld/ganon_tou/ganon_tou_scene.h"

extern SceneCmd* questHeaders_ganon_tou_room0[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ganon_tou_room0),
};

#include "assets/scenes/overworld/ganon_tou/ganon_tou_room_0.c"

static s16 cq_objects[] = {
#include "assets/scenes/overworld/ganon_tou/cq/objects/room0_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/overworld/ganon_tou/cq/actors/room0_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/ganon_tou/cq/headers/room0.inc.c"
};

SceneCmd* questHeaders_ganon_tou_room0[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
