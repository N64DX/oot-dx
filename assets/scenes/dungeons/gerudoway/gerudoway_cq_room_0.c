#include "assets/scenes/dungeons/gerudoway/gerudoway_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_gerudoway_room0[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_gerudoway_room0),
};

#include "assets/scenes/dungeons/gerudoway/gerudoway_room_0.c"

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/gerudoway/cq/actors/room0_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/gerudoway/cq/headers/room0.inc.c"
};

SceneCmd* questHeaders_gerudoway_room0[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
