#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_HIDAN_room5[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HIDAN_room5),
};

#include "assets/scenes/dungeons/HIDAN/HIDAN_room_5.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room5_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room5_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room5.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/cq/objects/room5_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/cq/actors/room5_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/HIDAN/cq/headers/room5.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room5.inc.c"
};

SceneCmd* questHeaders_HIDAN_room5[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
