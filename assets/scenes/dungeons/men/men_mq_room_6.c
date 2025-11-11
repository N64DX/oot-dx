#include "assets/scenes/dungeons/men/men_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_men_room6[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_men_room6),
};

#include "assets/scenes/dungeons/men/men_room_6.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/men/mq/objects/room6_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/men/mq/actors/room6_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room6.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/men/cq/objects/room6_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/men/cq/actors/room6_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/men/cq/headers/room6.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/men/mq/headers/room6.inc.c"
};

SceneCmd* questHeaders_men_room6[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
