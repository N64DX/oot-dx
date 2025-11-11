#include "assets/scenes/dungeons/ganontika/ganontika_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_ganontika_room14[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ganontika_room14),
};

#include "assets/scenes/dungeons/ganontika/ganontika_room_14.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ganontika/mq/objects/room14_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ganontika/mq/actors/room14_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ganontika/mq/headers/room14.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ganontika/cq/objects/room14_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/ganontika/cq/actors/room14_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ganontika/cq/headers/room14.inc.c"
};

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/ganontika/cmq/actors/room14_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ganontika/cmq/headers/room14.inc.c"
};

SceneCmd* questHeaders_ganontika_room14[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
