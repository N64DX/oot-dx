#ifndef Z_OBJ_WTURN_H
#define Z_OBJ_WTURN_H

#include "ultra64.h"
#include "actor.h"

struct ObjWturn;

typedef void (*ObjWturnActionFunc)(struct ObjWturn*, struct PlayState*);

#define OBJWTURN_GET_SWITCH_FLAG(thisx) ((thisx)->params)

typedef struct ObjWturn {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ObjWturnActionFunc actionFunc;
    /* 0x148 */ s16 subCamId;
    /* 0x14A */ s16 fallingFrame;
    /* 0x14C */ s16 attentionTimer;
} ObjWturn; // size = 0x14E

#endif
