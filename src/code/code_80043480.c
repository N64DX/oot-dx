#include <ultra64.h>
#include <global.h>

void func_80043480(DynaPolyActor* dynaActor, DynaPolyMoveFlag flags) {
    dynaActor->dynaPolyId = -1;
    dynaActor->unk_15C = flags;
    dynaActor->unk_160 = 0;
    dynaActor->unk_150 = 0.0f;
    dynaActor->unk_154 = 0.0f;
}

void func_800434A0(DynaPolyActor* dynaActor) {
    dynaActor->unk_160 = 0;
}

void func_800434A8(DynaPolyActor* dynaActor) {
    dynaActor->unk_160 |= 1;
}

void func_800434B8(DynaPolyActor* dynaActor) {
    dynaActor->unk_160 |= 2;
}

void func_800434C8(CollisionContext* colCtx, s32 floorPolySource) {
    DynaPolyActor* dynaActor = (DynaPolyActor*)func_8003EB84(colCtx, floorPolySource);

    if (dynaActor != NULL) {
        func_800434B8(dynaActor);
    }
}

void func_800434F8(DynaPolyActor* dynaActor) {
    dynaActor->unk_160 |= 4;
}

void func_80043508(CollisionContext* colCtx, s32 floorPolySource) {
    DynaPolyActor* dynaActor = (DynaPolyActor*)func_8003EB84(colCtx, floorPolySource);

    if (dynaActor != NULL) {
        func_800434F8(dynaActor);
    }
}

void func_80043538(DynaPolyActor* dynaActor) {
    dynaActor->unk_160 |= 8;
}

s32 func_80043548(DynaPolyActor* dynaActor) {
    if (dynaActor->unk_160 & 1) {
        return true;
    } else {
        return false;
    }
}

s32 func_8004356C(DynaPolyActor* dynaActor) {
    if (dynaActor->unk_160 & 2) {
        return true;
    } else {
        return false;
    }
}

s32 func_80043590(DynaPolyActor* dynaActor) {
    if (dynaActor->unk_160 & 4) {
        return true;
    } else {
        return false;
    }
}

s32 func_800435B4(DynaPolyActor* dynaActor) {
    if (dynaActor->unk_160 & 8) {
        return true;
    } else {
        return false;
    }
}

s32 func_800435D8(GlobalContext* globalCtx, DynaPolyActor* actor, s16 arg2, s16 arg3, s16 arg4) {
    Vec3f posA;
    Vec3f posB;
    Vec3f posResult;
    f32 sin;
    f32 cos;
    s32 bgId;
    CollisionPoly* poly;
    f32 a2;
    f32 a3;
    f32 sign;

    sin = Math_Sins(actor->unk_158);
    cos = Math_Coss(actor->unk_158);
    sign = (0.0f <= actor->unk_150) ? 1.0f : -1.0f;

    a2 = (f32)arg2 - 0.1f;
    posA.x = actor->actor.posRot.pos.x + (a2 * cos);
    posA.y = actor->actor.posRot.pos.y + arg4;
    posA.z = actor->actor.posRot.pos.z - (a2 * sin);

    a3 = (f32)arg3 - 0.1f;
    posB.x = sign * a3 * sin + posA.x;
    posB.y = posA.y;
    posB.z = sign * a3 * cos + posA.z;
    if (func_8003DFA0(&globalCtx->colCtx, &posA, &posB, &posResult, &poly, true, false, false, true, &bgId, actor,
                      0.0f)) {
        return false;
    }
    posA.x = (actor->actor.posRot.pos.x * 2) - posA.x;
    posA.z = (actor->actor.posRot.pos.z * 2) - posA.z;
    posB.x = sign * a3 * sin + posA.x;
    posB.z = sign * a3 * cos + posA.z;
    if (func_8003DFA0(&globalCtx->colCtx, &posA, &posB, &posResult, &poly, true, false, false, true, &bgId, actor,
                      0.0f)) {
        return false;
    }
    return true;
}
