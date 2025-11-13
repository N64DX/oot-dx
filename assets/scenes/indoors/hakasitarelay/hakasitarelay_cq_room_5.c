#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_scene.h"

extern SceneCmd* questHeaders_hakasitarelay_room5[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_hakasitarelay_room5),
};

#include "assets/scenes/indoors/hakasitarelay/hakasitarelay_room_5.c"

static s16 cq_objects[] = {
#include "assets/scenes/indoors/hakasitarelay/cq/objects/room5_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/indoors/hakasitarelay/cq/actors/room5_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/indoors/hakasitarelay/cq/headers/room5.inc.c"
};

SceneCmd* questHeaders_hakasitarelay_room5[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};
