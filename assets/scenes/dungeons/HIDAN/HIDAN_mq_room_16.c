#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"

extern SceneCmd* questHeaders_HIDAN_room16[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HIDAN_room16),
};

#include "assets/scenes/dungeons/HIDAN/HIDAN_room_16.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room16_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room16_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room16.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/cq/objects/room16_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/cq/actors/room16_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/HIDAN/cq/headers/room16.inc.c"
};

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/cmq/actors/room16_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/HIDAN/cmq/headers/room16.inc.c"
};

SceneCmd* questHeaders_HIDAN_room16[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
