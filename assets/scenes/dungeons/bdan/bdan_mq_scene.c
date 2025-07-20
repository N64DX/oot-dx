#include "versions.h"
#include "assets/scenes/dungeons/bdan/bdan_scene.h"

#if PLATFORM_N64

static SceneCmd* questHeaders[3];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/bdan/bdan_scene.c"

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/bdan/mq/scene/transitionActors.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/bdan/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/bdan/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/bdan/mq/scene/collision.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/bdan/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
    mq_header, // 0
    NULL,      // 1
    NULL,      // 2
};

#else

#include "assets/scenes/dungeons/bdan/bdan_scene.c"

#endif
