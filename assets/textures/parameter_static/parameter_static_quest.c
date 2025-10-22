#include "parameter_static_quest.h"

#include "sys_matrix.h"
#include "ultra64.h"

u64 gParameterQuestDungeonTex[TEX_LEN(u64, gFileSelQuestButtonTex_WIDTH, gFileSelQuestButtonTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_file_choose/gQuestDungeonRushTex.ia8.inc.c"
};

u64 gParameterQuestDungeonMasterRushTex[TEX_LEN(u64, gFileSelQuestButtonTex_WIDTH, gFileSelQuestButtonTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_file_choose/gQuestDungeonMasterRushTex.ia8.inc.c"
};

u64 gParameterQuestDungeonUraRushTex[TEX_LEN(u64, gFileSelQuestButtonTex_WIDTH, gFileSelQuestButtonTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_file_choose/gQuestDungeonUraRushTex.ia8.inc.c"
};

u64 gParameterQuestDungeonChildRushTex[TEX_LEN(u64, gFileSelQuestButtonTex_WIDTH, gFileSelQuestButtonTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_file_choose/gQuestDungeonChildRushTex.ia8.inc.c"
};

u64 gParameterBossRushTex[TEX_LEN(u64, gFileSelQuestButtonTex_WIDTH, gFileSelQuestButtonTex_HEIGHT, 8)] = {
#include "assets/overlays/ovl_file_choose/gQuestBossRushTex.ia8.inc.c"
};
