#include "assets/scenes/dungeons/HIDAN/HIDAN_scene.h"

extern SceneCmd* questHeaders_HIDAN_room19[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HIDAN_room19),
};

#include "assets/scenes/dungeons/HIDAN/HIDAN_room_19.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/mq/objects/room19_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/mq/actors/room19_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HIDAN/mq/headers/room19.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/HIDAN/cq/objects/room19_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/HIDAN/cq/actors/room19_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/HIDAN/cq/headers/room19.inc.c"
};

#define cmq_header mq_header

SceneCmd* questHeaders_HIDAN_room19[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
