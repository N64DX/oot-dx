#ifndef Z_BG_DODOAGO2_H
#define Z_BG_DODOAGO2_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_bwall2/object_bwall2.h"

typedef enum BgDodoago2Eye {
    /* 0 */ BGDODOAGO2_EYE_LEFT,
    /* 1 */ BGDODOAGO2_EYE_RIGHT
} BgDodoago2Eye;

struct BgDodoago2;

typedef void (*BgDodoago2ActionFunc)(struct BgDodoago2*, struct PlayState*);

typedef struct BgDodoago2 {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ s16 state;
    /* 0x0168 */ ColliderCylinder colliders[3]; 
    /* 0x024C */ BgDodoago2ActionFunc actionFunc;
    /* 0x0250 */ u8 timer;
    /* 0x0251 */ u8 flag;
    /* 0x0252 */ u8 jawSwitch;
    /* 0x0253 */ u8 doorSwitch;
} BgDodoago2; // size = 0x0254

#endif
