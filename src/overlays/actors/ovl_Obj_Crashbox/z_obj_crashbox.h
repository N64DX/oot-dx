#ifndef Z_OBJ_CRASHBOX_H
#define Z_OBJ_CRASHBOX_H

#include "ultra64.h"
#include "actor.h"

struct ObjCrashbox;

typedef enum ObjCrashBoxType {
    /* 0x0 */ OBJ_CRASHBOX_ALL,
    /* 0x1 */ OBJ_CRASHBOX_HAMMER
} ObjCrashBoxType;

typedef void (*ObjCrashboxActionFunc)(struct ObjCrashbox*, struct PlayState*);

typedef struct ObjCrashbox {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ ObjCrashboxActionFunc actionFunc;
    /* 0x0170 */ ColliderCylinder collider;
    /* 0x01BC */ u8 timer;
    /* 0x01BD */ u8 type;
    /* 0x01BE */ u8 switchFlag;
} ObjCrashbox; // size = 0x01C0

#endif
