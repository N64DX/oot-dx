#ifndef _Z_EN_FHG_FIRE_H_
#define _Z_EN_FHG_FIRE_H_

#include "ultra64.h"
#include "global.h"

struct EnFhgFire;

typedef void (*EnFhgFireUpdateFunc)(struct EnFhgFire*, GlobalContext *globalCtx);

typedef enum {
    /*   1 */ FHG_LIGHTNING_STRIKE = 1,
    /*  35 */ FHG_LIGHTNING_SHOCK = 35,
    /*  36 */ FHG_LIGHTNING_BURST,
    /*  38 */ FHG_SPEAR_SPARK = 38,
    /*  39 */ FHG_WARP_EMERGE,
    /*  40 */ FHG_WARP_RETREAT,
    /*  41 */ FHG_WARP_DEATH,
    /*  50 */ FHG_ENERGY_BALL = 50,
    /* 100 */ FHG_LIGHTNING_TRAIL = 100
} FhgFireParams;
    

typedef struct EnFhgFire {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ EnFhgFireUpdateFunc updateFunc;
    /* 0x0150 */ s16 timer1;
    /* 0x0152 */ s16 timer2;
    /* 0x0154 */ char unk_154[2];
    /* 0x0156 */ s16 unk_156;
    /* 0x0158 */ s16 fireMode;
    /* 0x015a */ s16 unk_15A;
    /* 0x015C */ s16 unk_15C;
    /* 0x015E */ char unk_15E[0x02];
    /* 0x0160 */ f32 unk_160;
    /* 0x0164 */ char unk_164[0x08];
    /* 0x016C */ f32 scale;
    /* 0x0170 */ char unk_170[0x04];
    /* 0x0174 */ f32 unk_174;
    /* 0x0178 */ f32 unk_178;
    /* 0x017C */ f32 unk_17C;
    /* 0x0180 */ f32 unk_180;
    /* 0x0184 */ f32 unk_184;
    /* 0x0188 */ f32 unk_188;
    /* 0x018C */ f32 unk_18C;
    /* 0x0190 */ char unk_190[0x0C];
    /* 0x019C */ LightNode* lightNode;
    /* 0x01A0 */ LightInfo lightInfo;
    /* 0x01AE */ char unk_1AE[2];
    /* 0x01B0 */ ColliderCylinder collider;
    /* 0x01FC */ u8 unk_1FC;
    /* 0x01FD */ char unk_1FD;
    /* 0x01FE */ s16 unk_1FE;
    /* 0x0200 */ f32 unk_200;
} EnFhgFire; // size = 0x0204

extern const ActorInit En_Fhg_Fire_InitVars;

#endif
