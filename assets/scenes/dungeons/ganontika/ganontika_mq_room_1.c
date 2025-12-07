#include "assets/scenes/dungeons/ganontika/ganontika_scene.h"

extern SceneCmd* questHeaders_ganontika_room1[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ganontika_room1),
};

#include "assets/scenes/dungeons/ganontika/ganontika_room_1.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ganontika/mq/objects/room1_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ganontika/mq/actors/room1_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ganontika/mq/headers/room1.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_ganontika_room1[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
