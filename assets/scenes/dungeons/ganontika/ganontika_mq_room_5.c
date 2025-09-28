#include "assets/scenes/dungeons/ganontika/ganontika_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/ganontika/ganontika_room_5.c"

static s16 mq_objects[] = {
#include "assets/scenes/dungeons/ganontika/mq/objects/room5_obj.inc.c"
};

static ActorEntry mq_actors[] = {
#include "assets/scenes/dungeons/ganontika/mq/actors/room5_actor.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ganontika/mq/headers/room5.inc.c"
};

static s16 cq_objects[] = {
#include "assets/scenes/dungeons/ganontika/cq/objects/room5_obj.inc.c"
};

static ActorEntry cq_actors[] = {
#include "assets/scenes/dungeons/ganontika/cq/actors/room5_actor.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/dungeons/ganontika/cq/headers/room5.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
