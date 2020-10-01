#ifndef _Z_EN_IK_H_
#define _Z_EN_IK_H_

#include <ultra64.h>
#include <global.h>

struct EnIk;

typedef void (*EnIkActionFunc)(struct EnIk*, GlobalContext*);

typedef struct EnIk {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ SkelAnime skelAnime;
    /* 0x0190 */ Vec3s limbDrawTable[30];
    /* 0x0244 */ Vec3s transitionDrawTable[30];
    /* 0x02F8 */ s8 unk_2F8;
    /* 0x02F9 */ char unk_2F9[0x03];
    /* 0x02FC */ s8 unk_2FC;
    /* 0x02FD */ char unk_2FD[0x05];
    /* 0x0302 */ s16 switchFlags;
    /* 0x0304 */ EnIkActionFunc actionFunc;
    /* 0x0308 */ char unk_308[0x18];
    /* 0x0320 */ ColliderCylinder unk_320;
    /* 0x036C */ ColliderQuad unk_36C;
    /* 0x03EC */ ColliderTris unk_3EC;
    /* 0x040C */ ColliderTrisItem unk_40C[2];
    /* 0x04C4 */ s32 blureIdx;
    /* 0x04C8 */ s32 action;
    /* 0x04CC */ s32 drawMode;
    /* 0x04D0 */ u32 npcAction;
    /* 0x04D4 */ char unk_4D4[0x08];
} EnIk; // size = 0x04DC

extern const ActorInit En_Ik_InitVars;

#endif
