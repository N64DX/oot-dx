#ifndef Z_EN_GO3_H
#define Z_EN_GO3_H

#include "ultra64.h"
#include "actor.h"
#include "overlays/actors/ovl_En_Go/z_en_go.h"

struct EnGo3;

typedef void (*EnGo3ActionFunc)(struct EnGo3*, struct PlayState*);

typedef enum SpringLakeGoronType {
    /* 0x00 */ SPRING_LAKE_GORON_GENERIC,
    /* 0x01 */ SPRING_LAKE_GORON_VILLAGE_DOOR,
    /* 0x02 */ SPRING_LAKE_GORON_SHRINE_DOOR,
    /* 0x03 */ SPRING_LAKE_SECRET_SHRINE_DOOR,
    /* 0x04 */ SPRING_LAKE_GORON_MAX_TYPE
} SpringLakeGoronType;

typedef struct EnGo3DataStruct1 {
    s16 unused;
    s16 yDist;
    s16 xzDist;
    s16 radius;
    s16 height;
} EnGo3DataStruct1; // size = 0xA

typedef struct EnGo3DataStruct2 {
    f32 shape_unk_10;
    f32 scale;
    s8 actor_unk_1F;
    f32 interactRange;
} EnGo3DataStruct2; // size = 0x10

typedef struct EnGo3DustEffectData {
    u8 initialTimer;
    f32 scale;
    f32 scaleStep;
    s32 numDustEffects;
    f32 radius;
    f32 yAccel;
} EnGo3DustEffectData; // size = 0x18

#define EN_GO3_EFFECT_COUNT 10

typedef struct EnGo3 {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ SkelAnime skelAnime;
    /* 0x0190 */ EnGo3ActionFunc actionFunc;
    /* 0x0194 */ NpcInteractInfo interactInfo;
    /* 0x01BC */ ColliderCylinder collider;
    /* 0x020E */ u8 reverse;
    /* 0x020F */ u8 isAwake; // Conditional
    /* 0x0211 */ u8 unk_211; // Conditional
    /* 0x0213 */ u8 eyeMouthTexState; // 0, 1, 2, 3
    /* 0x0214 */ u8 eyeTexIndex;
    /* 0x0215 */ u8 mouthTexIndex;
    /* 0x0218 */ f32 interactRange;
    /* 0x0220 */ f32 alpha; // Set to 0, used by func_80A45360, smoothed to this->actor.shape.shadowAlpha from either 0 or 255.0f
    /* 0x0224 */ s16 blinkTimer;
    /* 0x0226 */ s16 fidgetTableY[18];
    /* 0x024A */ s16 fidgetTableZ[18];
    /* 0x026E */ u16 trackingMode;
    /* 0x0270 */ EnGoEffect effects[EN_GO3_EFFECT_COUNT];
    /* 0x04B8 */ Vec3s jointTable[18];
    /* 0x0524 */ Vec3s morphTable[18];
    /* 0x0594 */ s32 getItemId;
    /* 0x059E */ u8 type;
    /* 0x059F */ u8 textType;
} EnGo3; // size = 0x05A0

#endif
