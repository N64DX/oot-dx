#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"

extern SceneCmd* questHeaders_HIDAN_room13[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HIDAN_room13),
};

#include "assets/scenes/dungeons/HIDAN/HIDAN_room_13.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room13_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room13_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room13.inc.c"
};

static s16 cmq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/cmq/objects/room13_obj.inc.c"
};

static ActorEntry cmq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/cmq/actors/room13_actor.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/HIDAN/cmq/headers/room13.inc.c"
};

#define cq_header NULL

SceneCmd* questHeaders_HIDAN_room13[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
