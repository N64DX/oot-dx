#include "assets/scenes/dungeons/ydan/ydan_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/ydan/ydan_room_11.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ydan/mq/objects/room11_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ydan/mq/headers/room11.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ydan/cq/objects/room11_obj.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ydan/cq/headers/room11.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
