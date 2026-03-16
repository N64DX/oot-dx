#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene.h"

extern SceneCmd* questHeaders_HAKAdan_room9[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HAKAdan_room9),
};

#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_9.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room9_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/actors/room9_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room9.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_HAKAdan_room9[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
