#ifndef Z_EN_POH_SOUL_H
#define Z_EN_POH_SOUL_H

#include "ultra64.h"
#include "actor.h"
#include "light.h"

struct EnPohSoul;

typedef void (*EnPohSoulActionFunc)(struct EnPohSoul*, struct PlayState*);

#define EN_POH_SOUL_TEXT_OFFSET(params) (params & 0xF)
#define EN_POH_SOUL_COLOR(params)       ((params >> 4) & 1)

typedef struct EnPohSoulNpcInfo {
    /* 0x00 */ Color_RGB8 primColor;
    /* 0x03 */ Color_RGB8 lightColor;
    /* 0x06 */ s8 scrollSpeed;
    /* 0x08 */ s16 objectId;
    /* 0x0C */ Gfx* soulDisplayList;
} EnPohSoulNpcInfo;

typedef struct EnPohSoul {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ EnPohSoulActionFunc actionFunc;
    /* 0x0150 */ s8 requiredObjectSlot;
    /* 0x0151 */ u8 infoIdx;
    /* 0x0152 */ u16 textId;
    /* 0x0154 */ s16 bobPhase;
    /* 0x0156 */ s16 scrollTimer;
    /* 0x0158 */ LightNode* lightNode;
    /* 0x015C */ LightInfo lightInfo;
} EnPohSoul; // size = 0x016C

#endif
