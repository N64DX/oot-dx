#ifndef PARAMETER_STATIC_QUEST_H
#define PARAMETER_STATIC_QUEST_H

#include "tex_len.h"
#include "ultra64.h"

#define gFileSelQuestButtonTex_WIDTH 128
#define gFileSelQuestButtonTex_HEIGHT 16
extern u64 gParameterQuestDungeonTex[TEX_LEN(u64, gFileSelQuestButtonTex_WIDTH, gFileSelQuestButtonTex_HEIGHT, 8)]; 
extern u64 gParameterQuestDungeonMasterRushTex[TEX_LEN(u64, gFileSelQuestButtonTex_WIDTH, gFileSelQuestButtonTex_HEIGHT, 8)];
extern u64 gParameterQuestDungeonUraRushTex[TEX_LEN(u64, gFileSelQuestButtonTex_WIDTH, gFileSelQuestButtonTex_HEIGHT, 8)];
extern u64 gParameterQuestDungeonChildRushTex[TEX_LEN(u64, gFileSelQuestButtonTex_WIDTH, gFileSelQuestButtonTex_HEIGHT, 8)];
extern u64 gParameterBossRushTex[TEX_LEN(u64, gFileSelQuestButtonTex_WIDTH, gFileSelQuestButtonTex_HEIGHT, 8)];

#endif
