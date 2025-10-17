#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_scene.h"
#include "save.h"

static SceneCmd* questHeaders[QUEST_MAX];

static SceneCmd start[] = {
#include "assets/scenes/overworld/start.inc.c"
};

#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_6.c"

static s16 cq_objects[] = {
#include "assets/scenes/indoors/hakasitarelay/cq/objects/room6_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/indoors/hakasitarelay/cq/actors/room6_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/indoors/hakasitarelay/cq/headers/room6.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
