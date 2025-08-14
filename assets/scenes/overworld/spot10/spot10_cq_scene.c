#include "assets/scenes/overworld/spot10/spot10_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/overworld/spot10/spot10_scene.c"

static ActorEntry cq_player_entry_list[] = {
#include "assets/scenes/overworld/spot10/cq/scene/playerEntryList.inc.c"
};

static Spawn cq_spawn_list[] = {
#include "assets/scenes/overworld/spot10/cq/scene/spawnList.inc.c"
};

static s16 cq_exit_list[] = {
#include "assets/scenes/overworld/spot10/cq/scene/exitList.inc.c"
};

static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot10/cq/scene/header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot10/cq/scene/altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot10/cq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
