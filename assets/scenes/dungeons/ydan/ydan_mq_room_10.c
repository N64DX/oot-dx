#include "assets/scenes/dungeons/ydan/ydan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_ydan_room10[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ydan_room10),
};

#include "assets/scenes/dungeons/ydan/ydan_room_10.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room10_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/actors/room10_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room10.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ydan/cq/objects/room10_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/ydan/cq/actors/room10_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ydan/cq/headers/room10.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room10.inc.c"
};

SceneCmd* questHeaders_ydan_room10[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
