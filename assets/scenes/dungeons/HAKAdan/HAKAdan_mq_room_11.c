#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_HAKAdan_room11[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HAKAdan_room11),
};

#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_11.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room11_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/actors/room11_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room11.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/cq/objects/room11_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/cq/actors/room11_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/cq/headers/room11.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room11.inc.c"
};

SceneCmd* questHeaders_HAKAdan_room11[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
