#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_jyasinzou_room26[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_jyasinzou_room26),
};

#include "assets/scenes/dungeons/jyasinzou/jyasinzou_room_26.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/objects/room26_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/actors/room26_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/headers/room26.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/objects/room26_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/actors/room26_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/cq/headers/room26.inc.c"
};

static s16 cmq_objects[] = {
#include "assets/scenes/dungeons/jyasinzou/cmq/objects/room26_obj.inc.c"
};

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/cmq/actors/room26_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/cmq/headers/room26.inc.c"
};

SceneCmd* questHeaders_jyasinzou_room26[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
