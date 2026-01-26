#include "assets/scenes/dungeons/jyasinboss/jyasinboss_scene.h"

extern SceneCmd* questHeaders_jyasinboss_room1[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_jyasinboss_room1),
};

#include "assets/scenes/dungeons/jyasinboss/jyasinboss_room_1.c"

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/jyasinboss/room1_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/jyasinboss/room1_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/jyasinboss/room1.inc.c"
};

#define mq_header  NULL
#define cmq_header cq_header

SceneCmd* questHeaders_jyasinboss_room1[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
