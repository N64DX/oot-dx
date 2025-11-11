#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_hakasitarelay_room6[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_hakasitarelay_room6),
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

SceneCmd* questHeaders_hakasitarelay_room6[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
