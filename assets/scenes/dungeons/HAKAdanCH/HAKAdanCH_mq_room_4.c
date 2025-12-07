#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene.h"

extern SceneCmd* questHeaders_HAKAdanCH_room4[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_HAKAdanCH_room4),
};

#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_4.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/objects/room4_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/actors/room4_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/headers/room4.inc.c"
};

#define cq_header  NULL
#define cmq_header mq_header

SceneCmd* questHeaders_HAKAdanCH_room4[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
