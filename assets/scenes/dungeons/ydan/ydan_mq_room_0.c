#include "assets/scenes/dungeons/ydan/ydan_scene.h"
#include "save.h"

static SceneCmd* questHeaders[QUEST_MAX];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/ydan/ydan_room_0.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room0_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ydan/mq/actors/room0_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room0.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ydan/cq/objects/room0_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/ydan/cq/actors/room0_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ydan/cq/headers/room0.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room0.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
