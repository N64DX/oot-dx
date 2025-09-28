#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.h"

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/MIZUsin/MIZUsin_scene.c"

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/collision.inc.c"
};

static Vec3s mq_path_list_02000358[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/pathList_02000358.inc.c"
};

static Vec3s mq_path_list_02000370[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/pathList_02000370.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/MIZUsin/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeadersScene.inc.c"
};
