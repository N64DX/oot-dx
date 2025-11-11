#include "assets/scenes/dungeons/ganontika/ganontika_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_ganontika_room12[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ganontika_room12),
};

#include "assets/scenes/dungeons/ganontika/ganontika_room_12.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ganontika/mq/objects/room12_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ganontika/mq/actors/room12_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ganontika/mq/headers/room12.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ganontika/cq/objects/room12_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/ganontika/cq/actors/room12_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ganontika/cq/headers/room12.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ganontika/mq/headers/room12.inc.c"
};

SceneCmd* questHeaders_ganontika_room12[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
