#ifndef Z_OBJ_CRASHBOX_H
#define Z_OBJ_CRASHBOX_H

#include "ultra64.h"
#include "actor.h"

#include "assets/objects/object_crashbox/object_crashbox.h"

struct ObjCrashbox;

typedef enum ObjCrashBoxType {
    /* 0x0 */ OBJ_CRASHBOX_SMALL,
    /* 0x1 */ OBJ_CRASHBOX_MEDIUM,
    /* 0x2 */ OBJ_CRASHBOX_LARGE
} ObjCrashBoxType;

typedef void (*ObjCrashboxActionFunc)(struct ObjCrashbox*, struct PlayState*);

typedef struct ObjCrashbox {
    /* 0x0000 */ DynaPolyActor dyna;
    /* 0x0164 */ ObjCrashboxActionFunc actionFunc;
    /* 0x0170 */ ColliderCylinder collider;
    /* 0x01BC */ s8 timer;
} ObjCrashbox; // size = 0x01C0

#endif
