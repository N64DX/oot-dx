#include "assets/scenes/overworld/spot02/spot02_scene.h"
#include "save.h"
#include "versions.h"

extern SceneCmd* questHeaders_spot02_room1[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot02_room1),
};

#include "assets/scenes/overworld/spot02/spot02_room_1.c"

static s16 cq_objects_header2[] = {
#include "assets/scenes/overworld/spot02/cq/objects/room1_obj_header2.inc.c"
};

static s16 cq_objects_header3[] = {
#include "assets/scenes/overworld/spot02/cq/objects/room1_obj_header3.inc.c"
};

static ActorEntry cq_actors_header2[] = {
#include "assets/scenes/overworld/spot02/cq/actors/room1_actor_header2.inc.c"
};

static ActorEntry cq_actors_header3[] = {
#include "assets/scenes/overworld/spot02/cq/actors/room1_actor_header3.inc.c"
};

#if OOT_VERSION == NTSC_1_0

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot02/cq/headers/room1_header2.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot02/cq/headers/room1_header3.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot02/cq/headers/room1_altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot02/cq/headers/room1.inc.c"
};

#else

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot02/cq/headers/room1_header2_pal.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot02/cq/headers/room1_header3_pal.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot02/cq/headers/room1_altHeaders_pal.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot02/cq/headers/room1_pal.inc.c"
};

#endif

SceneCmd* questHeaders_spot02_room1[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
