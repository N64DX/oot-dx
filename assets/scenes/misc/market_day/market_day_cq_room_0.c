#include "assets/scenes/misc/market_day/market_day_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_market_day_room0[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_market_day_room0),
};

#include "assets/scenes/misc/market_day/market_day_room_0.c"

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/misc/market_day/cq/actors/room0_actor_header2.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/misc/market_day/cq/headers/room0_header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/misc/market_day/cq/headers/room0_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/misc/market_day/cq/headers/room0.inc.c"
};

SceneCmd* questHeaders_market_day_room0[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
