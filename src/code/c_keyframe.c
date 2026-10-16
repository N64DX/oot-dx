#include "keyframe.h"

#include "gfx.h"
#include "play_state.h"
#include "segmented_address.h"
#include "sys_matrix.h"

#define FMOD(x, mod) ((x) - ((s32)((x) * (1.0f / (mod))) * (f32)(mod)))
#define CB(x)        ((x) * (x) * (x))

#if DEBUG_FEATURES
#define KEYFRAME_MATRIX_TO_MTX(dest) Matrix_ToMtx(dest, __FILE__, __LINE__)
#else
#define KEYFRAME_MATRIX_TO_MTX(dest) Matrix_ToMtx(dest)
#endif

void FrameCtrl_Reset(FrameControl* frameCtrl) {
    frameCtrl->frameCount = frameCtrl->curTime = frameCtrl->speed = frameCtrl->end = frameCtrl->start = 0.0f;
    frameCtrl->animMode = KEYFRAME_ANIM_ONCE;
}

void FrameCtrl_Init(FrameControl* frameCtrl) {
    FrameCtrl_Reset(frameCtrl);
}

void FrameCtrl_SetProperties(FrameControl* frameCtrl, f32 startTime, f32 endTime, f32 frameCount, f32 t, f32 speed, s32 animMode) {
    frameCtrl->start = startTime;
    frameCtrl->end = (endTime < 1.0f) ? frameCount : endTime;
    frameCtrl->frameCount = frameCount;
    frameCtrl->speed = speed;
    frameCtrl->curTime = t;
    frameCtrl->animMode = animMode;
}

s32 FrameCtrl_PassCheck(FrameControl* frameCtrl, f32 t, f32* remainingTime) {
    f32 curTime, speed;

    *remainingTime = 0.0f;
    curTime = frameCtrl->curTime;

    if (t == curTime)
        return false;

    speed = ((frameCtrl->start < frameCtrl->end) ? frameCtrl->speed : -frameCtrl->speed) * (30.0f / 20.0f);
    if ((speed >= 0.0f && curTime < t && t <= curTime + speed) || (speed < 0.0f && t < curTime && curTime + speed <= t)) {
        *remainingTime = curTime + speed - t;
        return true;
    }
    return false;
}

s32 FrameCtrl_UpdateOnce(FrameControl* frameCtrl) {
    f32 remainingTime;

    if (frameCtrl->curTime == frameCtrl->end)
        return KEYFRAME_DONE_ONCE;
    if (FrameCtrl_PassCheck(frameCtrl, frameCtrl->end, &remainingTime)) {
        frameCtrl->curTime = frameCtrl->end;
        return KEYFRAME_DONE_ONCE;
    }
    if (FrameCtrl_PassCheck(frameCtrl, frameCtrl->start, &remainingTime)) {
        frameCtrl->curTime = frameCtrl->end;
        return KEYFRAME_DONE_ONCE;
    }
    return KEYFRAME_NOT_DONE;
}

s32 FrameCtrl_UpdateLoop(FrameControl* frameCtrl) {
    f32 remainingTime;

    if (FrameCtrl_PassCheck(frameCtrl, frameCtrl->end, &remainingTime)) {
        frameCtrl->curTime = frameCtrl->start + remainingTime;
        return KEYFRAME_DONE_LOOP;
    }
    if (FrameCtrl_PassCheck(frameCtrl, frameCtrl->start, &remainingTime)) {
        frameCtrl->curTime = frameCtrl->end + remainingTime;
        return KEYFRAME_DONE_LOOP;
    }
    return KEYFRAME_NOT_DONE;
}

s32 FrameCtrl_Update(FrameControl* frameCtrl) {
    f32 speed;
    s32 result;

    if (frameCtrl->animMode == KEYFRAME_ANIM_ONCE)
        result = FrameCtrl_UpdateOnce(frameCtrl);
    else result = FrameCtrl_UpdateLoop(frameCtrl);

    if (result == KEYFRAME_NOT_DONE) {
        speed = (frameCtrl->start < frameCtrl->end) ? frameCtrl->speed : -frameCtrl->speed;
        frameCtrl->curTime = frameCtrl->curTime + speed * (30.0f / 20.0f);
    }

    if (frameCtrl->curTime < 1.0f)
        frameCtrl->curTime = (frameCtrl->curTime - 1.0f) + frameCtrl->frameCount;
    else if (frameCtrl->frameCount < frameCtrl->curTime)
        frameCtrl->curTime = (frameCtrl->curTime - frameCtrl->frameCount) + 1.0f;

    return result;
}

void Keyframe_ResetFlex(KFSkelAnimeFlex* kfSkelAnime) {
    kfSkelAnime->skeleton = NULL;
    kfSkelAnime->animation = NULL;
    kfSkelAnime->jointTable = kfSkelAnime->morphTable = NULL;
    kfSkelAnime->transformCallbacks = NULL;
    kfSkelAnime->morphFrames = 0.0f;
}

void Keyframe_InitFlex(KFSkelAnimeFlex* kfSkelAnime, KeyFrameFlexSkeleton* skeleton, KeyFrameAnimation* animation, Vec3s* jointTable, Vec3s* morphTable, KeyframeTransformCallback* transformCallbacks) {
    Keyframe_ResetFlex(kfSkelAnime);
    FrameCtrl_Init(&kfSkelAnime->frameCtrl);
    kfSkelAnime->skeleton = SEGMENTED_TO_VIRTUAL(skeleton);
    kfSkelAnime->animation = SEGMENTED_TO_VIRTUAL(animation);
    kfSkelAnime->jointTable = jointTable;
    kfSkelAnime->morphTable = morphTable;
    kfSkelAnime->transformCallbacks = transformCallbacks;
}

void Keyframe_DestroyFlex(KFSkelAnimeFlex* kfSkelAnime) { }

static void Keyframe_FlexChangeAnim(KFSkelAnimeFlex* kfSkelAnime, KeyFrameFlexSkeleton* skeleton, KeyFrameAnimation* animation, f32 startTime, f32 endTime, f32 t, f32 speed, f32 morphFrames, s32 animMode) {
    kfSkelAnime->morphFrames = morphFrames;
    if (kfSkelAnime->skeleton != skeleton)
        kfSkelAnime->skeleton = SEGMENTED_TO_VIRTUAL(skeleton);
    kfSkelAnime->animation = SEGMENTED_TO_VIRTUAL(animation);
    FrameCtrl_SetProperties(&kfSkelAnime->frameCtrl, startTime, endTime, kfSkelAnime->animation->frameCount, t, speed, animMode);
}

void Keyframe_FlexPlayOnce(KFSkelAnimeFlex* kfSkelAnime, KeyFrameAnimation* animation) {
    Keyframe_FlexChangeAnim(kfSkelAnime, kfSkelAnime->skeleton, animation, 1.0f, ((KeyFrameAnimation*)SEGMENTED_TO_VIRTUAL(animation))->frameCount, 1.0f, 1.0f, 0.0f, KEYFRAME_ANIM_ONCE);
}

f32 Keyframe_Interpolate(f32 t, f32 delta, f32 x0, f32 x1, f32 v0, f32 v1) {
    f32 px1 = 3.0f * SQ(t) - 2.0f * CB(t);
    f32 px0 = 1.0f - px1;
    f32 pv0 = CB(t) - 2.0f * SQ(t) + t;
    f32 pv1 = CB(t) - SQ(t);
    return px0 * x0 + px1 * x1 + (pv0 * v0 + pv1 * v1) * delta;
}

s16 Keyframe_KeyCalc(s16 kfStart, s16 kfNum, KeyFrame* keyFrames, f32 t) {
    KeyFrame* keyFramesOffset = &keyFrames[kfStart];

    f32 delta;
    s16 kf1, kf2;

    if (t <= keyFramesOffset->frame)
        return keyFramesOffset->value;
    if (keyFramesOffset[kfNum - 1].frame <= t)
        return keyFramesOffset[kfNum - 1].value;

    kf1 = 0;
    kf2 = 1;
    while (true) {
        if (t < keyFramesOffset[kf2].frame) {
            delta = keyFramesOffset[kf2].frame - keyFramesOffset[kf1].frame;

            if (!IS_ZERO(delta))
                return nearbyint(Keyframe_Interpolate((t - keyFramesOffset[kf1].frame) / delta, delta * (1.0f / 30), keyFramesOffset[kf1].value, keyFramesOffset[kf2].value, keyFramesOffset[kf1].velocity, keyFramesOffset[kf2].velocity));
            else return keyFramesOffset[kf1].value;
        }
        kf1++;
        kf2++;
    }
}

void Keyframe_MorphInterpolateRotation(f32 t, s16* out, s16 rot1, s16 rot2) {
    u16 urot1 = rot1;
    u16 urot2 = rot2;
    f32 rot1f = rot1;
    f32 signedDiff = rot2 - rot1f;
    f32 urot1f = urot1;
    f32 unsignedDiff = urot2 - urot1f;

    if (fabsf(signedDiff) < fabsf(unsignedDiff))
        *out = rot1f + signedDiff * t;
    else *out = urot1f + unsignedDiff * t;
}

void Keyframe_MorphInterpolateLinear(s16* jointData, s16* morphData, f32 t) {
    u8 i;

    for (i=0; i<3; i++) {
        if (*jointData != *morphData) {
            f32 f1 = *jointData;
            f32 f2 = *morphData;
            *jointData = f1 + (f2 - f1) * t;
        }
        jointData++;
        morphData++;
    }
}

void Keyframe_FlexMorphInterpolation(KFSkelAnimeFlex* kfSkelAnime) {
    Vec3s* jointTable = kfSkelAnime->jointTable;
    Vec3s* morphTable = kfSkelAnime->morphTable;
    Vec3s frameRot, morphRot, frameRotInv;
    f32 t = 1.0f / fabsf(kfSkelAnime->morphFrames);
    f32 norm1, norm2;
    u8 limbIndex;

    for (limbIndex=0; limbIndex<kfSkelAnime->skeleton->limbCount; limbIndex++) {
        Keyframe_MorphInterpolateLinear((s16*)jointTable, (s16*)morphTable, t);
        jointTable++;
        morphTable++;
        frameRot.x = jointTable->x;
        frameRot.y = jointTable->y;
        frameRot.z = jointTable->z;
        morphRot.x = morphTable->x;
        morphRot.y = morphTable->y;
        morphRot.z = morphTable->z;

        if (frameRot.x != morphRot.x || frameRot.y != morphRot.y || frameRot.z != morphRot.z) {
            frameRotInv.x = 0x7FFF + frameRot.x;
            frameRotInv.y = 0x7FFF - frameRot.y;
            frameRotInv.z = 0x7FFF + frameRot.z;
            norm1 = fabsf((f32)morphRot.x - frameRot.x) + fabsf((f32)morphRot.y - frameRot.y) + fabsf((f32)morphRot.z - frameRot.z);
            norm2 = fabsf((f32)morphRot.x - frameRotInv.x) + fabsf((f32)morphRot.y - frameRotInv.y) + fabsf((f32)morphRot.z - frameRotInv.z);

            if (norm1 < norm2) {
                Keyframe_MorphInterpolateRotation(t, &jointTable->x, frameRot.x, morphRot.x);
                Keyframe_MorphInterpolateRotation(t, &jointTable->y, frameRot.y, morphRot.y);
                Keyframe_MorphInterpolateRotation(t, &jointTable->z, frameRot.z, morphRot.z);
            } else {
                Keyframe_MorphInterpolateRotation(t, &jointTable->x, frameRotInv.x, morphRot.x);
                Keyframe_MorphInterpolateRotation(t, &jointTable->y, frameRotInv.y, morphRot.y);
                Keyframe_MorphInterpolateRotation(t, &jointTable->z, frameRotInv.z, morphRot.z);
            }
        }
        morphTable++;
        jointTable++;
        Keyframe_MorphInterpolateLinear((s16*)jointTable, (s16*)morphTable, t);
        jointTable++;
        morphTable++;
    }
}

s32 Keyframe_UpdateFlex(KFSkelAnimeFlex* kfSkelAnime) {
    KeyFrame* keyFrames;
    u32 bit;
    s32 kfn = 0, fixedValueIndex = 0, kfStart = 0;
    u16* bitFlags;
    s16* outputValues;
    s16* fixedValues;
    s16* kfNums;
    u8 i, j, limbIndex;

    if (kfSkelAnime->morphFrames != 0.0f)
        outputValues = (s16*)kfSkelAnime->morphTable;
    else outputValues = (s16*)kfSkelAnime->jointTable;

    fixedValues = SEGMENTED_TO_VIRTUAL(kfSkelAnime->animation->fixedValues);
    kfNums = SEGMENTED_TO_VIRTUAL(kfSkelAnime->animation->kfNums);
    keyFrames = SEGMENTED_TO_VIRTUAL(kfSkelAnime->animation->keyFrames);
    bitFlags = SEGMENTED_TO_VIRTUAL(kfSkelAnime->animation->bitFlags.flex);

    for (limbIndex=0; limbIndex<kfSkelAnime->skeleton->limbCount; limbIndex++) {
        bit = 1 << (3 * 3 - 1);

        for (i=0; i<3; i++) {
            for (j=0; j<3; j++) {
                if (bitFlags[limbIndex] & bit) {
                    *outputValues = Keyframe_KeyCalc(kfStart, kfNums[kfn], keyFrames, kfSkelAnime->frameCtrl.curTime);
                    kfStart += kfNums[kfn];
                    kfn++;
                } else {
                    *outputValues = fixedValues[fixedValueIndex];
                    fixedValueIndex++;
                }
                bit >>= 1;

                if (i == 1)
                    *outputValues = DEG_TO_BINANG(FMOD(*outputValues * 0.1f, 360));
                outputValues++;
            }
        }
    }

    if (IS_ZERO(kfSkelAnime->morphFrames))
        return FrameCtrl_Update(&kfSkelAnime->frameCtrl);
    else if (kfSkelAnime->morphFrames > 0.0f) {
        Keyframe_FlexMorphInterpolation(kfSkelAnime);
        kfSkelAnime->morphFrames -= 1.0f;
        if (kfSkelAnime->morphFrames <= 0.0f)
            kfSkelAnime->morphFrames = 0.0f;
        return KEYFRAME_NOT_DONE;
    } else {
        Keyframe_FlexMorphInterpolation(kfSkelAnime);
        kfSkelAnime->morphFrames += 1.0f;
        if (kfSkelAnime->morphFrames >= 0.0f)
            kfSkelAnime->morphFrames = 0.0f;
        return FrameCtrl_Update(&kfSkelAnime->frameCtrl);
    }
}

void Keyframe_DrawFlexLimb(PlayState* play, KFSkelAnimeFlex* kfSkelAnime, s32* limbIndex, OverrideKeyframeDrawScaled overrideKeyframeDraw, PostKeyframeDrawScaled postKeyframeDraw, void* arg, Mtx** mtxStack) {
    KeyFrameFlexLimb* limb = SEGMENTED_TO_VIRTUAL(kfSkelAnime->skeleton->limbs);
    Gfx* newDList;
    Gfx* limbDList;
    u8 drawFlags;
    Vec3s* jointData;
    Vec3f scale, pos;
    Vec3s rot;
    u8 i;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
    limb += *limbIndex;
    jointData = &kfSkelAnime->jointTable[*limbIndex * 3];
    scale.x = jointData->x * 0.01f;
    scale.y = jointData->y * 0.01f;
    scale.z = jointData->z * 0.01f;
    jointData++;
    rot.x = jointData->x;
    rot.y = jointData->y;
    rot.z = jointData->z;
    jointData++;
    pos.x = jointData->x;
    pos.y = jointData->y;
    pos.z = jointData->z;
    Matrix_Push();
    newDList = limbDList = limb->dList;
    drawFlags = limb->drawFlags;

    if (overrideKeyframeDraw == NULL || (overrideKeyframeDraw != NULL && overrideKeyframeDraw(play, kfSkelAnime, *limbIndex, &newDList, &drawFlags, arg, &scale, &rot, &pos))) {
        if ((kfSkelAnime->transformCallbacks == NULL) || (limb->callbackIndex == KF_CALLBACK_INDEX_NONE) || (kfSkelAnime->transformCallbacks[limb->callbackIndex] == NULL) || kfSkelAnime->transformCallbacks[limb->callbackIndex](play, kfSkelAnime, *limbIndex, &newDList, &drawFlags, arg)) {
            Matrix_TranslateRotateZYX(&pos, &rot);

            if (scale.x != 1.0f || scale.y != 1.0f || scale.z != 1.0f)
                Matrix_Scale(scale.x, scale.y, scale.z, MTXMODE_APPLY);

            if (newDList != NULL) {
                KEYFRAME_MATRIX_TO_MTX(*mtxStack);

                if (drawFlags & KEYFRAME_DRAW_XLU) {
                    gSPMatrix(POLY_XLU_DISP++, *mtxStack, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
                    gSPDisplayList(POLY_XLU_DISP++, newDList);
                } else {
                    gSPMatrix(POLY_OPA_DISP++, *mtxStack, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
                    gSPDisplayList(POLY_OPA_DISP++, newDList);
                }

                (*mtxStack)++;
            } else if (limbDList != NULL) {
                gSPMatrix(POLY_OPA_DISP++, *mtxStack, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
                KEYFRAME_MATRIX_TO_MTX(*mtxStack);
                (*mtxStack)++;
            }
        }
    }

    if (postKeyframeDraw != NULL)
        postKeyframeDraw(play, kfSkelAnime, *limbIndex, &newDList, &drawFlags, arg, &scale, &rot, &pos);

    (*limbIndex)++;

    for (i=0; i<limb->numChildren; i++)
        Keyframe_DrawFlexLimb(play, kfSkelAnime, limbIndex, overrideKeyframeDraw, postKeyframeDraw, arg, mtxStack);

    Matrix_Pop();
    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}

void Keyframe_DrawFlex(PlayState* play, KFSkelAnimeFlex* kfSkelAnime, Mtx* mtxStack, OverrideKeyframeDrawScaled overrideKeyframeDraw, PostKeyframeDrawScaled postKeyframeDraw, void* arg) {
    s32 limbIndex = 0;

    if (mtxStack == NULL)
        return;

    OPEN_DISPS(play->state.gfxCtx, __FILE__, __LINE__);

    gSPSegment(POLY_OPA_DISP++, 0x0D, mtxStack);
    gSPSegment(POLY_XLU_DISP++, 0x0D, mtxStack);

    Keyframe_DrawFlexLimb(play, kfSkelAnime, &limbIndex, overrideKeyframeDraw, postKeyframeDraw, arg, &mtxStack);

    CLOSE_DISPS(play->state.gfxCtx, __FILE__, __LINE__);
}
