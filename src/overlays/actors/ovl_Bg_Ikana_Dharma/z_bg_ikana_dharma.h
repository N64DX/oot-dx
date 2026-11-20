#ifndef Z_BG_IKANA_DHARMA_H
#define Z_BG_IKANA_DHARMA_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_ikana_obj/object_ikana_obj.h"

#define BGIKANADHARMA_GET_SWITCH_FLAG(thisx)                    (((thisx)->params >> 8) & 0x3F)
#define BGIKANADHARMA_IS_CHILD(thisx)                           (((thisx)->params >> 5) & 1)
#define BGIKANADHARMA_NUM_SEGMENTS(thisx)                        ((thisx)->params & 0xF)
#define BGIKANADHARMA_PARAMS(switchFlag, isChild, numSegments)  (((switchFlag & 0x3F) << 8) | ((isChild & 1) << 5) | (numSegments & 0xF))

struct BgIkanaDharma;

typedef void (*BgIkanaDharmaActionFunc) (struct BgIkanaDharma*, struct PlayState*);

typedef struct BgIkanaDharma {
    /* 0x000 */ DynaPolyActor dyna;
    /* 0x15C */ ColliderCylinder collider;
    /* 0x1A8 */ BgIkanaDharmaActionFunc actionFunc;
    /* 0x1AC */ s8 cutsceneFramesRemaining;
    /* 0x1AD */ u8 csId;
} BgIkanaDharma; // size = 0x1B0

#endif
