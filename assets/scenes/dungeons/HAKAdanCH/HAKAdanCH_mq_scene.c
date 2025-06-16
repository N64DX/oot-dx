#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene.h"

static SceneCmd* questHeaders[1];

static SceneCmd start[] = {
#include "assets/scenes/dungeons/start.inc.c"
};

#include "assets/scenes/dungeons/HAKAdanCH/HAKAdanCH_scene.c"

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/transitionActors.inc.c"
};

static Vec3s mq_cam_data[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/camData.inc.c"
};

static BgCamInfo mq_cam_list[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/camList.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/collision.inc.c"
};

static Vec3s mq_path_list_02000200[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/pathList_02000200.inc.c"
};

static Vec3s mq_path_list_02000224[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/pathList_02000224.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/HAKAdanCH/mq/scene/header.inc.c"
};

static SceneCmd* questHeaders[] = {
#include "assets/scenes/dungeons/questHeaders.inc.c"
};
