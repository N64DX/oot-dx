#include "assets/scenes/overworld/spot04/spot04_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot04/spot04_scene.c"

static ActorEntry cq_player_entry_list[] = {
#include "assets/scenes/overworld/spot04/cq/scene/playerEntryList.inc.c"
};

static Spawn cq_spawn_list[] = {
#include "assets/scenes/overworld/spot04/cq/scene/spawnList.inc.c"
};

#if OOT_NTSC

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot04/cq/scene/header2.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot04/cq/scene/header3.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot04/cq/scene/altHeaders.inc.c"
};

#else

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot04/cq/scene/header2_pal.inc.c"
};

static SceneCmd cq_header3[] = {
#include "assets/scenes/overworld/spot04/cq/scene/header3_pal.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot04/cq/scene/altHeaders_pal.inc.c"
};

#endif

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot04/cq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
