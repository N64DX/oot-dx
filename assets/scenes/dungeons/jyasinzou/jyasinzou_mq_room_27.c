#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_jyasinzou_room27[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_jyasinzou_room27),
};

#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_27.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/objects/room27_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/actors/room27_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room27.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/objects/room27_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/actors/room27_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/headers/room27.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room27.inc.c"
};

SceneCmd* questHeaders_jyasinzou_room27[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
