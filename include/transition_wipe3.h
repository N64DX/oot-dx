#ifndef TRANSITION_WIPE3_H
#define TRANSITION_WIPE3_H

#include "ultra64.h"
#include "color.h"

typedef struct TransitionWipe3 {
    /* 0x000 */ Color_RGBA8_u32 color;
    /* 0x004 */ u32 scrollX;
    /* 0x008 */ s32 scrollY;
    /* 0x00C */ s32 wipeSpeed;
    /* 0x010 */ u8 dir;
    /* 0x011 */ u8 colorType;
    /* 0x012 */ u8 speedType;
    /* 0x013 */ u8 texIndex;
    /* 0x014 */ u8 isDone;
    /* 0x015 */ u8 frame;
    /* 0x016 */ u16 normal;
    /* 0x018 */ u64* curTexture;
    /* 0x020 */ Mtx projection;
    /* 0x060 */ Mtx lookAt;
    /* 0x0A0 */ Mtx modelView[2];
} TransitionWipe3; // size = 0x120

void TransitionWipe3_Start(void* thisx);
void* TransitionWipe3_Init(void* thisx);
void TransitionWipe3_Destroy(void* thisx);
void TransitionWipe3_Update(void* thisx, s32 updateRate);
void TransitionWipe3_Draw(void* thisx, Gfx** gfxP);
s32 TransitionWipe3_IsDone(void* thisx);
void TransitionWipe3_SetType(void* thisx, s32 type);
void TransitionWipe3_SetColor(void* thisx, u32 color);

#endif
