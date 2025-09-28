#include "assets/scenes/dungeons/bdan/bdan_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/bdan/bdan_room_15.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/bdan/mq/objects/room15_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/headers/room15.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/bdan/cq/objects/room15_obj.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/bdan/cq/headers/room15.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
