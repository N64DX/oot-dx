#include "assets/scenes/shops/shop1/shop1_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_shop1_room0[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_shop1_room0),
};

#include "assets/scenes/shops/shop1/shop1_room_0.c"

static s16 cq_objects[] = {
#include "assets/scenes/shops/shop1/cq/objects/room0_obj.inc.c"
};

static s16 cq_objects_header2[] = {
#include "assets/scenes/shops/shop1/cq/objects/room0_obj_header2.inc.c"
};

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/shops/shop1/cq/actors/room0_actor_header2.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/shops/shop1/cq/headers/room0_header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/shops/shop1/cq/headers/room0_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/shops/shop1/cq/headers/room0.inc.c"
};

SceneCmd* questHeaders_shop1_room0[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
