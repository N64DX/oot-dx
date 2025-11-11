#include "assets/scenes/dungeons/HAKAdan/HAKAdan_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_HAKAdan_room15[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HAKAdan_room15),
};

#include "assets/scenes/dungeons/HAKAdan/HAKAdan_room_15.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/objects/room15_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/actors/room15_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room15.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/HAKAdan/cq/objects/room15_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/HAKAdan/cq/actors/room15_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/cq/headers/room15.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/HAKAdan/mq/headers/room15.inc.c"
};

SceneCmd* questHeaders_HAKAdan_room15[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
