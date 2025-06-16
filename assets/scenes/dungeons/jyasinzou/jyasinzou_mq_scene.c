#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/jyasinzou/jyasinzou_scene.c"

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/collision.inc.c"
};

static Vec3s mq_path_list_0200042C[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList_0200042C.inc.c"
};

static Vec3s mq_path_list_02000408[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList_02000408.inc.c"
};

static Vec3s mq_path_list_02000414[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList_02000414.inc.c"
};

static Vec3s mq_path_list_02000420[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList_02000420.inc.c"
};

static Vec3s mq_path_list_02000464[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList_02000464.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/jyasinzou/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
