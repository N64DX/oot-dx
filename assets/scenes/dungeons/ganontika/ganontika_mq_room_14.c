#include "assets/scenes/dungeons/ganontika/ganontika_scene.h"

extern SceneCmd* questHeaders_ganontika_room14[];

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

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/ganontika/cmq/actors/room14_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ganontika/cmq/headers/room14.inc.c"
};

#define cq_header NULL

SceneCmd* questHeaders_ganontika_room14[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
