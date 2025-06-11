#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

#include "array_count.h"
#include "gfx.h"
#include "object.h"
#include "sequence.h"
#include "skybox.h"
#include "sys_matrix.h"
#include "ultra64.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/MIZUsin/MIZUsin_room_22.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/objects/room22_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/headers/room22.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
