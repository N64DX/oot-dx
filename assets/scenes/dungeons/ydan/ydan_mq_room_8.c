#include "assets/scenes/dungeons/ydan/ydan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_ydan_room8[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ydan_room8),
};

#include "assets/scenes/dungeons/ydan/ydan_room_8.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room8_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/actors/room8_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room8.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ydan/cq/objects/room8_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/ydan/cq/actors/room8_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ydan/cq/headers/room8.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room8.inc.c"
};

SceneCmd* questHeaders_ydan_room8[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
