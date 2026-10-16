#ifndef KEYFRAME_H
#define KEYFRAME_H

#include "ultra64.h"
#include "z_math.h"

struct PlayState;

struct KFSkelAnimeFlex;

typedef s32 (*OverrideKeyframeDrawScaled)(struct PlayState* play, struct KFSkelAnimeFlex* kfSkelAnime, s32 limbIndex, Gfx** dList, u8* flags, void* arg, Vec3f* scale, Vec3s* rot, Vec3f* pos);
typedef s32 (*PostKeyframeDrawScaled)(struct PlayState* play, struct KFSkelAnimeFlex* kfSkelAnime, s32 limbIndex, Gfx** dList, u8* flags, void* arg, Vec3f* scale, Vec3s* rot, Vec3f* pos);
typedef s32 (*KeyframeTransformCallback)(struct PlayState* play, struct KFSkelAnimeFlex* kfSkelAnime, s32 limbIndex, Gfx** dList, u8* flags, void* arg);

#define KEYFRAME_DRAW_OPA (0 << 0)
#define KEYFRAME_DRAW_XLU (1 << 0)

typedef enum {
    /* 0 */ KEYFRAME_NOT_DONE,
    /* 1 */ KEYFRAME_DONE_ONCE,
    /* 2 */ KEYFRAME_DONE_LOOP
} KeyFrameDoneType;

#define KF_CALLBACK_INDEX_NONE 0xFF

typedef struct {
    /* 0x00 */ Gfx* dList;
    /* 0x04 */ u8 numChildren;
    /* 0x05 */ u8 drawFlags;
    /* 0x06 */ u8 callbackIndex;
} KeyFrameFlexLimb; // size = 0x8

typedef struct {
    /* 0x00 */ u8 limbCount;
    /* 0x01 */ u8 dListCount;
    /* 0x04 */ KeyFrameFlexLimb* limbs;
} KeyFrameFlexSkeleton; // size = 0x8

typedef struct {
    /* 0x00 */ s16 frame;
    /* 0x02 */ s16 value;
    /* 0x04 */ s16 velocity;
} KeyFrame; // size = 0x6

typedef struct {
    union {
        void* data;
        u16* flex;
    } bitFlags;
    /* 0x04 */ KeyFrame* keyFrames;
    /* 0x08 */ s16* kfNums;
    /* 0x0C */ s16* fixedValues;
    /* 0x10 */ s16 unk_10;
    /* 0x12 */ s16 frameCount;
} KeyFrameAnimation; // size = 0x14

typedef enum {
    /* 0 */ KEYFRAME_ANIM_ONCE,
    /* 1 */ KEYFRAME_ANIM_LOOP
} KeyFrameAnimMode;

typedef struct {
    /* 0x00 */ f32 start;
    /* 0x04 */ f32 end;
    /* 0x08 */ f32 frameCount;
    /* 0x0C */ f32 speed;
    /* 0x10 */ f32 curTime;
    /* 0x14 */ s32 animMode;
} FrameControl; // size = 0x18

typedef struct KFSkelAnimeFlex {
    /* 0x00 */ FrameControl frameCtrl;
    /* 0x18 */ KeyFrameFlexSkeleton* skeleton;
    /* 0x1C */ KeyFrameAnimation* animation;
    /* 0x20 */ KeyframeTransformCallback* transformCallbacks;
    /* 0x24 */ f32 morphFrames;
    /* 0x28 */ Vec3s* jointTable;
    /* 0x2C */ Vec3s* morphTable;
} KFSkelAnimeFlex; // size = 0x30

void FrameCtrl_Reset(FrameControl* frameCtrl);
void FrameCtrl_Init(FrameControl* frameCtrl);
void FrameCtrl_SetProperties(FrameControl* frameCtrl, f32 startTime, f32 endTime, f32 frameCount, f32 t, f32 speed, s32 animMode);
s32 FrameCtrl_PassCheck(FrameControl* frameCtrl, f32 t, f32* remainingTime);
s32 FrameCtrl_UpdateOnce(FrameControl* frameCtrl);
s32 FrameCtrl_UpdateLoop(FrameControl* frameCtrl);
s32 FrameCtrl_Update(FrameControl* frameCtrl);

void Keyframe_ResetFlex(KFSkelAnimeFlex* kfSkelAnime);
void Keyframe_InitFlex(KFSkelAnimeFlex* kfSkelAnime, KeyFrameFlexSkeleton* skeleton, KeyFrameAnimation* animation, Vec3s* jointTable, Vec3s* morphTable, KeyframeTransformCallback* transformCallbacks);
void Keyframe_DestroyFlex(KFSkelAnimeFlex* kfSkelAnime);
void Keyframe_FlexPlayOnce(KFSkelAnimeFlex* kfSkelAnime, KeyFrameAnimation* animation);
f32 Keyframe_Interpolate(f32 t, f32 delta, f32 x0, f32 x1, f32 v0, f32 v1);
s16 Keyframe_KeyCalc(s16 kfStart, s16 kfNum, KeyFrame* keyFrames, f32 t);
void Keyframe_MorphInterpolateRotation(f32 t, s16* out, s16 rot1, s16 rot2);
void Keyframe_MorphInterpolateLinear(s16* jointData, s16* morphData, f32 t);
void Keyframe_FlexMorphInterpolation(KFSkelAnimeFlex* kfSkelAnime);
s32 Keyframe_UpdateFlex(KFSkelAnimeFlex* kfSkelAnime);
void Keyframe_DrawFlex(struct PlayState* play, KFSkelAnimeFlex* kfSkelAnime, Mtx* mtxStack, OverrideKeyframeDrawScaled overrideKeyframeDraw, PostKeyframeDrawScaled postKeyframeDraw, void* arg);

#endif
