#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.h"
#include "save.h"
#include "versions.h"

extern SceneCmd* questHeaders_ice_doukutu_scene[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_ice_doukutu_scene),
};

#include "assets/scenes/dungeons/ice_doukutu/ice_doukutu_scene.c"

static TransitionActorEntry mq_transition_actors[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/transitionActors.inc.c"
};

static BgCamInfo mq_cam_list[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/camList.inc.c"
};

static CollisionPoly mq_polygons[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/polygons.inc.c"
};

static SurfaceType mq_surface_types[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/surfaceTypes.inc.c"
};

static CollisionHeader mq_collision = {
#if OOT_VERSION <= NTSC_1_1
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/collision.inc.c"
#elif OOT_VERSION == NTSC_1_2
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/collision_us_rev2.inc.c"
#else
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/collision_pal.inc.c"
#endif
};

static Vec3s mq_path_list_020002CC[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList_020002CC.inc.c"
};

static Vec3s mq_path_list_020002E0[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList_020002E0.inc.c"
};

static Vec3s mq_path_list_0200024C[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList_0200024C.inc.c"
};

static Vec3s mq_path_list_02000270[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList_02000270.inc.c"
};

static Vec3s mq_path_list_02000290[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList_02000290.inc.c"
};

static Path mq_path_list[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/pathList.inc.c"
};

static SceneCmd mq_header[] = {
#include "assets/scenes/dungeons/ice_doukutu/mq/scene/header.inc.c"
};

SceneCmd* questHeaders_ice_doukutu_scene[] = {
#include "assets/scenes/dungeons/questHeadersScene.inc.c"
};
