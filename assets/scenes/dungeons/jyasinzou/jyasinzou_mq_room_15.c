#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"

extern SceneCmd* questHeaders_jyasinzou_room15[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_jyasinzou_room15),
};

#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_15.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/objects/room15_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/actors/room15_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room15.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_jyasinzou_room15[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
