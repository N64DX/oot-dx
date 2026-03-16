#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"

extern SceneCmd* questHeaders_jyasinzou_room12[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_jyasinzou_room12),
};

#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_12.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/objects/room12_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/actors/room12_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room12.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/objects/room12_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/actors/room12_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/headers/room12.inc.c"
};

#define cmq_header mq_header

SceneCmd* questHeaders_jyasinzou_room12[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
