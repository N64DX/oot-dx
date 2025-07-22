#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_5.c"

static ActorEntry cq_actors[] = {
#include "assets/scenes/indoors/hakasitarelay/cq/actors/room5_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/indoors/hakasitarelay/cq/headers/room5.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
