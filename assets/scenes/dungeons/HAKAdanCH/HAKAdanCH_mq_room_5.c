#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_room_5.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/objects/room5_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/actors/room5_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/headers/room5.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
