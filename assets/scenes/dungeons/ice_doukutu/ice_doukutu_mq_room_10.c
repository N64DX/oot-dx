#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"
#include "save.h"

extern SceneCmd* questHeaders_ice_doukutu_room10[QUEST_MAX];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ice_doukutu_room10),
};

#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_room_10.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/objects/room10_obj.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/headers/room10.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ice_doukutu/cq/objects/room10_obj.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/cq/headers/room10.inc.c"
};

static SceneCmd cmq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/headers/room10.inc.c"
};

SceneCmd* questHeaders_ice_doukutu_room10[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
