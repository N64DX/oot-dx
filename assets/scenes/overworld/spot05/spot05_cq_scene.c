#include "assets/scenes/overworld/spot05/spot05_scene.h"

extern SceneCmd* questHeaders_spot05_scene[];

static SceneCmd start[] = {
    SCENE_CMD_QUEST_HEADER_LIST(questHeaders_spot05_scene),
};

#include "assets/scenes/overworld/spot05/spot05_scene.c"
    
static SceneCmd cq_header2[] = {
#include "assets/scenes/overworld/spot05/cq/scene/header2.inc.c"
};

static SceneCmd* cq_altHeaders[] = {
#include "assets/scenes/overworld/spot05/cq/scene/altHeaders.inc.c"
};

static SceneCmd cq_header[] = {
#include "assets/scenes/overworld/spot05/cq/scene/header.inc.c"
};

SceneCmd* questHeaders_spot05_scene[] = {
#include "assets/scenes/overworld/questHeaders.inc.c"
};

CutsceneData gMeadowMinuetCsCQ[] = {
#include "assets/scenes/overworld/spot05/cq/cutscene/gMeadowMinuetCs.csdata.inc.c"
};

CutsceneData gMeadowSariasSongCsCQ[] = {
#include "assets/scenes/overworld/spot05/cq/cutscene/gMeadowSariasSongCs.csdata.inc.c"
};
