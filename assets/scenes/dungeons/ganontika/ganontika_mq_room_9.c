#include "assets/scenes/dungeons/ganontika/ganontika_scene.h"

extern SceneCmd* questHeaders_ganontika_room9[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ganontika_room9),
};

#include "assets/scenes/dungeons/ganontika/ganontika_room_9.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ganontika/mq/objects/room9_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ganontika/mq/actors/room9_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ganontika/mq/headers/room9.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_ganontika_room9[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
