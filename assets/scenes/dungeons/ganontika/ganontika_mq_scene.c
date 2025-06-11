#include "assets/scenes/dungeons/ganontika/ganontika_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/ganontika/ganontika_scene.c"

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/ganontika/mq/scene/collision.inc.c"
};

static Vec3s mq_path_list_020005D4[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_020005D4.inc.c"
};

static Vec3s mq_path_list_020005F4[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_020005F4.inc.c"
};

static Vec3s mq_path_list_0200053C[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_0200053C.inc.c"
};

static Vec3s mq_path_list_0200063C[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_0200063C.inc.c"
};

static Vec3s mq_path_list_02000624[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_02000624.inc.c"
};

static Vec3s mq_path_list_02000630[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList_02000630.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ganontika/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
