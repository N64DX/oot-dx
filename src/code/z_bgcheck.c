#include <ultra64.h>
#include <global.h>
#include <vt.h>
#include <z64actor.h>

// func_80041DB8, SurfaceType wall properties
s32 D_80119D90[32] = {
    0, 1, 3, 5, 8, 16, 32, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
};

// func_80041F34
u16 D_80119E10[14] = {
    NA_SE_PL_WALK_GROUND & 0x1FF, NA_SE_PL_WALK_SAND & 0x1FF,   NA_SE_PL_WALK_CONCRETE & 0x1FF,
    NA_SE_PL_WALK_DIRT & 0x1FF,   NA_SE_PL_WALK_WATER0 & 0x1FF, NA_SE_PL_WALK_WATER1 & 0x1FF,
    NA_SE_PL_WALK_WATER2 & 0x1FF, NA_SE_PL_WALK_MAGMA & 0x1FF,  NA_SE_PL_WALK_GRASS & 0x1FF,
    NA_SE_PL_WALK_GLASS & 0x1FF,  NA_SE_PL_WALK_LADDER & 0x1FF, NA_SE_PL_WALK_GROUND & 0x1FF,
    NA_SE_PL_WALK_ICE & 0x1FF,    NA_SE_PL_WALK_IRON & 0x1FF,
};

// original name: T_BGCheck_PosErrorCheck
s32 BgCheck_PosErrorCheck(Vec3f* pos, char* file, s32 line) {
    if (pos->x >= BGCHECK_XYZ_ABSMAX || pos->x <= -BGCHECK_XYZ_ABSMAX || pos->y >= BGCHECK_XYZ_ABSMAX ||
        pos->y <= -BGCHECK_XYZ_ABSMAX || pos->z >= BGCHECK_XYZ_ABSMAX || pos->z <= -BGCHECK_XYZ_ABSMAX) {
        osSyncPrintf(VT_FGCOL(RED));
        // "Translates to: Position is invalid."
        osSyncPrintf("T_BGCheck_PosErrorCheck():位置が妥当ではありません。pos (%f,%f,%f) file:%s line:%d\n", pos->x,
                     pos->y, pos->z, file, line);
        osSyncPrintf(VT_RST);
        return true;
    }
    return false;
}

// Set SSNode
void func_80038708(SSNode* node, s16* polyId, u16 next) {
    node->polyId = *polyId;
    node->next = next;
}

// Set SS_NULL
void func_8003871C(u16* nodeId) {
    *nodeId = SS_NULL;
}

//  Insert `polyId` at the start of the static `headNodeId` list
void func_80038728(SSNodeList* nodeList, u16* headNodeId, s16* polyId) {
    u16 newNodeId = func_8003E4DC(nodeList);

    func_80038708(&nodeList->tbl[newNodeId], polyId, *headNodeId);
    *headNodeId = newNodeId;
}

//  Insert `polyId` at the start of the dyna `headNodeId` list
void func_80038780(DynaSSNodeList* nodeList, u16* headNodeId, s16* polyId) {
    u16 newNodeId = func_80038878(nodeList);

    if (!(newNodeId != SS_NULL)) {
        __assert("new_node != SS_NULL", "../z_bgcheck.c", 1776);
    }

    func_80038708(&nodeList->tbl[newNodeId], polyId, *headNodeId);
    *headNodeId = newNodeId;
}

// Initialize DynaSSNodeList
void func_800387FC(GlobalContext* globalCtx, DynaSSNodeList* nodeList) {
    nodeList->tbl = NULL;
    nodeList->count = 0;
}

// Initialize DynaSSNodeList tbl
void func_8003880C(GlobalContext* globalCtx, DynaSSNodeList* nodeList, s32 max) {
    nodeList->tbl = THA_AllocEndAlign(&globalCtx->state.tha, max * 4, -2);

    if (!(nodeList->tbl != NULL)) {
        __assert("psst->tbl != NULL", "../z_bgcheck.c", 1811);
    }

    nodeList->max = max;
    nodeList->count = 0;
}

// Initialize DynaSSNodeList count
void func_80038870(DynaSSNodeList* nodeList) {
    nodeList->count = 0;
}

// Get next available node index in DynaSSNodeList
// returns SS_NULL if list is full
u16 func_80038878(DynaSSNodeList* nodeList) {
    u16 var = nodeList->count++;

    if (nodeList->max <= var) {
        return SS_NULL;
    }

    return var;
}

// original name: T_BGCheck_Vec3sToVec3f
void BgCheck_Vec3sToVec3f(Vec3s* src, Vec3f* dst) {
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

// original name: T_BGCheck_Vec3fToVec3s
void BgCheck_Vec3fToVec3s(Vec3s* dst, Vec3f* src) {
    dst->x = src->x;
    dst->y = src->y;
    dst->z = src->z;
}

// Get CollisionPoly's lowest y point
s16 func_80038924(CollisionPoly* poly, Vec3s* vtxList) {
    s32 a, b, c;
    s16 min;

    if (poly->normal.y == COLPOLY_SNORMAL(1.0f) || poly->normal.y == COLPOLY_SNORMAL(-1.0f)) {
        return vtxList[COLPOLY_VTX_INDEX(poly->flags_vIA)].y;
    }

    a = COLPOLY_VTX_INDEX(poly->flags_vIA);
    b = COLPOLY_VTX_INDEX(poly->flags_vIB);
    c = poly->vIC;

    min = vtxList[a].y;

    if (min > vtxList[b].y) {
        min = vtxList[b].y;
    }
    if (min < vtxList[c].y) {
        return min;
    }
    return vtxList[c].y;
}

// CollisionPoly get unit normal
void CollisionPoly_GetNormal(CollisionPoly* poly, f32* nx, f32* ny, f32* nz) {
    *nx = COLPOLY_GET_NORMAL(poly->normal.x);
    *ny = COLPOLY_GET_NORMAL(poly->normal.y);
    *nz = COLPOLY_GET_NORMAL(poly->normal.z);
}

// Compute transform matrix mapping +y (up) to the collision poly's normal
void func_80038A28(CollisionPoly* poly, f32 trx, f32 try, f32 trz, MtxF* dest) {
    f32 nx;
    f32 ny;
    f32 nz;
    s32 pad;
    f32 phi_f2;
    f32 phi_f14;
    f32 phi_f12;
    f32 inv_phi_f2;
    f32 inv_phi_f14;

    if (poly == NULL) {
        return;
    }
    CollisionPoly_GetNormal(poly, &nx, &ny, &nz);

    phi_f2 = sqrtf(1.0f - SQ(nx));
    if (!IS_ZERO(phi_f2)) {
        inv_phi_f2 = 1.0f / phi_f2;
        phi_f14 = ny * inv_phi_f2;
        phi_f12 = -(nz * inv_phi_f2);
    } else {
        phi_f14 = sqrtf(1.0f - SQ(ny));
        if (1) {}
        if (!IS_ZERO(phi_f14)) {
            inv_phi_f14 = (1.0f / phi_f14);
            phi_f12 = nx * inv_phi_f14;
            phi_f2 = -(nz * inv_phi_f14);
        } else {
            phi_f12 = 0.0f;
            phi_f2 = 0.0f;
        }
    }
    dest->xx = phi_f2;
    dest->xy = (-nx) * phi_f14;
    dest->xz = nx * phi_f12;
    dest->yx = nx;
    dest->yy = ny;
    dest->yz = nz;
    dest->zy = phi_f12;
    dest->zz = phi_f14;
    dest->xw = 0.0f;
    dest->yw = 0.0f;
    dest->zx = 0.0f;
    dest->zw = 0.0f;
    dest->wx = trx;
    dest->wy = try
        ;
    dest->wz = trz;
    dest->ww = 1.0f;
}

// Calculate point distance from plane along normal
f32 func_80038B7C(CollisionPoly* poly, Vec3f* point) {
    return (poly->normal.x * point->x + poly->normal.y * point->y + poly->normal.z * point->z) * COLPOLY_NORMAL_FRAC +
           poly->dist;
}

// Get Poly Verts
void CollisionPoly_GetVertices(CollisionPoly* poly, Vec3s* vtxList, Vec3f* dest) {
    BgCheck_Vec3sToVec3f(&vtxList[COLPOLY_VTX_INDEX(poly->flags_vIA)], &dest[0]);
    BgCheck_Vec3sToVec3f(&vtxList[COLPOLY_VTX_INDEX(poly->flags_vIB)], &dest[1]);
    BgCheck_Vec3sToVec3f(&vtxList[poly->vIC], &dest[2]);
}

// Get Vertex by bgId
// original name: T_Polygon_GetVertex_bg_ai
void func_80038C78(CollisionPoly* poly, s32 bgId, CollisionContext* colCtx, Vec3f* dest) {
    Vec3s* vtxList;

    if (poly == NULL || bgId > BG_ACTOR_MAX || dest == NULL) {
        osSyncPrintf(VT_COL(RED, WHITE));
        // translates to: "Argument not appropriate. Processing terminated."
        osSyncPrintf("T_Polygon_GetVertex_bg_ai(): Error %d %d %d 引数が適切ではありません。処理を終了します。\n",
                     poly == NULL, bgId > BG_ACTOR_MAX, dest == NULL);
        osSyncPrintf(VT_RST);

        if (dest != NULL) {
            // @bug: dest[2] x and y are not set to 0
            dest[0].x = dest[0].y = dest[0].z = dest[1].x = dest[1].y = dest[1].z = dest[2].z = 0.0f;
        }
    } else {
        if (bgId == BGCHECK_SCENE) {
            vtxList = colCtx->colHeader->vtxList;
        } else {
            vtxList = colCtx->dyna.vtxList;
        }

        CollisionPoly_GetVertices(poly, vtxList, dest);
    }
}

// Checks if point (`x`,`z`) is within `chkDist` of `poly`, computing `yIntersect` if true
// Determinant max 300.0f
s32 func_80038D48(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 z, f32* yIntersect, f32 chkDist) {
    static Vec3f polyVerts[3];
    f32 nx;
    f32 ny;
    f32 nz;
    Vec3s* vA;
    Vec3s* vB;
    Vec3s* vC;

    vA = &vtxList[COLPOLY_VTX_INDEX(poly->flags_vIA)];
    Math_Vec3s_ToVec3f(&polyVerts[0], vA);
    vB = &vtxList[COLPOLY_VTX_INDEX(poly->flags_vIB)];
    Math_Vec3s_ToVec3f(&polyVerts[1], vB);
    vC = &vtxList[poly->vIC];
    Math_Vec3s_ToVec3f(&polyVerts[2], vC);

    nx = COLPOLY_GET_NORMAL(poly->normal.x);
    ny = COLPOLY_GET_NORMAL(poly->normal.y);
    nz = COLPOLY_GET_NORMAL(poly->normal.z);

    return Math3D_TriChkPointParaYIntersectDist(&polyVerts[0], &polyVerts[1], &polyVerts[2], nx, ny, nz, poly->dist, z,
                                                x, yIntersect, chkDist);
}

// Checks if point (`x`,`z`) is within `chkDist` of `poly`, computing `yIntersect` if true
// Determinant max 0.0f (checks if on or within poly)
s32 func_80038E78(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 z, f32* yIntersect, f32 chkDist) {
    static Vec3f polyVerts[3];
    f32 nx;
    f32 ny;
    f32 nz;

    CollisionPoly_GetVertices(poly, vtxList, polyVerts);
    CollisionPoly_GetNormal(poly, &nx, &ny, &nz);
    return Math3D_TriChkPointParaYIntersectInsideTri(&polyVerts[0], &polyVerts[1], &polyVerts[2], nx, ny, nz,
                                                     poly->dist, z, x, yIntersect, chkDist);
}

// Checks if point (`x`,`z`) is within 1.0f of `poly`, computing `yIntersect` if true
// Determinant max 300.0f
s32 func_80038F20(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 z, f32* yIntersect) {
    return func_80038D48(poly, vtxList, x, z, yIntersect, 1.0f);
}

// Checks if point (`y`,`z`) is within 1.0f of `poly`, computing `xIntersect` if true
// Determinant max 300.0f
s32 func_80038F60(CollisionPoly* poly, Vec3s* vtxList, f32 y, f32 z, f32* xIntersect) {
    static Vec3f polyVerts[3];
    f32 nx;
    f32 ny;
    f32 nz;

    CollisionPoly_GetVertices(poly, vtxList, polyVerts);
    CollisionPoly_GetNormal(poly, &nx, &ny, &nz);
    return Math3D_TriChkPointParaXIntersect(&polyVerts[0], &polyVerts[1], &polyVerts[2], nx, ny, nz, poly->dist, y, z,
                                            xIntersect);
}

// Checks if point (`x`,`y`) is within 1.0f of `poly`, computing `zIntersect` if true
// Determinant max 300.0f
s32 func_80039000(CollisionPoly* poly, Vec3s* vtxList, f32 x, f32 y, f32* zIntersect) {
    static Vec3f polyVerts[3];
    f32 nx;
    f32 ny;
    f32 nz;

    CollisionPoly_GetVertices(poly, vtxList, polyVerts);
    CollisionPoly_GetNormal(poly, &nx, &ny, &nz);
    return Math3D_TriChkPointParaZIntersect(&polyVerts[0], &polyVerts[1], &polyVerts[2], nx, ny, nz, poly->dist, x, y,
                                            zIntersect);
}

// Test if travelling from `posA` to `posB` intersects `poly`
// returns true if an intersection occurs, else false
// returns `planeIntersect`, which is the point at which the line from `posA` to `posB` crosses `poly`'s plane
// if `chkOneFace` is true, return false (no intersection) when going through the poly from A to B is done in the
// normal's direction
s32 func_800390A0(CollisionPoly* poly, Vec3s* vtxList, Vec3f* posA, Vec3f* posB, Vec3f* planeIntersect, s32 chkOneFace,
                  f32 chkDist) {
    static Vec3f polyVerts[3];
    static Plane plane;
    f32 planeDistA;
    f32 planeDistB;
    f32 planeDistDelta;

    plane.originDist = poly->dist;
    planeDistA =
        (poly->normal.x * posA->x + poly->normal.y * posA->y + poly->normal.z * posA->z) * COLPOLY_NORMAL_FRAC +
        plane.originDist;
    planeDistB =
        (poly->normal.x * posB->x + poly->normal.y * posB->y + poly->normal.z * posB->z) * COLPOLY_NORMAL_FRAC +
        plane.originDist;

    planeDistDelta = planeDistA - planeDistB;
    if ((planeDistA >= 0.0f && planeDistB >= 0.0f) || (planeDistA < 0.0f && planeDistB < 0.0f) ||
        (chkOneFace && planeDistA < 0.0f && planeDistB > 0.0f) || IS_ZERO(planeDistDelta)) {
        return false;
    }

    CollisionPoly_GetNormal(poly, &plane.normal.x, &plane.normal.y, &plane.normal.z);
    CollisionPoly_GetVertices(poly, vtxList, polyVerts);
    Math3D_LineSplitRatio(posA, posB, planeDistA / planeDistDelta, planeIntersect);
    if ((fabsf(plane.normal.x) > 0.5f &&
         Math3D_TriChkPointParaXDist(&polyVerts[0], &polyVerts[1], &polyVerts[2], &plane, planeIntersect->y,
                                     planeIntersect->z, chkDist)) ||
        (fabsf(plane.normal.y) > 0.5f &&
         Math3D_TriChkPointParaYDist(&polyVerts[0], &polyVerts[1], &polyVerts[2], &plane, planeIntersect->z,
                                     planeIntersect->x, chkDist)) ||
        (fabsf(plane.normal.z) > 0.5f &&
         Math3D_TriChkLineSegParaZDist(&polyVerts[0], &polyVerts[1], &polyVerts[2], &plane, planeIntersect->x,
                                       planeIntersect->y, chkDist))) {
        return true;
    }
    return false;
}

// Tests if sphere `center` `radius` intersects `poly`
s32 func_8003937C(CollisionPoly* poly, Vec3s* vtxList, Vec3f* center, f32 radius) {
    static Sphere16 sphere;
    static TriNorm tri;
    Vec3f intersect;

    CollisionPoly_GetVertices(poly, vtxList, tri.vtx);
    CollisionPoly_GetNormal(poly, &tri.plane.normal.x, &tri.plane.normal.y, &tri.plane.normal.z);
    tri.plane.originDist = poly->dist;
    sphere.center.x = center->x;
    sphere.center.y = center->y;
    sphere.center.z = center->z;
    sphere.radius = radius;
    return Math3D_TriVsSphIntersect(&sphere, &tri, &intersect);
}

// Add poly to static lookup table
// Table is sorted by poly's smallest y vertex component
// `nodeList` is the list to append a new poly to
// `polyList` is the CollisionPoly lookup list
// `vtxList` is the vertex lookup list
// `polyId` is the index of the poly in polyList to insert into the lookup table
void func_80039448(CollisionContext* colCtx, u16* nodeList, CollisionPoly* polyList, Vec3s* vtxList, s16 polyId);
#ifdef NON_MATCHING
// regalloc issues
void func_80039448(CollisionContext* colCtx, u16* nodeList, CollisionPoly* polyList, Vec3s* vtxList, s16 polyId) {
    SSNode* curNode; // t1, sp24
    SSNode* nextNode;
    CollisionPoly* curPoly;
    s32 polyYMin;
    u16 newNodeId;

    // if list is null
    if (*nodeList == SS_NULL) {
        func_80038728(&colCtx->polyNodes, nodeList, &polyId);
        return;
    }

    polyYMin = func_80038924(&polyList[polyId], vtxList);

    // regalloc issues
    curNode = &colCtx->polyNodes.tbl[*nodeList];
    curPoly = &polyList[curNode->polyId];

    // if the poly being inserted has a lower y than the first poly
    if (polyYMin < vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIA)].y &&
        polyYMin < vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIB)].y && polyYMin < vtxList[curPoly->vIC].y) {
        func_80038728(&colCtx->polyNodes, nodeList, &polyId);
        return;
    }
    while (true) {
        // if at the end of the list
        if (curNode->next == SS_NULL) {
            if (curPoly->flags_vIA) {}
            newNodeId = func_8003E4DC(&colCtx->polyNodes);
            func_80038708(&colCtx->polyNodes.tbl[newNodeId], &polyId, SS_NULL);
            curNode->next = newNodeId;
            return;
        }

        // regalloc issues
        if (1) {
            nextNode = &colCtx->polyNodes.tbl[curNode->next];
            curPoly = &polyList[nextNode->polyId];
        }

        // if the poly being inserted is lower than the next poly
        if (polyYMin < vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIA)].y &&
            polyYMin < vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIB)].y && polyYMin < vtxList[curPoly->vIC].y) {
            newNodeId = func_8003E4DC(&colCtx->polyNodes);
            func_80038708(&colCtx->polyNodes.tbl[newNodeId], &polyId, curNode->next);
            curNode->next = newNodeId;
            return;
        }
        curNode = nextNode;
    }
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_bgcheck/func_80039448.s")
#endif

// Add CollisionPoly to static lookup list
void func_8003965C(StaticLookup* lookup, CollisionContext* colCtx, CollisionPoly* polyList, Vec3s* vtxList, s16 index) {
    if (polyList[index].normal.y > COLPOLY_SNORMAL(0.5f)) {
        func_80039448(colCtx, &lookup->floor, polyList, vtxList, index);
    } else if (polyList[index].normal.y < COLPOLY_SNORMAL(-0.8f)) {
        func_80039448(colCtx, &lookup->ceiling, polyList, vtxList, index);
    } else {
        func_80039448(colCtx, &lookup->wall, polyList, vtxList, index);
    }
}

// Locates the closest static poly directly underneath `pos`, starting at list `nodeId`
// returns yIntersect of the closest poly, or `yIntersectMin`
// stores the pointer of the closest poly to `outPoly`
// if (flags & 1), ignore polys with a normal.y < 0 (from vertical walls to ceilings)
f32 func_800396F0(CollisionContext* colCtx, u16 xpFlags, u16* nodeId, CollisionPoly** outPoly, Vec3f* pos,
                  f32 yIntersectMin, f32 chkDist, s32 flags);
#ifdef NON_MATCHING
// regalloc
f32 func_800396F0(CollisionContext* colCtx, u16 xpFlags, u16* nodeId, CollisionPoly** outPoly, Vec3f* pos,
                  f32 yIntersectMin, f32 chkDist, s32 flags) {
    Vec3s* vtxList;          // a1
    s32 polyId;              // s0
    CollisionPoly* polyList; // t0
    f32 yIntersect;          // sp78
    SSNode* curNode;         // s1
    f32 result;              // f0
    // CollisionPoly* poly;     // v1

    result = yIntersectMin;
    if (*nodeId == SS_NULL) {
        return result;
    }

    curNode = &colCtx->polyNodes.tbl[*nodeId];

    // 0924
    while (true) {
        polyList = colCtx->colHeader->polyList;
        polyId = curNode->polyId;

        if (COLPOLY_VIA_FLAG_TEST(polyList[polyId].flags_vIA, xpFlags) ||
            ((flags & 1) && polyList[polyId].normal.y < 0)) {
            if (curNode->next == SS_NULL) {
                break;
            }
            curNode = &colCtx->polyNodes.tbl[curNode->next];
            continue;
        }

        vtxList = colCtx->colHeader->vtxList;
        if (pos->y < vtxList[COLPOLY_VTX_INDEX(polyList[polyId].flags_vIA)].y &&
            pos->y < vtxList[COLPOLY_VTX_INDEX(polyList[polyId].flags_vIB)].y &&
            pos->y < vtxList[polyList[polyId].vIC].y) {
            break;
        }

        if (func_80038E78(&polyList[polyId], vtxList, pos->x, pos->z, &yIntersect, chkDist) == true) {
            // if poly is closer to pos without going over
            if (yIntersect < pos->y && result < yIntersect) {

                result = yIntersect;
                *outPoly = &colCtx->colHeader->polyList[polyId];
            }
        }

        if (curNode->next == SS_NULL) {
            break;
        }
        curNode = &colCtx->polyNodes.tbl[curNode->next];
    }
    return result;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_bgcheck/func_800396F0.s")
#endif

// Locates the closest static poly directly underneath `pos` within `lookup`.
// returns yIntersect of the closest poly, or `yIntersectMin`
// stores the pointer of the closest poly to `outPoly`
f32 func_8003992C(StaticLookup* lookup, CollisionContext* colCtx, u16 xpFlags, CollisionPoly** poly, Vec3f* pos,
                  u32 arg5, f32 chkDist, f32 yIntersectMin) {
    s32 flag; // skip polys with normal.y < 0
    f32 yIntersect = yIntersectMin;

    if (arg5 & 4) {
        yIntersect = func_800396F0(colCtx, xpFlags, &lookup->floor, poly, pos, yIntersect, chkDist, 0);
    }

    if ((arg5 & 2) || (arg5 & 8)) {
        flag = 0;
        if (arg5 & 0x10) {
            flag = 1;
        }
        yIntersect = func_800396F0(colCtx, xpFlags, &lookup->wall, poly, pos, yIntersect, chkDist, flag);
    }

    if (arg5 & 1) {
        flag = 0;
        if (arg5 & 0x10) {
            flag = 1;
        }
        yIntersect = func_800396F0(colCtx, xpFlags, &lookup->ceiling, poly, pos, yIntersect, chkDist, flag);
    }

    return yIntersect;
}

// Compute wall displacement on `posX` and `posZ`
// sets `wallPolyPtr` to `poly` if `wallPolyPtr` is NULL or not a damage wall
// returns true if `wallPolyPtr` was changed
// `invXZlength` is 1 / sqrt( sq(poly.normal.x) + sq(poly.normal.z) )
s32 func_80039A3C(CollisionContext* colCtx, CollisionPoly* poly, f32* posX, f32* posZ, f32 nx, f32 ny, f32 nz,
                  f32 invXZlength, f32 planeDist, f32 radius, CollisionPoly** wallPolyPtr) {
    CollisionPoly* wallPoly;
    u32 surfaceData;
    u32 wallDamage;
    f32 displacement = (radius - planeDist) * invXZlength;

    *posX += displacement * nx;
    *posZ += displacement * nz;

    wallPoly = *wallPolyPtr;
    if (wallPoly == NULL) {
        *wallPolyPtr = poly;
        return true;
    }

    surfaceData = colCtx->colHeader->polygonTypes[wallPoly->type].data[1];
    wallDamage = surfaceData & 0x08000000 ? 1 : 0;

    if (!wallDamage) {
        *wallPolyPtr = poly;
        return true;
    }
    return false;
}

// Performs collision detection on static poly walls within `lookup` on sphere `pos`, `radius`
// returns true if a collision was detected
// `outX` `outZ` return the displaced x,z coordinates,
// `outPoly` returns the pointer to the nearest poly collided with, or NULL
s32 func_80039AEC(StaticLookup* lookup, CollisionContext* colCtx, u16 xpFlags, f32* outX, f32* outZ, Vec3f* pos,
                  f32 radius, CollisionPoly** outPoly);
#ifdef NON_MATCHING
// regalloc issues
s32 func_80039AEC(StaticLookup* lookup, CollisionContext* colCtx, u16 xpFlags, f32* outX, f32* outZ, Vec3f* pos,
                  f32 radius, CollisionPoly** outPoly) {
    // f32 sp104;
    Vec3f resultPos; // spFC
    f32 temp_f2;
    f32 temp_f2_2;
    f32 planeDist;           // f30
    f32 intersect;           // spEC
    s32 result;              // spE8
    CollisionPoly* curPoly;  // s0
    CollisionPoly* polyList; // spE0
    f32 temp_f0;             // pad
    f32 invNormalXZ;         // sp9C //f14
    f32 temp_f0_3;           // f0
    f32 xTemp;               // f0
    s32 pad2;
    f32 normalXZ;    // f20
    f32 nx;          // f22
    f32 ny;          // f26
    f32 nz;          // f24
    f32 temp_f16;    // spB8
    Vec3s* vtxList;  // s2
    u16 pad;         // temp_v0;
    SSNode* curNode; // s1
    f32 zMin;        // f2
    f32 zMax;        // f12
    f32 xMin;        // f2
    f32 xMax;        //  f12

    result = false;
    if (lookup->wall == SS_NULL) {
        return result;
    }
    resultPos = *pos;

    polyList = colCtx->colHeader->polyList;
    vtxList = colCtx->colHeader->vtxList;
    curNode = &colCtx->polyNodes.tbl[lookup->wall];

    while (true) {
        curPoly = &polyList[curNode->polyId];
        if (pos->y < vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIA)].y &&
            pos->y < vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIB)].y && pos->y < vtxList[curPoly->vIC].y) {
            break;
        }

        nx = COLPOLY_GET_NORMAL(curPoly->normal.x);
        ny = COLPOLY_GET_NORMAL(curPoly->normal.y);
        nz = COLPOLY_GET_NORMAL(curPoly->normal.z);
        normalXZ = sqrtf(SQ(nx) + SQ(nz));
        planeDist = Math3D_DistPlaneToPos(nx, ny, nz, curPoly->dist, &resultPos);
        if (radius < fabsf(planeDist) || COLPOLY_VIA_FLAG_TEST(curPoly->flags_vIA, xpFlags)) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &colCtx->polyNodes.tbl[curNode->next];
                continue;
            }
        }

        (!IS_ZERO(normalXZ)) ? (void)0 : __assert("!IS_ZERO(ac_size)", "../z_bgcheck.c", 2854);
        invNormalXZ = 1.0f / normalXZ;
        temp_f16 = fabsf(nz) * invNormalXZ;
        if (temp_f16 < 0.4f) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &colCtx->polyNodes.tbl[curNode->next];
                continue;
            }
        }

        // compute curPoly zMin/zMax
        zMin = zMax = vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIA)].z;
        temp_f0_3 = vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIB)].z;

        if (temp_f0_3 < zMax) {
            zMin = temp_f0_3;
        } else if (zMax < temp_f0_3) {
            zMin = zMax;
            zMax = temp_f0_3;
        }
        temp_f0_3 = vtxList[curPoly->vIC].z;
        if (temp_f0_3 < zMin) {
            zMin = temp_f0_3;
        } else if (zMax < temp_f0_3) {
            zMax = temp_f0_3;
        }

        zMin -= radius;
        zMax += radius;

        if (resultPos.z < zMin || resultPos.z > zMax) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &colCtx->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        if (func_80039000(curPoly, vtxList, resultPos.x, pos->y, &intersect)) {
            temp_f2 = intersect - resultPos.z;
            if (fabsf(temp_f2) <= radius / temp_f16) {
                if (temp_f2 * nz <= 4.0f) {
                    func_80039A3C(colCtx, curPoly, &resultPos.x, &resultPos.z, nx, ny, nz, invNormalXZ, planeDist,
                                  radius, outPoly);
                    result = true;
                }
            }
        }
        if (curNode->next == SS_NULL) {
            break;
        } else {
            curNode = &colCtx->polyNodes.tbl[curNode->next];
        }
    }

    curNode = &colCtx->polyNodes.tbl[lookup->wall];

    while (true) {
        curPoly = &polyList[curNode->polyId];
        if (pos->y < vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIA)].y &&
            pos->y < vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIB)].y && pos->y < vtxList[curPoly->vIC].y) {
            break;
        }

        nx = COLPOLY_GET_NORMAL(curPoly->normal.x);
        ny = COLPOLY_GET_NORMAL(curPoly->normal.y);
        nz = COLPOLY_GET_NORMAL(curPoly->normal.z);
        normalXZ = sqrtf(SQ(nx) + SQ(nz));
        planeDist = Math3D_DistPlaneToPos(nx, ny, nz, curPoly->dist, &resultPos);
        if (radius < fabsf(planeDist) || COLPOLY_VIA_FLAG_TEST(curPoly->flags_vIA, xpFlags)) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &colCtx->polyNodes.tbl[curNode->next];
                continue;
            }
        }

        (!IS_ZERO(normalXZ)) ? (void)0 : __assert("!IS_ZERO(ac_size)", "../z_bgcheck.c", 2964);
        invNormalXZ = 1.0f / normalXZ;
        temp_f16 = fabsf(nx) * invNormalXZ;
        if (temp_f16 < 0.4f) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &colCtx->polyNodes.tbl[curNode->next];
                continue;
            }
        }

        // compute curPoly xMin/xMax
        xMin = xMax = vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIA)].x;
        temp_f0_3 = vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIB)].x;

        if (temp_f0_3 < xMax) {
            xMin = temp_f0_3;
        } else if (xMax < temp_f0_3) {
            xMin = xMax;
            xMax = temp_f0_3;
        }
        temp_f0_3 = vtxList[curPoly->vIC].x;
        if (temp_f0_3 < xMin) {
            xMin = temp_f0_3;
        } else if (xMax < temp_f0_3) {
            xMax = temp_f0_3;
        }

        xMin -= radius;
        xMax += radius;

        if (resultPos.x < xMin || xMax < resultPos.x) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &colCtx->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        if (func_80038F60(curPoly, vtxList, pos->y, resultPos.z, &intersect)) {
            temp_f2 = intersect - resultPos.x;
            if (fabsf(temp_f2) <= radius / temp_f16) {
                if (temp_f2 * nx <= 4.0f) {
                    func_80039A3C(colCtx, curPoly, &resultPos.x, &resultPos.z, nx, ny, nz, invNormalXZ, planeDist,
                                  radius, outPoly);
                    result = true;
                }
            }
        }
        if (curNode->next == SS_NULL) {
            break;
        } else {
            curNode = &colCtx->polyNodes.tbl[curNode->next];
            continue;
        }
    }

    *outX = resultPos.x;
    *outZ = resultPos.z;
    return result;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_bgcheck/func_80039AEC.s")
#endif

// Tests for collision with a static poly ceiling
// returns true if a collision occurs, else false
//`outPoly` returns the poly collided with
//`outY` returns the y coordinate needed to not collide with `outPoly`
s32 func_8003A3E0(StaticLookup* lookup, u16 xpFlags, CollisionContext* colCtx, f32* outY, Vec3f* pos, f32 checkHeight,
                  CollisionPoly** outPoly) {
    s32 result = false;
    u16 nextId;
    CollisionPoly* curPoly;
    CollisionPoly* polyList;
    f32 ceilingY;
    Vec3s* vtxList;
    SSNode* curNode;
    u16 ceiling;
    s32 curPolyId;

    ceiling = lookup->ceiling;
    if (ceiling == SS_NULL) {
        return false;
    }
    curNode = &colCtx->polyNodes.tbl[ceiling];
    polyList = colCtx->colHeader->polyList;
    vtxList = colCtx->colHeader->vtxList;

    *outY = pos->y;

    while (true) {
        curPolyId = curNode->polyId;
        if (COLPOLY_VIA_FLAG_TEST(colCtx->colHeader->polyList[curPolyId].flags_vIA, xpFlags)) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &colCtx->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        curPoly = &polyList[curPolyId];
        if (func_80038F20(curPoly, vtxList, pos->x, pos->z, &ceilingY)) {
            f32 intersectDist = ceilingY - *outY;
            f32 ny = COLPOLY_GET_NORMAL(curPoly->normal.y);
            if (intersectDist > 0.0f && intersectDist < checkHeight && intersectDist * ny <= 0) {
                *outY = ceilingY - checkHeight;
                *outPoly = curPoly;
                result = true;
            }
        }
        if (curNode->next == SS_NULL) {
            break;
        } else {
            curNode = &colCtx->polyNodes.tbl[curNode->next];
            continue;
        }
    }
    return result;
}

// Tests if line `posA` to `posB` intersects with a static poly in list `headNodeId`. Uses polyCheckTbl
// returns true if such a poly exists, else false
// `outPoly` returns the pointer of the poly intersected
// `posB` and `outPos` returns the point of intersection with `outPoly`
// `outDistSq` returns the squared distance from `posA` to the point of intersect
s32 func_8003A5B8(u16* headNodeId, CollisionContext* colCtx, u16 xpFlags1, u16 xpFlags2, Vec3f* posA, Vec3f* posB,
                  Vec3f* outPos, CollisionPoly** outPoly, f32* outDistSq, f32 chkDist, s32 bccFlags) {
    SSNode* curNode;
    u8* checkedPoly;
    Vec3f polyIntersect;
    CollisionPoly* polyList;
    CollisionPoly* curPoly;
    s32 result;
    f32 minY;
    f32 distSq;
    s16 polyId;
    u16 curNodeId;

    result = false;
    polyList = colCtx->colHeader->polyList;
    curNodeId = *headNodeId;
    if (curNodeId == SS_NULL) {
        return result;
    }

    curNode = &colCtx->polyNodes.tbl[curNodeId];
    while (true) {
        polyId = curNode->polyId;
        checkedPoly = &colCtx->polyNodes.polyCheckTbl[polyId];

        if (*checkedPoly == true || COLPOLY_VIA_FLAG_TEST(polyList[polyId].flags_vIA, xpFlags1) ||
            !(xpFlags2 == 0 || COLPOLY_VIA_FLAG_TEST(polyList[polyId].flags_vIA, xpFlags2))) {

            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &colCtx->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        *checkedPoly = true;
        curPoly = &polyList[polyId];
        minY = func_80038924(curPoly, colCtx->colHeader->vtxList);
        if (posA->y < minY && posB->y < minY) {
            break;
        }
        if (func_800390A0(curPoly, colCtx->colHeader->vtxList, posA, posB, &polyIntersect,
                          (bccFlags & BGCHECK_CHECK_ONE_FACE) != 0, chkDist)) {
            distSq = Math3D_Vec3fDistSq(posA, &polyIntersect);
            if (distSq < *outDistSq) {

                *outDistSq = distSq;
                *outPos = polyIntersect;
                *posB = polyIntersect;
                *outPoly = curPoly;
                result = true;
            }
        }
        if (curNode->next == SS_NULL) {
            break;
        }
        curNode = &colCtx->polyNodes.tbl[curNode->next];
    }
    return result;
}

// Tests if line `posA` to `posB` intersects with a static poly in `lookup`. Uses polyCheckTbl
// returns true if such a poly exists, else false
// `outPoly` returns the pointer of the poly intersected
// `posB` and `outPos` returns the point of intersection with `outPoly`
// `outDistSq` returns the squared distance from `posA` to the point of intersect
s32 func_8003A7D8(StaticLookup* lookup, CollisionContext* colCtx, u16 xpFlags1, u16 xpFlags2, Vec3f* posA, Vec3f* posB,
                  Vec3f* outPos, CollisionPoly** outPoly, f32 chkDist, f32* outDistSq, u32 bccFlags) {
    s32 result = false;
    if ((bccFlags & BGCHECK_CHECK_FLOOR) && lookup->floor != SS_NULL) {
        if (func_8003A5B8(&lookup->floor, colCtx, xpFlags1, xpFlags2, posA, posB, outPos, outPoly, outDistSq, chkDist,
                          bccFlags)) {
            result = true;
        }
    }

    if ((bccFlags & BGCHECK_CHECK_WALL) && lookup->wall != SS_NULL) {
        if (func_8003A5B8(&lookup->wall, colCtx, xpFlags1, xpFlags2, posA, posB, outPos, outPoly, outDistSq, chkDist,
                          bccFlags)) {
            result = true;
        }
    }

    if ((bccFlags & BGCHECK_CHECK_CEILING) && lookup->ceiling != SS_NULL) {
        if (func_8003A5B8(&lookup->ceiling, colCtx, xpFlags1, xpFlags2, posA, posB, outPos, outPoly, outDistSq, chkDist,
                          bccFlags)) {
            result = true;
        }
    }
    return result;
}

// Get first static poly intersecting sphere `center` `radius` from list `node`
// returns true if any poly intersects the sphere, else returns false
// `outPoly` returns the pointer of the first poly found that intersects
s32 func_8003A95C(SSNode* node, u16 xpFlags, CollisionContext* colCtx, Vec3f* center, f32 radius,
                  CollisionPoly** outPoly) {
    CollisionPoly* polyList;
    Vec3s* vtxList;
    CollisionPoly* curPoly;
    u16 nextId;
    s16 curPolyId;

    polyList = colCtx->colHeader->polyList;
    vtxList = colCtx->colHeader->vtxList;

    while (true) {
        curPolyId = node->polyId;
        curPoly = &polyList[curPolyId];
        if (COLPOLY_VIA_FLAG_TEST(colCtx->colHeader->polyList[curPolyId].flags_vIA, xpFlags)) {
            if (node->next == SS_NULL) {
                break;
            } else {
                node = &colCtx->polyNodes.tbl[node->next];
                continue;
            }
        }

        if (center->y + radius < vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIA)].y &&
            center->y + radius < vtxList[COLPOLY_VTX_INDEX(curPoly->flags_vIB)].y &&
            center->y + radius < vtxList[curPoly->vIC].y) {
            break;
        }
        if (func_8003937C(curPoly, vtxList, center, radius)) {
            *outPoly = curPoly;
            return true;
        }
        if (node->next == SS_NULL) {
            break;
        }
        node = &colCtx->polyNodes.tbl[node->next];
    }
    return false;
}

// Get first static poly intersecting sphere `center` `radius` within `lookup`
// returns true if any poly intersects the sphere, else false
// `outPoly` returns the first poly found that intersects
s32 func_8003AB28(StaticLookup* lookup, u16 xpFlags, CollisionContext* colCtx, Vec3f* center, f32 radius,
                  CollisionPoly** outPoly, u16 bciFlags) {
    if (lookup->floor != SS_NULL && !(bciFlags & BGCHECK_IGNORE_FLOOR) &&
        func_8003A95C(&colCtx->polyNodes.tbl[lookup->floor], xpFlags, colCtx, center, radius, outPoly)) {
        return true;
    }

    if (lookup->wall != SS_NULL && !(bciFlags & BGCHECK_IGNORE_WALL) &&
        func_8003A95C(&colCtx->polyNodes.tbl[lookup->wall], xpFlags, colCtx, center, radius, outPoly)) {
        return true;
    }

    if (lookup->ceiling != SS_NULL && !(bciFlags & BGCHECK_IGNORE_CEILING) &&
        func_8003A95C(&colCtx->polyNodes.tbl[lookup->ceiling], xpFlags, colCtx, center, radius, outPoly)) {
        return true;
    }

    return false;
}

// Get StaticLookup from `pos`
// Does not return NULL
StaticLookup* func_8003AC54(CollisionContext* colCtx, StaticLookup* lookupTbl, Vec3f* pos) {
    Vec3i sector;
    s32 subdivAmountX;

    func_8003ADC8(colCtx, pos, &sector);
    subdivAmountX = colCtx->subdivAmount.x; // fix regalloc
    return (sector.z * subdivAmountX) * colCtx->subdivAmount.y + lookupTbl + sector.x + sector.y * subdivAmountX;
}

// Get StaticLookup from `pos`
// Returns NULL if just outside the mesh bounding box
StaticLookup* func_8003AD00(CollisionContext* colCtx, StaticLookup* lookupTbl, Vec3f* pos) {
    Vec3i sector;
    s32 subdivAmountX;

    if (!func_8003C55C(colCtx, pos)) {
        return NULL;
    }
    func_8003ADC8(colCtx, pos, &sector);
    subdivAmountX = colCtx->subdivAmount.x; // fix regalloc
    return (sector.z * subdivAmountX) * colCtx->subdivAmount.y + lookupTbl + sector.x + sector.y * subdivAmountX;
}

// Get StaticLookup subdivision indices from `pos`
// `sector` returns the subdivision x,y,z indices containing or is nearest to `pos`
void func_8003ADC8(CollisionContext* colCtx, Vec3f* pos, Vec3i* sector) {
    sector->x = (pos->x - colCtx->minBounds.x) * colCtx->subdivSizeInv.x;
    sector->y = (pos->y - colCtx->minBounds.y) * colCtx->subdivSizeInv.y;
    sector->z = (pos->z - colCtx->minBounds.z) * colCtx->subdivSizeInv.z;

    if (sector->x < 0) {
        sector->x = 0;
    } else if (sector->x >= colCtx->subdivAmount.x) {
        sector->x = colCtx->subdivAmount.x - 1;
    }

    if (sector->y < 0) {
        sector->y = 0;
    } else if (sector->y >= colCtx->subdivAmount.y) {
        sector->y = colCtx->subdivAmount.y - 1;
    }

    if (sector->z < 0) {
        sector->z = 0;
    } else if (sector->z >= colCtx->subdivAmount.z) {
        sector->z = colCtx->subdivAmount.z - 1;
    }
}

// Get negative bias subdivision indices
// decrements indices if `pos` is within BGCHECK_SUBDIV_OVERLAP units of the negative subdivision boundary
// `sx`, `sy`, `sz` returns the subdivision x, y, z indices
void func_8003AEA8(CollisionContext* colCtx, Vec3f* pos, s32* sx, s32* sy, s32* sz) {
    f32 dx = pos->x - colCtx->minBounds.x;
    f32 dy = pos->y - colCtx->minBounds.y;
    f32 dz = pos->z - colCtx->minBounds.z;
    *sx = dx * colCtx->subdivSizeInv.x;
    *sy = dy * colCtx->subdivSizeInv.y;
    *sz = dz * colCtx->subdivSizeInv.z;

    if (((s32)dx % (s32)colCtx->subdivLength.x < BGCHECK_SUBDIV_OVERLAP) && (*sx > 0)) {
        *sx -= 1;
    }

    if (((s32)dy % (s32)colCtx->subdivLength.y < BGCHECK_SUBDIV_OVERLAP) && (*sy > 0)) {
        *sy -= 1;
    }

    if (((s32)dz % (s32)colCtx->subdivLength.z < BGCHECK_SUBDIV_OVERLAP) && (*sz > 0)) {
        *sz -= 1;
    }
}

// Get positive bias subdivision indices
// increments indicies if `pos` is within BGCHECK_SUBDIV_OVERLAP units of the postive subdivision boundary
// `sx`, `sy`, `sz` returns the subdivision x, y, z indices
void func_8003B04C(CollisionContext* colCtx, Vec3f* pos, s32* sx, s32* sy, s32* sz) {
    f32 dx = pos->x - colCtx->minBounds.x;
    f32 dy = pos->y - colCtx->minBounds.y;
    f32 dz = pos->z - colCtx->minBounds.z;
    *sx = dx * colCtx->subdivSizeInv.x;
    *sy = dy * colCtx->subdivSizeInv.y;
    *sz = dz * colCtx->subdivSizeInv.z;

    if (((s32)colCtx->subdivLength.x - BGCHECK_SUBDIV_OVERLAP < (s32)dx % (s32)colCtx->subdivLength.x) &&
        (*sx < colCtx->subdivAmount.x - 1)) {
        *sx += 1;
    }

    if (((s32)colCtx->subdivLength.y - BGCHECK_SUBDIV_OVERLAP < (s32)dy % (s32)colCtx->subdivLength.y) &&
        (*sy < colCtx->subdivAmount.y - 1)) {
        *sy += 1;
    }

    if (((s32)colCtx->subdivLength.z - BGCHECK_SUBDIV_OVERLAP < (s32)dz % (s32)colCtx->subdivLength.z) &&
        (*sz < colCtx->subdivAmount.z - 1)) {
        *sz += 1;
    }
}

// Calculate the subdivision index bounding box for CollisionPoly `polyId`
// `subdivMinX`, `subdivMinY`, `subdivMinZ` returns the minimum subdivision x, y, z indices
// `subdivMaxX`, `subdivMaxY`, `subdivMaxZ` returns the maximum subdivision x, y, z indices
void func_8003B218(CollisionContext* colCtx, Vec3s* vtxList, CollisionPoly* polyList, s32* subdivMinX, s32* subdivMinY,
                   s32* subdivMinZ, s32* subdivMaxX, s32* subdivMaxY, s32* subdivMaxZ, s16 polyId) {
    u16* vtxDataTemp;
    Vec3f minVtx;
    Vec3f maxVtx;

    f32 x;
    f32 y;
    f32 z;

    Vec3s* vtx;
    s16 vtxId;

    vtxId = COLPOLY_VTX_INDEX(polyList[polyId].vtxData[0]);

    Math_Vec3s_ToVec3f(&maxVtx, &vtxList[vtxId]);
    Math_Vec3f_Copy(&minVtx, &maxVtx);
    for (vtxDataTemp = polyList[polyId].vtxData + 1; vtxDataTemp < polyList[polyId].vtxData + 3; vtxDataTemp++) {
        vtxId = COLPOLY_VTX_INDEX(*vtxDataTemp);
        vtx = &vtxList[vtxId];
        x = vtx->x;
        y = vtx->y;
        z = vtx->z;

        if (minVtx.x > x) {
            minVtx.x = x;
        } else if (maxVtx.x < x) {
            maxVtx.x = x;
        }

        if (minVtx.y > y) {
            minVtx.y = y;
        } else if (maxVtx.y < y) {
            maxVtx.y = y;
        }

        if (minVtx.z > z) {
            minVtx.z = z;
        } else if (maxVtx.z < z) {
            maxVtx.z = z;
        }
    }
    func_8003AEA8(colCtx, &minVtx, subdivMinX, subdivMinY, subdivMinZ);
    func_8003B04C(colCtx, &maxVtx, subdivMaxX, subdivMaxY, subdivMaxZ);
}

// Test if poly `polyList`[`polyId`] intersects cube `min` `max`
// returns true if the poly intersects the cube, else false
s32 func_8003B3C8(Vec3f* min, Vec3f* max, CollisionPoly* polyList, Vec3s* vtxList, s16 polyId) {
    f32 intersect;
    Vec3f va2;
    Vec3f vb2;
    Vec3f vc2;
    CollisionPoly* poly;
    f32 nx;
    f32 ny;
    f32 nz;
    f32 dist;
    Vec3f va;
    Vec3f vb;
    Vec3f vc;
    s32 flags[3];

    flags[0] = flags[1] = 0;
    poly = &polyList[polyId];

    BgCheck_Vec3sToVec3f(&vtxList[COLPOLY_VTX_INDEX(poly->flags_vIA)], &va);
    flags[0] = Math3D_PointRelativeToCubeFaces(&va, min, max);
    if (flags[0] == 0) {
        return true;
    }
    BgCheck_Vec3sToVec3f(&vtxList[COLPOLY_VTX_INDEX(poly->flags_vIB)], &vb);
    flags[1] = Math3D_PointRelativeToCubeFaces(&vb, min, max);
    if (flags[1] == 0) {
        return true;
    }
    BgCheck_Vec3sToVec3f(&vtxList[poly->vIC], &vc);
    flags[2] = Math3D_PointRelativeToCubeFaces(&vc, min, max);
    if (flags[2] == 0) {
        return true;
    }
    if (flags[0] & flags[1] & flags[2]) {
        return false;
    }

    flags[0] |= Math3D_PointRelativeToCubeEdges(&va, min, max) << 8;
    flags[1] |= Math3D_PointRelativeToCubeEdges(&vb, min, max) << 8;
    flags[2] |= Math3D_PointRelativeToCubeEdges(&vc, min, max) << 8;
    if (flags[0] & flags[1] & flags[2]) {
        return false;
    }

    flags[0] |= Math3D_PointRelativeToCubeVertices(&va, min, max) << 0x18;
    flags[1] |= Math3D_PointRelativeToCubeVertices(&vb, min, max) << 0x18;
    flags[2] |= Math3D_PointRelativeToCubeVertices(&vc, min, max) << 0x18;
    if (flags[0] & flags[1] & flags[2]) {
        return false;
    }

    CollisionPoly_GetNormal(poly, &nx, &ny, &nz);
    dist = poly->dist;
    if (Math3D_TriChkLineSegParaYIntersect(&va, &vb, &vc, nx, ny, nz, dist, min->z, min->x, &intersect, min->y,
                                           max->y) ||
        Math3D_TriChkLineSegParaYIntersect(&va, &vb, &vc, nx, ny, nz, dist, max->z, min->x, &intersect, min->y,
                                           max->y) ||
        Math3D_TriChkLineSegParaYIntersect(&va, &vb, &vc, nx, ny, nz, dist, min->z, max->x, &intersect, min->y,
                                           max->y) ||
        Math3D_TriChkLineSegParaYIntersect(&va, &vb, &vc, nx, ny, nz, dist, max->z, max->x, &intersect, min->y,
                                           max->y)) {
        return true;
    }
    if (Math3D_TriChkLineSegParaZIntersect(&va, &vb, &vc, nx, ny, nz, dist, min->x, min->y, &intersect, min->z,
                                           max->z) ||
        Math3D_TriChkLineSegParaZIntersect(&va, &vb, &vc, nx, ny, nz, dist, min->x, max->y, &intersect, min->z,
                                           max->z) ||
        Math3D_TriChkLineSegParaZIntersect(&va, &vb, &vc, nx, ny, nz, dist, max->x, min->y, &intersect, min->z,
                                           max->z) ||
        Math3D_TriChkLineSegParaZIntersect(&va, &vb, &vc, nx, ny, nz, dist, max->x, max->y, &intersect, min->z,
                                           max->z)) {
        return true;
    }
    if (Math3D_TriChkLineSegParaXIntersect(&va, &vb, &vc, nx, ny, nz, dist, min->y, min->z, &intersect, min->x,
                                           max->x) ||
        Math3D_TriChkLineSegParaXIntersect(&va, &vb, &vc, nx, ny, nz, dist, min->y, max->z, &intersect, min->x,
                                           max->x) ||
        Math3D_TriChkLineSegParaXIntersect(&va, &vb, &vc, nx, ny, nz, dist, max->y, min->z, &intersect, min->x,
                                           max->x) ||
        Math3D_TriChkLineSegParaXIntersect(&va, &vb, &vc, nx, ny, nz, dist, max->y, max->z, &intersect, min->x,
                                           max->x)) {
        return true;
    }
    BgCheck_Vec3sToVec3f(&vtxList[COLPOLY_VTX_INDEX(poly->flags_vIA)], &va2);
    BgCheck_Vec3sToVec3f(&vtxList[COLPOLY_VTX_INDEX(poly->flags_vIB)], &vb2);
    BgCheck_Vec3sToVec3f(&vtxList[poly->vIC], &vc2);
    if (Math3D_LineVsCube(min, max, &va2, &vb2) || Math3D_LineVsCube(min, max, &vb2, &vc2) ||
        Math3D_LineVsCube(min, max, &vc2, &va2)) {
        return true;
    }
    return false;
}

// Initialize StaticLookup Table
// returns size of table, in bytes
u32 func_8003BB18(CollisionContext* colCtx, GlobalContext* globalCtx, StaticLookup* lookupTbl);
#ifdef NON_MATCHING
// regalloc, stack
u32 func_8003BB18(CollisionContext* colCtx, GlobalContext* globalCtx, StaticLookup* lookupTbl) {

    Vec3s* temp_s4;
    CollisionPoly* temp_s5;
    s32 spEC; // total number of polys
    s32 spE8; // current poly
    s32 phi_s1;
    s32 spE0;
    s32 spDC;
    // xyz subdivMin
    s32 sxMinD8;
    s32 syMinD4;
    s32 szMinD0;
    // xyx subdivMax
    s32 sxMaxCC;
    s32 syMaxC8;
    s32 szMaxC4;

    Vec3f spB8; // poly box min xyz
    Vec3f spAC; // poly box max xyz
    StaticLookup* phi_v0;

    StaticLookup* spA4;
    StaticLookup* phi_s0;
    StaticLookup* phi_fp;
    s32 sp98;

    f32 temp_f22;
    f32 temp_f24;
    f32 temp_f26;

    CollisionHeader* colHeader = colCtx->colHeader;

    for (phi_v0 = lookupTbl;
         phi_v0 < (colCtx->subdivAmount.x * colCtx->subdivAmount.y * colCtx->subdivAmount.z + lookupTbl); phi_v0++) {
        phi_v0->floor = SS_NULL;
        phi_v0->wall = SS_NULL;
        phi_v0->ceiling = SS_NULL;
    }
    spEC = colHeader->nbPolygons;
    temp_s4 = colHeader->vtxList;
    temp_s5 = colHeader->polyList;
    sp98 = colCtx->subdivAmount.x * colCtx->subdivAmount.y;
    temp_f22 = colCtx->subdivLength.x + (2 * BGCHECK_SUBDIV_OVERLAP);
    temp_f24 = colCtx->subdivLength.y + (2 * BGCHECK_SUBDIV_OVERLAP);
    temp_f26 = colCtx->subdivLength.z + (2 * BGCHECK_SUBDIV_OVERLAP);

    for (spE8 = 0; spE8 < spEC; spE8++) { // 2DF4 ish to 3068
        func_8003B218(colCtx, temp_s4, temp_s5, &sxMinD8, &syMinD4, &szMinD0, &sxMaxCC, &syMaxC8, &szMaxC4, spE8);

        spA4 = szMinD0 * sp98 + lookupTbl;
        spB8.z = (colCtx->subdivLength.z * szMinD0 + colCtx->minBounds.z) - BGCHECK_SUBDIV_OVERLAP;
        spAC.z = spB8.z + temp_f26;

        for (spDC = szMinD0; spDC < szMaxC4 + 1; spDC++) { // 2EA8

            phi_fp = (colCtx->subdivAmount.x * syMinD4) + spA4;
            spB8.y = (colCtx->subdivLength.y * syMinD4 + colCtx->minBounds.y) - BGCHECK_SUBDIV_OVERLAP;
            spAC.y = spB8.y + temp_f24;

            for (spE0 = syMinD4; spE0 < syMaxC8 + 1; spE0++) { // 2F00

                phi_s0 = sxMinD8 + phi_fp;
                spB8.x = (colCtx->subdivLength.x * sxMinD8 + colCtx->minBounds.x) - BGCHECK_SUBDIV_OVERLAP;
                spAC.x = spB8.x + temp_f22;

                for (phi_s1 = sxMinD8; phi_s1 < sxMaxCC + 1; phi_s1++) // 2F5C
                {
                    if (func_8003B3C8(&spB8, &spAC, temp_s5, temp_s4, spE8)) {
                        func_8003965C(phi_s0, colCtx, temp_s5, temp_s4, spE8);
                    }
                    spB8.x += colCtx->subdivLength.x;
                    spAC.x += colCtx->subdivLength.x;
                    phi_s0++;
                } // 2FC0

                spB8.y += colCtx->subdivLength.y;
                spAC.y += colCtx->subdivLength.y;
                phi_fp += colCtx->subdivAmount.x;
            }
            spB8.z += colCtx->subdivLength.z;
            spAC.z += colCtx->subdivLength.z;
            spA4 += sp98;
        }
    }
    return colCtx->polyNodes.count * sizeof(SSNode);
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_bgcheck/func_8003BB18.s")
#endif

// Is current scene a SPOT scene
s32 func_8003BF18(GlobalContext* globalCtx) {
    static s16 spotScenes[] = {
        SCENE_SPOT00, SCENE_SPOT01, SCENE_SPOT02, SCENE_SPOT03, SCENE_SPOT04, SCENE_SPOT05, SCENE_SPOT06,
        SCENE_SPOT07, SCENE_SPOT08, SCENE_SPOT09, SCENE_SPOT10, SCENE_SPOT11, SCENE_SPOT12, SCENE_SPOT13,
        SCENE_SPOT15, SCENE_SPOT16, SCENE_SPOT17, SCENE_SPOT18, SCENE_SPOT20,
    };
    s16* i;

    for (i = spotScenes; i < spotScenes + ARRAY_COUNT(spotScenes); i++) {
        if (globalCtx->sceneNum == *i) {
            return true;
        }
    }
    return false;
}

struct BgCheckSceneMemEntry {
    s16 sceneId;
    u32 memSize;
};

// Get custom scene memSize
s32 func_8003BF5C(s32 sceneId, u32* memSize) {
    static struct BgCheckSceneMemEntry sceneMemList[] = {
        { SCENE_SPOT00, 0xB798 },     { SCENE_GANON_FINAL, 0x78C8 }, { SCENE_GANON_DEMO, 0x70C8 },
        { SCENE_JYASINBOSS, 0xACC8 }, { SCENE_KENJYANOMA, 0x70C8 },  { SCENE_JYASINZOU, 0x16CC8 },
        { SCENE_HIDAN, 0x198C8 },     { SCENE_GANON_BOSS, 0x84C8 },
    };
    s32 i;
    for (i = 0; i < ARRAY_COUNT(sceneMemList); i++) {
        if (sceneId == sceneMemList[i].sceneId) {
            *memSize = sceneMemList[i].memSize;
            return true;
        }
    }
    return false;
}

// Compute subdivLength for scene mesh lookup, for a single dimension
void func_8003BFF4(f32 min, s32 subdivAmount, f32* max, f32* subdivLength, f32* subdivSizeInv) {
    f32 length = (*max - min);

    *subdivLength = (s32)(length / subdivAmount) + 1;
    *subdivLength = CLAMP_MIN(*subdivLength, BGCHECK_SUBDIV_MIN);
    *subdivSizeInv = 1.0f / *subdivLength;

    *max = *subdivLength * subdivAmount + min;
}

struct BgCheckSceneSubdivisionEntry {
    s16 sceneId;
    Vec3s subdivAmount;
    s32 nodeListMax; // if -1, dynamically compute max nodes
};

// Allocate CollisionContext
void func_8003C078(CollisionContext* colCtx, GlobalContext* globalCtx, CollisionHeader* colHeader) {
    static struct BgCheckSceneSubdivisionEntry sceneSubdivisionList[] = {
        { SCENE_HAKADAN, { 23, 7, 14 }, -1 },
        { SCENE_BMORI1, { 38, 1, 38 }, -1 },
    };
    u32 tblMax;
    u32 memSize;
    u32 lookupTblMemSize;
    SSNodeList* nodeList;
    s32 useCustomSubdivisions;
    u32 customMemSize;
    s32 customNodeListMax;
    s32 i;

    colCtx->colHeader = colHeader;
    customNodeListMax = -1;
    osSyncPrintf("/*---------------- BGCheck バッファーメモリサイズ -------------*/\n");
    // /*---------------- BGCheck Buffer Memory Size -------------*/\n

    if (YREG(15) == 0x10 || YREG(15) == 0x20 || YREG(15) == 0x30 || YREG(15) == 0x40) {
        if (globalCtx->sceneNum == SCENE_MALON_STABLE) {
            osSyncPrintf("/* BGCheck LonLonサイズ %dbyte */\n", 0x3520);
            // /* BGCheck LonLon Size %dbyte */\n
            colCtx->memSize = 0x3520;
        } else {
            osSyncPrintf("/* BGCheck ミニサイズ %dbyte */\n", 0x4E20);
            // /* BGCheck Mini Size %dbyte */\n
            colCtx->memSize = 0x4E20;
        }
        colCtx->dyna.polyNodesMax = 500;
        colCtx->dyna.polyListMax = 256;
        colCtx->dyna.vtxListMax = 256;
        colCtx->subdivAmount.x = 2;
        colCtx->subdivAmount.y = 2;
        colCtx->subdivAmount.z = 2;
    } else if (func_8003BF18(globalCtx) == true) {
        colCtx->memSize = 0xF000U;
        osSyncPrintf("/* BGCheck Spot用サイズ %dbyte */\n", 0xF000);
        // /* BGCheck Spot Size %dbyte */\n
        colCtx->dyna.polyNodesMax = 1000;
        colCtx->dyna.polyListMax = 512;
        colCtx->dyna.vtxListMax = 512;
        colCtx->subdivAmount.x = 16;
        colCtx->subdivAmount.y = 4;
        colCtx->subdivAmount.z = 16;
    } else {
        if (func_8003BF5C(globalCtx->sceneNum, &customMemSize)) {
            colCtx->memSize = customMemSize;
        } else {
            colCtx->memSize = 0x1CC00;
        }
        osSyncPrintf("/* BGCheck ノーマルサイズ %dbyte  */\n", colCtx->memSize);
        // /* BGCheck Normal Size %dbyte  */\n
        colCtx->dyna.polyNodesMax = 1000;
        colCtx->dyna.polyListMax = 512;
        colCtx->dyna.vtxListMax = 512;
        useCustomSubdivisions = false;

        for (i = 0; i < ARRAY_COUNT(sceneSubdivisionList); i++) {
            if (globalCtx->sceneNum == sceneSubdivisionList[i].sceneId) {
                colCtx->subdivAmount.x = sceneSubdivisionList[i].subdivAmount.x;
                colCtx->subdivAmount.y = sceneSubdivisionList[i].subdivAmount.y;
                colCtx->subdivAmount.z = sceneSubdivisionList[i].subdivAmount.z;
                useCustomSubdivisions = true;
                customNodeListMax = sceneSubdivisionList[i].nodeListMax;
            }
        }
        if (useCustomSubdivisions == false) {
            colCtx->subdivAmount.x = 16;
            colCtx->subdivAmount.y = 4;
            colCtx->subdivAmount.z = 16;
        }
    }
    colCtx->lookupTbl = THA_AllocEndAlign(
        &globalCtx->state.tha,
        colCtx->subdivAmount.x * sizeof(StaticLookup) * colCtx->subdivAmount.y * colCtx->subdivAmount.z, ~1);
    if (colCtx->lookupTbl == NULL) {
        LogUtils_HungupThread("../z_bgcheck.c", 4176);
    }
    colCtx->minBounds.x = colCtx->colHeader->minBounds.x;
    colCtx->minBounds.y = colCtx->colHeader->minBounds.y;
    colCtx->minBounds.z = colCtx->colHeader->minBounds.z;
    colCtx->maxBounds.x = colCtx->colHeader->maxBounds.x;
    colCtx->maxBounds.y = colCtx->colHeader->maxBounds.y;
    colCtx->maxBounds.z = colCtx->colHeader->maxBounds.z;
    func_8003BFF4(colCtx->minBounds.x, colCtx->subdivAmount.x, &colCtx->maxBounds.x, &colCtx->subdivLength.x,
                  &colCtx->subdivSizeInv.x);
    func_8003BFF4(colCtx->minBounds.y, colCtx->subdivAmount.y, &colCtx->maxBounds.y, &colCtx->subdivLength.y,
                  &colCtx->subdivSizeInv.y);
    func_8003BFF4(colCtx->minBounds.z, colCtx->subdivAmount.z, &colCtx->maxBounds.z, &colCtx->subdivLength.z,
                  &colCtx->subdivSizeInv.z);
    memSize = colCtx->subdivAmount.x * sizeof(StaticLookup) * colCtx->subdivAmount.y * colCtx->subdivAmount.z +
              colCtx->colHeader->nbPolygons * sizeof(u8) + colCtx->dyna.polyNodesMax * sizeof(SSNode) +
              colCtx->dyna.polyListMax * sizeof(CollisionPoly) + colCtx->dyna.vtxListMax * sizeof(Vec3s) +
              sizeof(CollisionContext);
    if (customNodeListMax > 0) {
        // tblMax is set without checking if customNodeListMax will result in a memory overflow
        // this is a non-issue as long as sceneSubdivisionList.nodeListMax is -1
        tblMax = customNodeListMax;
    } else {
        if (colCtx->memSize < memSize) {
            LogUtils_HungupThread("../z_bgcheck.c", 4230);
        }
        tblMax = (colCtx->memSize - memSize) / sizeof(SSNode);
    }

    func_8003E398(&colCtx->polyNodes);
    func_8003E3AC(globalCtx, &colCtx->polyNodes, tblMax, colCtx->colHeader->nbPolygons);

    lookupTblMemSize = func_8003BB18(colCtx, globalCtx, colCtx->lookupTbl);
    osSyncPrintf(VT_FGCOL(GREEN));
    osSyncPrintf("/*---結局 BG使用サイズ %dbyte---*/\n", memSize + lookupTblMemSize);
    osSyncPrintf(VT_RST);

    func_8003E954(globalCtx, &colCtx->dyna);
    func_8003E9A0(globalCtx, &colCtx->dyna);
}

// Get CollisionHeader
// original name: T_BGCheck_getBGDataInfo
CollisionHeader* func_8003C4C4(CollisionContext* colCtx, s32 bgId) {
    if (bgId == BGCHECK_SCENE) {
        return colCtx->colHeader;
    }
    if (bgId < 0 || bgId > BG_ACTOR_MAX) {
        return NULL;
    }
    if (!(colCtx->dyna.bgActorFlags[bgId] & 1)) {
        osSyncPrintf(VT_COL(YELLOW, BLACK));
        osSyncPrintf("T_BGCheck_getBGDataInfo():そのbg_actor_indexは使われておりません。index=%d\n");
        osSyncPrintf(VT_RST);
        return NULL;
    }
    return colCtx->dyna.bgActors[bgId].colHeader;
}

// Test if pos is near collision boundaries
s32 func_8003C55C(CollisionContext* colCtx, Vec3f* pos) {
    if (pos->x < (colCtx->minBounds.x - BGCHECK_SUBDIV_OVERLAP) ||
        (colCtx->maxBounds.x + BGCHECK_SUBDIV_OVERLAP) < pos->x ||
        pos->y < (colCtx->minBounds.y - BGCHECK_SUBDIV_OVERLAP) ||
        (colCtx->maxBounds.y + BGCHECK_SUBDIV_OVERLAP) < pos->y ||
        pos->z < (colCtx->minBounds.z - BGCHECK_SUBDIV_OVERLAP) ||
        (colCtx->maxBounds.z + BGCHECK_SUBDIV_OVERLAP) < pos->z) {
        return false;
    }
    return true;
}

// Raycast Toward Floor
// returns the yIntersect of the nearest poly found directly below `pos`, or BGCHECK_Y_MIN if no floor detected
// returns the poly found in `outPoly`, and the bgId of the entity in `outBgId`
f32 func_8003C614(GlobalContext* globalCtx, CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly,
                  s32* outBgId, Vec3f* pos, Actor* actor, u32 arg7, f32 chkDist) {

    f32 yIntersectDyna;
    s32* temp_a0;
    StaticLookup* lookupTbl;
    Vec3f checkPos;
    StaticLookup* lookup;
    DynaRaycast dynaRaycast;
    f32 yIntersect;

    *outBgId = BGCHECK_SCENE;
    *outPoly = NULL;
    lookupTbl = colCtx->lookupTbl;
    yIntersect = BGCHECK_Y_MIN;
    checkPos = *pos;

    while (true) {
        if (checkPos.y < colCtx->minBounds.y) {
            break;
        }
        if (BgCheck_PosErrorCheck(&checkPos, "../z_bgcheck.c", 4410)) {
            if (actor != NULL) {
                osSyncPrintf("こいつ,pself_actor->name %d\n", actor->id);
            }
        }
        lookup = func_8003AD00(colCtx, lookupTbl, &checkPos);
        if (lookup == NULL) {
            checkPos.y -= colCtx->subdivLength.y;
            continue;
        }
        yIntersect = func_8003992C(lookup, colCtx, xpFlags, outPoly, pos, arg7, chkDist, BGCHECK_Y_MIN);
        if (yIntersect > BGCHECK_Y_MIN) {
            break;
        }
        checkPos.y -= colCtx->subdivLength.y;
    }

    dynaRaycast.colCtx = colCtx;
    dynaRaycast.xpFlags = xpFlags;
    dynaRaycast.yIntersect = yIntersect;
    dynaRaycast.pos = pos;
    dynaRaycast.actor = actor;
    dynaRaycast.unk_20 = arg7;
    dynaRaycast.chkDist = chkDist;
    dynaRaycast.globalCtx = globalCtx;
    dynaRaycast.resultPoly = outPoly;
    dynaRaycast.bgId = outBgId;

    yIntersectDyna = func_8003FDDC(&dynaRaycast);

    if (yIntersect < yIntersectDyna) {
        yIntersect = yIntersectDyna;
    }

    if (yIntersect != BGCHECK_Y_MIN && func_80041EC8(colCtx, *outPoly, *outBgId)) {
        yIntersect -= 1.0f;
    }
    return yIntersect;
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003C834(CollisionContext* colCtx, CollisionPoly** outPoly, Vec3f* pos) {
    s32 bgId;

    return func_8003C614(NULL, colCtx, COLPOLY_IGNORE_CAMERA, outPoly, &bgId, pos, NULL, 0x1C, 1.0f);
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003C890(CollisionContext* colCtx, CollisionPoly** outPoly, Vec3f* pos) {
    s32 bgId;

    return func_8003C614(NULL, colCtx, COLPOLY_IGNORE_ENTITY, outPoly, &bgId, pos, NULL, 0x1C, 1.0f);
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003C8EC(GlobalContext* globalCtx, CollisionContext* colCtx, CollisionPoly** outPoly, Vec3f* pos) {
    s32 bgId;

    return func_8003C614(globalCtx, colCtx, COLPOLY_IGNORE_ENTITY, outPoly, &bgId, pos, NULL, 0x1C, 1.0f);
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003C940(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Vec3f* pos) {
    return func_8003C614(NULL, colCtx, COLPOLY_IGNORE_ENTITY, outPoly, bgId, pos, NULL, 0x1C, 1.0f);
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003C9A4(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Actor* actor, Vec3f* pos) {
    return func_8003C614(NULL, colCtx, COLPOLY_IGNORE_ENTITY, outPoly, bgId, pos, actor, 0x1C, 1.0f);
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003CA0C(GlobalContext* globalCtx, CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Actor* actor,
                  Vec3f* pos) {
    return func_8003C614(globalCtx, colCtx, COLPOLY_IGNORE_ENTITY, outPoly, bgId, pos, actor, 0x1C, 1.0f);
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003CA64(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Actor* actor, Vec3f* pos, f32 chkDist) {
    return func_8003C614(NULL, colCtx, COLPOLY_IGNORE_ENTITY, outPoly, bgId, pos, actor, 0x1C, chkDist);
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003CAC8(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Actor* actor, Vec3f* pos) {
    return func_8003C614(NULL, colCtx, COLPOLY_IGNORE_ENTITY, outPoly, bgId, pos, actor, 0x06, 1.0f);
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003CB30(CollisionContext* colCtx, CollisionPoly* outPoly, Vec3f* pos) {
    CollisionPoly* tempPoly;
    f32 result;
    s32 bgId;

    result = func_8003C614(NULL, colCtx, COLPOLY_IGNORE_NONE, &tempPoly, &bgId, pos, NULL, 0x1C, 1.0f);
    if (tempPoly != NULL) {
        *outPoly = *tempPoly;
    }
    return result;
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003CBE8(CollisionContext* colCtx, CollisionPoly* outPoly, s32* bgId, Vec3f* pos) {
    CollisionPoly* tempPoly;
    f32 result;

    result = func_8003C614(NULL, colCtx, COLPOLY_IGNORE_NONE, &tempPoly, bgId, pos, NULL, 0x1C, 1.0f);
    if (tempPoly != NULL) {
        *outPoly = *tempPoly;
    }
    return result;
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003CCA4(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Vec3f* pos) {
    return func_8003C614(NULL, colCtx, COLPOLY_IGNORE_CAMERA, outPoly, bgId, pos, NULL, 0x06, 1.0f);
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003CD08(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Actor* actor, Vec3f* pos) {
    return func_8003C614(NULL, colCtx, COLPOLY_IGNORE_ENTITY, outPoly, bgId, pos, actor, 0x02, 1.0f);
}

// Public raycast toward floor
// returns yIntersect of the poly found, or BGCHECK_Y_MIN if no poly detected
f32 func_8003CD70(CollisionContext* colCtx, CollisionPoly** outPoly, s32* bgId, Vec3f* pos) {
    return func_8003C614(NULL, colCtx, COLPOLY_IGNORE_ENTITY, outPoly, bgId, pos, NULL, 0x06, 1.0f);
}

// Tests if moving from `posPrev` to `posNext` will collide with a "wall"
//`radius` is used to form a sphere for collision detection purposes
//`checkHeight` is the positive height above posNext to perform certain checks
// returns true if a collision is detected, else false
//`outPoly` returns the closest poly detected, while `outBgId` returns the poly owner
s32 func_8003CDD4(CollisionContext* colCtx, u16 xpFlags, Vec3f* posResult, Vec3f* posNext, Vec3f* posPrev, f32 radius,
                  CollisionPoly** outPoly, s32* outBgId, Actor* actor, f32 checkHeight, u8 argA) {
    StaticLookup* lookupTbl;
    f32 temp_f0;
    s32 result;
    CollisionPoly* poly;
    f32 dx, dy, dz; // change between posPrev to posNext
    Vec3f sphCenter;
    s32 dynaPolyCollision;
    Vec3f posIntersect;
    s32 bgId;
    f32 temp_f0_2;
    f32 f32temp;
    f32 nx2, nz2;
    Vec3f checkLineNext;
    Vec3f checkLinePrev;
    f32 n2XZDist;
    f32 n3XZDist;
    f32 nx3, nz3;
    s32 bccFlags;
    Vec3f posIntersect2;
    s32 bgId2;
    f32 nx, ny, nz; // unit normal of polygon

    result = false;
    *outBgId = BGCHECK_SCENE;
    *outPoly = NULL;
    lookupTbl = colCtx->lookupTbl;
    *posResult = *posNext;
    dx = posNext->x - posPrev->x;
    dy = posNext->y - posPrev->y;
    dz = posNext->z - posPrev->z;
    if (BgCheck_PosErrorCheck(posNext, "../z_bgcheck.c", 4831) == true ||
        BgCheck_PosErrorCheck(posPrev, "../z_bgcheck.c", 4832) == true) {
        if (actor != NULL) {
            osSyncPrintf("こいつ,pself_actor->name %d\n", actor->id);
        }
    }
    // if there's movement on the xz plane, and argA flag is 0,
    if ((dx != 0.0f || dz != 0.0f) && (argA & 1) == 0) {
        if ((checkHeight + dy) < 5.0f) {
            result = func_8003D7F0(colCtx, xpFlags, COLPOLY_IGNORE_NONE, posPrev, posNext, &posIntersect, &poly, &bgId,
                                   actor, 1.0f, BGCHECK_CHECK_ALL & ~BGCHECK_CHECK_CEILING);
            if (result) {
                ny = COLPOLY_GET_NORMAL(poly->normal.y);
                // if poly is floor, push result underneath the floor
                if (ny > 0.5f) {
                    posResult->x = posIntersect.x;
                    if (checkHeight > 1.0f) {
                        posResult->y = posIntersect.y - 1.0f;
                    } else {
                        posResult->y = posIntersect.y - checkHeight;
                    }
                    posResult->z = posIntersect.z;
                }
                // poly is wall
                else {
                    nx = COLPOLY_GET_NORMAL(poly->normal.x);
                    nz = COLPOLY_GET_NORMAL(poly->normal.z);
                    posResult->x = radius * nx + posIntersect.x;
                    posResult->y = radius * ny + posIntersect.y;
                    posResult->z = radius * nz + posIntersect.z;
                }
                *outPoly = poly;
                *outBgId = bgId;
            }
        } else {
            // if the radius is less than the distance travelled on the xz plane, also test for floor collisions
            bccFlags = SQ(radius) < (SQ(dx) + SQ(dz))
                           ? (BGCHECK_CHECK_ALL & ~BGCHECK_CHECK_CEILING)
                           : (BGCHECK_CHECK_ALL & ~BGCHECK_CHECK_FLOOR & ~BGCHECK_CHECK_CEILING);

            // perform a straight line test to see if a line at posNext.y + checkHeight from posPrev.xz to posNext.xz
            // passes through any wall and possibly floor polys
            checkLineNext = *posNext;
            checkLineNext.y += checkHeight;
            checkLinePrev = *posPrev;
            checkLinePrev.y = checkLineNext.y;
            result = func_8003D7F0(colCtx, xpFlags, COLPOLY_IGNORE_NONE, &checkLinePrev, &checkLineNext, &posIntersect,
                                   &poly, &bgId, actor, 1.0f, bccFlags);

            if (result) {
                nx2 = COLPOLY_GET_NORMAL(poly->normal.x);
                nz2 = COLPOLY_GET_NORMAL(poly->normal.z);
                n2XZDist = sqrtf(SQ(nx2) + SQ(nz2));

                // if poly is not a "flat" floor or "flat" ceiling
                if (!IS_ZERO(n2XZDist)) {
                    // normalize nx,nz and multiply each by the radius to go back to the other side of the wall
                    f32temp = 1.0f / n2XZDist;
                    temp_f0 = radius * f32temp;
                    posResult->x = temp_f0 * nx2 + posIntersect.x;
                    posResult->z = temp_f0 * nz2 + posIntersect.z;
                    *outPoly = poly;
                    *outBgId = bgId;
                    result = true;
                }
            }
        }
    }
    sphCenter = *posResult;
    dynaPolyCollision = false;
    sphCenter.y += checkHeight;
    // test if sphere (sphCenter, radius) collides with a dynamic wall, displacing the x/z coordinates
    if (func_800409A8(colCtx, xpFlags, &posResult->x, &posResult->z, &sphCenter, radius, outPoly, outBgId, actor)) {
        result = true;
        dynaPolyCollision = true;
        sphCenter = *posResult;
        sphCenter.y += checkHeight;
    }
    // test if sphere (sphCenter, radius) collides with a static wall, displacing the x/z coordinates
    if (func_8003C55C(colCtx, posNext) == true &&
        func_80039AEC(func_8003AC54(colCtx, lookupTbl, posResult), colCtx, xpFlags, &posResult->x, &posResult->z,
                      &sphCenter, radius, outPoly)) {
        *outBgId = BGCHECK_SCENE;
        result = true;
    }
    // if a collision with a dyna poly was detected
    if (dynaPolyCollision == true || *outBgId != BGCHECK_SCENE) {
        if (func_8003D7F0(colCtx, xpFlags, COLPOLY_IGNORE_NONE, posPrev, posResult, &posIntersect2, &poly, &bgId2,
                          actor, 1.0f, BGCHECK_CHECK_ONE_FACE | BGCHECK_CHECK_WALL)) {
            nx3 = COLPOLY_GET_NORMAL(poly->normal.x);
            nz3 = COLPOLY_GET_NORMAL(poly->normal.z);
            n3XZDist = sqrtf(SQ(nx3) + SQ(nz3));

            // if poly is not a "flat" floor or "flat" ceiling
            if (!IS_ZERO(n3XZDist)) {
                // normalize nx,nz and multiply each by the radius to go back to the other side of the wall
                f32temp = 1.0f / n3XZDist;
                temp_f0_2 = radius * f32temp;
                posResult->x = temp_f0_2 * nx3 + posIntersect2.x;
                posResult->z = temp_f0_2 * nz3 + posIntersect2.z;
                *outPoly = poly;
                *outBgId = bgId2;
                result = true;
            }
        }
    }
    return result;
}

// Public. Tests if moving from `posPrev` to `posNext` will collide with a "wall"
//`radius` is used to form a sphere for collision detection purposes
//`checkHeight` is the positive height above posNext to perform certain checks
// returns true if a collision is detected, else false
//`outPoly` returns the closest poly detected
s32 func_8003D464(CollisionContext* colCtx, Vec3f* posResult, Vec3f* posNext, Vec3f* posPrev, f32 radius,
                  CollisionPoly** outPoly, f32 checkHeight) {
    s32 bgId;

    return func_8003CDD4(colCtx, COLPOLY_IGNORE_ENTITY, posResult, posNext, posPrev, radius, outPoly, &bgId, NULL,
                         checkHeight, 0);
}

// Public. Tests if moving from `posPrev` to `posNext` will collide with a "wall"
//`radius` is used to form a sphere for collision detection purposes
//`checkHeight` is the positive height above posNext to perform certain checks
// returns true if a collision is detected, else false
//`outPoly` returns the closest poly detected, while `outBgId` returns the poly owner
s32 func_8003D4C8(CollisionContext* colCtx, Vec3f* posResult, Vec3f* posNext, Vec3f* posPrev, f32 radius,
                  CollisionPoly** outPoly, s32* outBgId, f32 checkHeight) {
    return func_8003CDD4(colCtx, COLPOLY_IGNORE_ENTITY, posResult, posNext, posPrev, radius, outPoly, outBgId, NULL,
                         checkHeight, 0);
}

// Public. Tests if moving from `posPrev` to `posNext` will collide with a "wall"
//`radius` is used to form a sphere for collision detection purposes
//`checkHeight` is the positive height above posNext to perform certain checks
//`actor` is the actor performing the check, allowing it to be skipped
// returns true if a collision is detected, else false
//`outPoly` returns the closest poly detected, while `outBgId` returns the poly owner
s32 func_8003D52C(CollisionContext* colCtx, Vec3f* posResult, Vec3f* posNext, Vec3f* posPrev, f32 radius,
                  CollisionPoly** outPoly, s32* outBgId, Actor* actor, f32 checkHeight) {
    return func_8003CDD4(colCtx, COLPOLY_IGNORE_ENTITY, posResult, posNext, posPrev, radius, outPoly, outBgId, actor,
                         checkHeight, 0);
}

// Public. Tests if moving from `posPrev` to `posNext` will collide with a "wall"
// Skips a check that occurs only when moving on the xz plane
//`radius` is used to form a sphere for collision detection purposes
//`checkHeight` is the positive height above posNext to perform certain checks
//`actor` is the actor performing the check, allowing it to be skipped
// returns true if a collision is detected, else false
//`outPoly` returns the closest poly detected, while `outBgId` returns the poly owner
s32 func_8003D594(CollisionContext* colCtx, Vec3f* posResult, Vec3f* posNext, Vec3f* posPrev, f32 radius,
                  CollisionPoly** outPoly, s32* outBgId, Actor* actor, f32 checkHeight) {
    return func_8003CDD4(colCtx, COLPOLY_IGNORE_ENTITY, posResult, posNext, posPrev, radius, outPoly, outBgId, actor,
                         checkHeight, 1);
}

// Tests for collision with a ceiling poly
// `checkHeight` should be a positive value
// returns true if a collision occurs, else false
//`outPoly` returns the poly collided with, while `outBgId` returns the owner of the poly
// `outY` returns the y coordinate of pos needed to not collide with `outPoly`
s32 func_8003D600(CollisionContext* colCtx, u16 xpFlags, f32* outY, Vec3f* pos, f32 checkHeight,
                  CollisionPoly** outPoly, s32* outBgId, Actor* actor) {
    StaticLookup* lookupTbl;
    StaticLookup* lookup;
    s32 result;
    Vec3f posTemp;
    f32 tempY;

    *outBgId = BGCHECK_SCENE;
    *outY = pos->y;
    if (BgCheck_PosErrorCheck(pos, "../z_bgcheck.c", 5206) == true) {
        if (actor != NULL) {
            osSyncPrintf("こいつ,pself_actor->name %d\n", actor->id);
        }
    }
    lookupTbl = colCtx->lookupTbl;
    if (!func_8003C55C(colCtx, pos)) {
        return false;
    }

    lookup = func_8003AC54(colCtx, lookupTbl, pos);
    result = func_8003A3E0(lookup, xpFlags, colCtx, outY, pos, checkHeight, outPoly);

    posTemp = *pos;
    posTemp.y = *outY;
    tempY = *outY;

    if (func_80040E40(colCtx, xpFlags, &tempY, &posTemp, checkHeight, outPoly, outBgId, actor)) {
        *outY = tempY;
        result = true;
    }
    return result;
}

// Tests for collision with any ceiling poly
// `checkHeight` must be a positive value
// returns true if a collision occurs, else false
// `outY` returns the displaced y coordinate needed to not collide with the poly
s32 func_8003D754(CollisionContext* colCtx, f32* outY, Vec3f* pos, f32 checkHeight) {
    CollisionPoly* poly;
    s32 bgId;

    return func_8003D600(colCtx, COLPOLY_IGNORE_NONE, outY, pos, checkHeight, &poly, &bgId, NULL);
}

// Tests for collision with any entity solid ceiling poly
// `checkHeight` must be a positive value
// returns true if a collision occurs, else false
// `outY` returns the displaced y coordinate needed to not collide with the poly
s32 func_8003D7A0(CollisionContext* colCtx, f32* outY, Vec3f* pos, f32 checkHeight, CollisionPoly** outPoly,
                  s32* outBgId, Actor* actor) {
    return func_8003D600(colCtx, COLPOLY_IGNORE_ENTITY, outY, pos, checkHeight, outPoly, outBgId, actor);
}

// Tests if a line from `posA` to `posB` intersects with a poly
// returns true if it does, else false
// `posB`? `posResult` returns the point of intersection
// `outPoly` returns the pointer to the intersected poly, while `outBgId` returns the entity the poly belongs to
s32 func_8003D7F0(CollisionContext* colCtx, u16 xpFlags1, u16 xpFlags2, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                  CollisionPoly** outPoly, s32* outBgId, Actor* actor, f32 chkDist, u32 bccFlags);
#ifdef NON_MATCHING
// regalloc, issues with spCC/spC0 for loop
s32 func_8003D7F0(CollisionContext* colCtx, u16 xpFlags1, u16 xpFlags2, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                  CollisionPoly** outPoly, s32* outBgId, Actor* actor, f32 chkDist, u32 bccFlags) {

    StaticLookup* lookup;
    StaticLookup* iLookup; // spD8 a3
    Vec3i subdivMin;       // spCC
    Vec3i subdivMax;       // spC0

    s32 k; // z s1
    s32 i; // x t0
    // s32 spBC;       // phi_t0
    s32 result;     // spB8
    f32 distSq;     // spB4
    Vec3f posBTemp; // spA8

    Vec3f sectorMin;       // sp9C s3
    Vec3f sectorMax;       // sp90 s4
    s32 j;                 // sp84, y
    StaticLookup* jLookup; // sp80 a1
    s32 temp_lo;           // s32 sp6C;

    s32 swapA; // temp_a1; // swapA
    s32 swapB; // temp_a2; // swapB

    StaticLookup* lookupTbl; // s1
    s32* maxTemp;            // v1;
    s32* minTemp;            // v0;

    lookupTbl = colCtx->lookupTbl;
    posBTemp = *posB;
    *outBgId = BGCHECK_SCENE;
    if (BgCheck_PosErrorCheck(posA, "../z_bgcheck.c", 5334) == true ||
        BgCheck_PosErrorCheck(posB, "../z_bgcheck.c", 5335) == true) {
        if (actor != NULL) {
            osSyncPrintf("こいつ,pself_actor->name %d\n", actor->id);
        } else {
            osSyncPrintf("pself_actor == NULLで犯人不明\n");
        }
    }
    func_80041978(&colCtx->polyNodes, colCtx->colHeader->nbPolygons);
    func_8003ADC8(colCtx, posA, &subdivMin);
    func_8003ADC8(colCtx, &posBTemp, &subdivMax);
    *posResult = *posB;
    result = false;
    distSq = 1.0e38f;
    *outPoly = NULL;

    if (subdivMin.x != subdivMax.x || subdivMin.y != subdivMax.y || subdivMin.z != subdivMax.z) {
        // AB4B0C
        for (maxTemp = &subdivMax, minTemp = &subdivMin; minTemp < (s32*)&subdivMin + 3; minTemp++, maxTemp++) {

            // loop_8:
            swapA = *maxTemp;
            swapB = *minTemp;
            if (swapA < swapB) {
                *maxTemp = swapB;
                *minTemp = swapA;
            }
        }
        // ab4b38

        temp_lo = colCtx->subdivAmount.x * colCtx->subdivAmount.y;
        sectorMin.z = subdivMin.z * colCtx->subdivLength.z + colCtx->minBounds.z; // temp_f4
        sectorMax.z = colCtx->subdivLength.z + sectorMin.z;

        iLookup = subdivMin.z * temp_lo + lookupTbl;

        // ab4bbc //loop_13:
        for (i = subdivMin.z; i < subdivMax.z + 1; i++) {
            jLookup = subdivMin.y * colCtx->subdivAmount.x + iLookup;
            sectorMin.y = subdivMin.y * colCtx->subdivLength.y + colCtx->minBounds.y; // temp_f8
            sectorMax.y = colCtx->subdivLength.y + sectorMin.y;
            // loop_15:
            for (j = subdivMin.y; j < subdivMax.y + 1; j++) {
                sectorMin.x = subdivMin.x * colCtx->subdivLength.x + colCtx->minBounds.x; // temp_f16
                sectorMax.x = colCtx->subdivLength.x + sectorMin.x;
                lookup = subdivMin.x + jLookup;
                // loop_17:

                // ab4c7c
                for (k = subdivMin.x; k < subdivMax.x + 1; k++) {
                    if (Math3D_LineVsCube(&sectorMin, &sectorMax, posA, &posBTemp) == true &&
                        func_8003A7D8(lookup, colCtx, xpFlags1, xpFlags2, posA, &posBTemp, posResult, outPoly, chkDist,
                                      &distSq, bccFlags)) {
                        result = true;
                    }
                    lookup += 1;
                    sectorMin.x += colCtx->subdivLength.x;
                    sectorMax.x += colCtx->subdivLength.x;
                }
                // ab4d28
                jLookup += colCtx->subdivAmount.x;
                sectorMin.y += colCtx->subdivLength.y;
                sectorMax.y += colCtx->subdivLength.y;
            }

            iLookup += temp_lo;
            sectorMin.z += colCtx->subdivLength.z;
            sectorMax.z += colCtx->subdivLength.z;
        }

    }
    // ab4db8
    else {
        if (func_8003C55C(colCtx, posA) == false) {
            return false;
        }
        result = func_8003A7D8(func_8003AC54(colCtx, lookupTbl, posA), colCtx, xpFlags1, xpFlags2, posA, &posBTemp,
                               posResult, outPoly, chkDist, &distSq, bccFlags);
        if (result == true) {
            distSq = Math3D_Vec3fDistSq(posResult, posA);
        }
    }
    // ab4e40
    if ((bccFlags & BGCHECK_CHECK_DYNA) && func_80041240(colCtx, xpFlags1, posA, &posBTemp, posResult, outPoly, &distSq,
                                                         outBgId, actor, chkDist, bccFlags)) {
        result = true;
    }
    return result;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_bgcheck/func_8003D7F0.s")
#endif

// Get bccFlags
u32 func_8003DD28(s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32 chkDyna) {
    u32 result;

    result = 0;
    if (chkWall) {
        result = BGCHECK_CHECK_WALL;
    }
    if (chkFloor) {
        result |= BGCHECK_CHECK_FLOOR;
    }
    if (chkCeil) {
        result |= BGCHECK_CHECK_CEILING;
    }
    if (chkOneFace) {
        result |= BGCHECK_CHECK_ONE_FACE;
    }
    if (chkDyna) {
        result |= BGCHECK_CHECK_DYNA;
    }
    return result;
}

// Public. Tests if a line from `posA` to `posB` intersects with a poly
// returns true if it does, else false
s32 func_8003DD6C(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                  s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32* bgId) {
    return func_8003D7F0(colCtx, COLPOLY_IGNORE_CAMERA, COLPOLY_IGNORE_NONE, posA, posB, posResult, outPoly, bgId, NULL,
                         1.0f, func_8003DD28(chkWall, chkFloor, chkCeil, chkOneFace, true));
}

// Public. Tests if a line from `posA` to `posB` intersects with a poly
// returns true if it does, else false
s32 func_8003DDF8(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                  s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32* bgId) {
    return func_8003D7F0(colCtx, COLPOLY_IGNORE_NONE, 1, posA, posB, posResult, outPoly, bgId, NULL, 1.0f,
                         func_8003DD28(chkWall, chkFloor, chkCeil, chkOneFace, true));
}

// Public. Tests if a line from `posA` to `posB` intersects with a poly
// returns true if it does, else false
s32 func_8003DE84(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                  s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32* bgId) {
    return func_8003D7F0(colCtx, COLPOLY_IGNORE_ENTITY, COLPOLY_IGNORE_NONE, posA, posB, posResult, outPoly, bgId, NULL,
                         1.0f, func_8003DD28(chkWall, chkFloor, chkCeil, chkOneFace, true));
}

// Public. Tests if a line from `posA` to `posB` intersects with a poly
// returns true if it does, else false
s32 func_8003DF10(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                  s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32* bgId, Actor* actor) {
    return func_8003D7F0(colCtx, COLPOLY_IGNORE_ENTITY, COLPOLY_IGNORE_NONE, posA, posB, posResult, outPoly, bgId,
                         actor, 1.0f, func_8003DD28(chkWall, chkFloor, chkCeil, chkOneFace, true));
}

// Public. Tests if a line from `posA` to `posB` intersects with a poly
// returns true if it does, else false
s32 func_8003DFA0(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                  s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32* bgId, Actor* actor, f32 chkDist) {
    return func_8003D7F0(colCtx, COLPOLY_IGNORE_ENTITY, COLPOLY_IGNORE_NONE, posA, posB, posResult, outPoly, bgId,
                         actor, chkDist, func_8003DD28(chkWall, chkFloor, chkCeil, chkOneFace, true));
}

// Public. Tests if a line from `posA` to `posB` intersects with a poly
// returns true if it does, else false
s32 func_8003E02C(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                  s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32* bgId) {
    return func_8003D7F0(colCtx, COLPOLY_IGNORE_PROJECTILES, COLPOLY_IGNORE_NONE, posA, posB, posResult, outPoly, bgId,
                         NULL, 1.0f, func_8003DD28(chkWall, chkFloor, chkCeil, chkOneFace, true));
}

// Public. Tests if a line from `posA` to `posB` intersects with a poly
// returns true if it does, else false
s32 func_8003E0B8(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                  s32 chkOneFace) {
    return func_8003E0FC(colCtx, posA, posB, posResult, outPoly, true, true, true, chkOneFace);
}

// Public. Tests if a line from `posA` to `posB` intersects with a poly
// returns true if it does, else false
s32 func_8003E0FC(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                  s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace) {
    s32 bgId;

    return func_8003D7F0(colCtx, COLPOLY_IGNORE_NONE, COLPOLY_IGNORE_NONE, posA, posB, posResult, outPoly, &bgId, NULL,
                         1.0f, func_8003DD28(chkWall, chkFloor, chkCeil, chkOneFace, true));
}

// Public. Tests if a line from `posA` to `posB` intersects with a poly
// returns true if it does, else false
s32 func_8003E188(CollisionContext* colCtx, Vec3f* posA, Vec3f* posB, Vec3f* posResult, CollisionPoly** outPoly,
                  s32 chkWall, s32 chkFloor, s32 chkCeil, s32 chkOneFace, s32* bgId) {
    return func_8003D7F0(colCtx, COLPOLY_IGNORE_NONE, COLPOLY_IGNORE_NONE, posA, posB, posResult, outPoly, bgId, NULL,
                         1.0f, func_8003DD28(chkWall, chkFloor, chkCeil, chkOneFace, true));
}

// Get first poly intersecting sphere `center` `radius`
// ignores `actor` dyna poly
// returns true if any poly intersects the sphere, else false
// `outPoly` returns the pointer of the first poly found that intersects
// `outBgId` returns the bgId of the entity that owns `outPoly`
s32 func_8003E214(CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, s32* outBgId, Vec3f* center,
                  f32 radius, Actor* actor, u16 bciFlags) {
    StaticLookup* lookup;

    *outBgId = BGCHECK_SCENE;
    if (BgCheck_PosErrorCheck(center, "../z_bgcheck.c", 5852) == true) {
        if (actor != NULL) {
            osSyncPrintf("こいつ,pself_actor->name %d\n", actor->id);
        }
    }
    lookup = func_8003AD00(colCtx, colCtx->lookupTbl, center);
    if (lookup == NULL) {
        return false;
    } else {
        if (func_8003AB28(lookup, xpFlags, colCtx, center, radius, outPoly, bciFlags) ||
            func_80041648(colCtx, xpFlags, outPoly, outBgId, center, radius, actor, bciFlags)) {
            return true;
        }
    }
    return false;
}

// Public get first poly intersecting sphere `center` `radius`
s32 func_8003E30C(CollisionContext* colCtx, Vec3f* center, f32 radius) {
    CollisionPoly* poly;
    s32 bgId;

    return func_8003E214(colCtx, COLPOLY_IGNORE_NONE, &poly, &bgId, center, radius, NULL, BGCHECK_IGNORE_NONE);
}

// Public get first wall poly intersecting sphere `center` `radius`
s32 func_8003E350(CollisionContext* colCtx, Vec3f* center, f32 radius) {
    CollisionPoly* poly;
    s32 bgId;

    return func_8003E214(colCtx, COLPOLY_IGNORE_NONE, &poly, &bgId, center, radius, NULL,
                         BGCHECK_IGNORE_FLOOR | BGCHECK_IGNORE_CEILING);
}

// Init SSNodeList
void func_8003E398(SSNodeList* this) {
    this->max = 0;
    this->count = 0;
    this->tbl = NULL;
    this->polyCheckTbl = NULL;
}

// Allocate SSNodeList
// tblMax is the number of SSNode records to allocate
// numPolys is the number of polygons defined within the CollisionHeader
void func_8003E3AC(GlobalContext* globalCtx, SSNodeList* this, s32 tblMax, s32 numPolys) {
    this->max = tblMax;
    this->count = 0;
    this->tbl = THA_AllocEndAlign(&globalCtx->state.tha, tblMax * sizeof(SSNode), -2);

    if (!(this->tbl != NULL)) {
        __assert("this->short_slist_node_tbl != NULL", "../z_bgcheck.c", 5975);
    }
    this->polyCheckTbl = GameState_Alloc(&globalCtx->state, numPolys, "../z_bgcheck.c", 5979);
    if (!(this->polyCheckTbl != NULL)) {
        __assert("this->polygon_check != NULL", "../z_bgcheck.c", 5981);
    }
}

// Get next SSNodeList SSNode
SSNode* func_8003E458(SSNodeList* this) {
    SSNode* result = &this->tbl[this->count];
    this->count++;

    if (!(this->count < this->max)) {
        __assert("this->short_slist_node_last_index < this->short_slist_node_size", "../z_bgcheck.c", 5998);
    }
    if (!(this->count < this->max)) {
        return NULL;
    }
    return result;
}

// Get next SSNodeList SSNode index
u16 func_8003E4DC(SSNodeList* this) {
    u16 new_index = this->count++;

    if (!(new_index < this->max)) {
        __assert("new_index < this->short_slist_node_size", "../z_bgcheck.c", 6021);
    }
    return new_index;
}

// Initialize ScaleRotPos
void func_8003E530(ScaleRotPos* srp) {
    srp->scale.x = srp->scale.y = srp->scale.z = 1.0f;
    srp->pos.x = srp->pos.y = srp->pos.z = 0.0f;
    srp->rot.x = srp->rot.y = srp->rot.z = 0;
}

// Set ScaleRotPos
void func_8003E568(ScaleRotPos* srp, Vec3f* scale, Vec3s* rot, Vec3f* pos) {
    srp->scale = *scale;
    srp->rot = *rot;
    srp->pos = *pos;
}

// ScaleRotPos equality test
s32 func_8003E5B4(ScaleRotPos* a, ScaleRotPos* b) {
    if (a->scale.x != b->scale.x || a->scale.y != b->scale.y || a->scale.z != b->scale.z || a->rot.x != b->rot.x ||
        a->rot.y != b->rot.y || a->rot.z != b->rot.z || a->pos.x != b->pos.x || a->pos.y != b->pos.y ||
        a->pos.z != b->pos.z) {
        return false;
    }
    return true;
}

// Reset DynaLookup lists
void func_8003E688(DynaLookup* dynaLookup) {
    func_8003871C(&dynaLookup->ceiling);
    func_8003871C(&dynaLookup->wall);
    func_8003871C(&dynaLookup->floor);
}

// Reset DynaLookup
void func_8003E6C4(DynaLookup* dynaLookup) {
    dynaLookup->polyStartIndex = 0;
    func_8003E688(dynaLookup);
}

// Reset vtxStartIndex
void func_8003E6E4(u16* vtxStartIndex) {
    *vtxStartIndex = 0;
}

// Initialize BgActor
void func_8003E6EC(GlobalContext* globalCtx, BgActor* bgActor) {
    bgActor->actor = NULL;
    bgActor->colHeader = NULL;
    func_8003E530(&bgActor->prevTransform);
    func_8003E530(&bgActor->curTransform);
    func_8003E6C4(&bgActor->dynaLookup);
    func_8003E6E4(&bgActor->vtxStartIndex);
    bgActor->boundingSphere.center.x = bgActor->boundingSphere.center.y = bgActor->boundingSphere.center.z = 0;
    bgActor->boundingSphere.radius = 0;
}

// setActor internal
void func_8003E750(BgActor* bgActor, Actor* actor, CollisionHeader* colHeader) {
    bgActor->actor = actor;
    bgActor->colHeader = colHeader;
    bgActor->prevTransform.scale = actor->scale;
    bgActor->prevTransform.rot = actor->shape.rot;
    bgActor->prevTransform.rot.x--;
    bgActor->prevTransform.pos = actor->posRot.pos;
    bgActor->curTransform.scale = actor->scale;
    bgActor->curTransform.rot = actor->shape.rot;
    bgActor->curTransform.pos = actor->posRot.pos;
}

// Test if the BgActor transform changed
s32 func_8003E804(BgActor* bgActor) {
    return func_8003E5B4(&bgActor->prevTransform, &bgActor->curTransform);
}

// NULL polyList
void func_8003E82C(CollisionPoly** polyList) {
    *polyList = NULL;
}

// Allocate dyna.polyList
void func_8003E834(GlobalContext* globalCtx, CollisionPoly** polyList, s32 numPolys) {
    *polyList = THA_AllocEndAlign(&globalCtx->state.tha, numPolys * sizeof(CollisionPoly), -2);
    if (!(*polyList != NULL)) {
        __assert("ptbl->pbuf != NULL", "../z_bgcheck.c", 6247);
    }
}

// NULL vtxList
void func_8003E888(Vec3s** vtxList) {
    *vtxList = NULL;
}

// Allocate dyna.vtxList
void func_8003E890(GlobalContext* globalCtx, Vec3s** vtxList, s32 numVtx) {
    *vtxList = THA_AllocEndAlign(&globalCtx->state.tha, numVtx * sizeof(Vec3s), -2);
    if (!(*vtxList != NULL)) {
        __assert("ptbl->pbuf != NULL", "../z_bgcheck.c", 6277);
    }
}

// Update BgActor's prevTransform
void func_8003E8EC(GlobalContext* globalCtx, BgActor* bgActor) {
    bgActor->prevTransform = bgActor->curTransform;
}

// Is BgActor Id
s32 func_8003E934(s32 bgId) {
    if (bgId < 0 || bgId >= BG_ACTOR_MAX) {
        return false;
    }
    return true;
}

// Init DynaCollisionContext
void func_8003E954(GlobalContext* globalCtx, DynaCollisionContext* dyna) {
    dyna->bitFlag = 1;
    func_8003E82C(&dyna->polyList);
    func_8003E888(&dyna->vtxList);
    func_800387FC(globalCtx, &dyna->polyNodes);
}

// Set DynaCollisionContext
void func_8003E9A0(GlobalContext* globalCtx, DynaCollisionContext* dyna) {
    s32 i;

    for (i = 0; i < BG_ACTOR_MAX; i++) {
        func_8003E6EC(globalCtx, &dyna->bgActors[i]);
        dyna->bgActorFlags[i] = 0;
    }
    func_8003E82C(&dyna->polyList);
    func_8003E834(globalCtx, &dyna->polyList, dyna->polyListMax);

    func_8003E888(&dyna->vtxList);
    func_8003E890(globalCtx, &dyna->vtxList, dyna->vtxListMax);

    func_800387FC(globalCtx, &dyna->polyNodes);
    func_8003880C(globalCtx, &dyna->polyNodes, dyna->polyNodesMax);
}

// Set BgActor
// original name: DynaPolyInfo_setActor
s32 func_8003EA74(GlobalContext* globalCtx, DynaCollisionContext* dyna, Actor* actor, CollisionHeader* colHeader) {
    s32 bgId;
    s32 foundSlot;

    foundSlot = false;
    for (bgId = 0; bgId < BG_ACTOR_MAX; bgId++) {
        if (!(dyna->bgActorFlags[bgId] & 1)) {
            dyna->bgActorFlags[bgId] |= 1;
            foundSlot = true;
            break;
        }
    }

    if (foundSlot == false) {
        osSyncPrintf(VT_FGCOL(RED));
        osSyncPrintf("DynaPolyInfo_setActor():ダイナミックポリゴン 空きインデックスはありません\n");
        osSyncPrintf(VT_RST);
        return BG_ACTOR_MAX;
    }

    func_8003E750(&dyna->bgActors[bgId], actor, colHeader);
    dyna->bitFlag |= 1;

    dyna->bgActorFlags[bgId] &= ~2;
    osSyncPrintf(VT_FGCOL(GREEN));
    osSyncPrintf("DynaPolyInfo_setActor():index %d\n", bgId);
    osSyncPrintf(VT_RST);
    return bgId;
}

// Gets the actor assigned to `bgId`
// possible orginal name: DynaPolyInfo_getActor
Actor* func_8003EB84(CollisionContext* colCtx, s32 bgId) {
    if (!func_8003E934(bgId) || !(colCtx->dyna.bgActorFlags[bgId] & 1) || colCtx->dyna.bgActorFlags[bgId] & 2) {
        return NULL;
    }
    return colCtx->dyna.bgActors[bgId].actor;
}

void func_8003EBF8(GlobalContext* globalCtx, DynaCollisionContext* dyna, s32 bgId) {
    if (func_8003E934(bgId)) {
        dyna->bgActorFlags[bgId] |= 4;
        dyna->bitFlag |= 1;
    }
}

void func_8003EC50(GlobalContext* globalCtx, DynaCollisionContext* dyna, s32 bgId) {
    if (func_8003E934(bgId)) {
        dyna->bgActorFlags[bgId] &= ~4;
        dyna->bitFlag |= 1;
    }
}

void func_8003ECA8(GlobalContext* globalCtx, DynaCollisionContext* dyna, s32 bgId) {
    if (func_8003E934(bgId)) {
        dyna->bgActorFlags[bgId] |= 8;
        dyna->bitFlag |= 1;
    }
}

void func_8003ED00(GlobalContext* globalCtx, DynaCollisionContext* dyna, s32 bgId) {
    if (func_8003E934(bgId)) {
        dyna->bgActorFlags[bgId] &= ~8;
        dyna->bitFlag |= 1;
    }
}

// original name: DynaPolyInfo_delReserve
void func_8003ED58(GlobalContext* globalCtx, DynaCollisionContext* dyna, s32 bgId) {
    DynaPolyActor* actor;

    osSyncPrintf(VT_FGCOL(GREEN));
    osSyncPrintf("DynaPolyInfo_delReserve():index %d\n", bgId);
    osSyncPrintf(VT_RST);
    if (func_8003E934(bgId) == false) {

        if (bgId == -1) {
            osSyncPrintf(VT_FGCOL(GREEN));
            osSyncPrintf(
                "DynaPolyInfo_delReserve():削除されているはずの(?)\nインデックス(== -1)のため,処理を中止します。\n");
            // The index that should have been deleted(? ) was(== -1), processing aborted.
            osSyncPrintf(VT_RST);
            return;
        } else {
            osSyncPrintf(VT_FGCOL(RED));
            osSyncPrintf("DynaPolyInfo_delReserve():"
                         "確保していない／出来なかったインデックスの解放のため、処理を中止します。index == %d\n",
                         bgId);
            // Unable to deallocate index / index unallocated, processing aborted.
            osSyncPrintf(VT_RST);
            return;
        }
    }
    actor = (DynaPolyActor*)func_8003EB84(&globalCtx->colCtx, bgId);
    if (actor != NULL) {

        actor->bgId = BGACTOR_NEG_ONE;
        dyna->bgActors[bgId].actor = NULL;
        dyna->bgActorFlags[bgId] |= 2;
    }
}

void func_8003EE6C(GlobalContext* globalCtx, DynaCollisionContext* dyna) {
    dyna->bitFlag |= 1;
}

// original name: DynaPolyInfo_expandSRT
#ifdef NON_MATCHING
void func_8003EE80(GlobalContext* globalCtx, DynaCollisionContext* dyna, s32 bgId, s32* vtxStartIndex,
                   s32* polyStartIndex) {
    MtxF mtx;    // sp128
    f32 temp_f0; // f0
    f32 numVtxInverse;
    f32 temp_ret;
    f32 newNormMagnitude;
    CollisionPoly* newPoly; // s0
    Vec3f sp108;
    Sphere16* sphere; // s5
    Vec3s* dvtxList;
    Vec3s* point;         // v0
    Vec3f newCenterPoint; // spF0
    f32 newRadiusSq;      // f2 spEC;
    CollisionHeader* pbgdata;
    Vec3f spDC;
    Vec3f spD0;
    Vec3f spC4;
    Vec3f spB8;
    Vec3f newNorm; // spAC
    s32 pi;        // s0
    s32 i;         // s3
    s16 padding;
    s16 spA0;
    s16 sp9E;
    s16 sp9C;
    Vec3f sp90;
    Vec3f sp84;
    Actor* actor;
    s16 sp76;
    s16 sp74;
    s16 sp72;

    //_6880
    pbgdata = dyna->bgActors[bgId].colHeader;
    actor = dyna->bgActors[bgId].actor;
    dyna->bgActors[bgId].dynaLookup.polyStartIndex = (u16)*polyStartIndex;
    dyna->bgActors[bgId].vtxStartIndex = (u16)*vtxStartIndex;
    sp108 = actor->posRot.pos;
    sp108.y += actor->shape.unk_08 * actor->scale.y;

    //_6934 ab60d4
    func_8003E568(&dyna->bgActors[bgId].curTransform, &actor->scale, &actor->shape.rot, &sp108);

    //_6950 ab60f0
    if (dyna->bgActorFlags[bgId] & 4) {
        return;
    }
    //_6970 ab6110
    if (!(dyna->polyListMax >= *polyStartIndex + pbgdata->nbPolygons)) {
        osSyncPrintf(VT_FGCOL(RED));
        osSyncPrintf("DynaPolyInfo_expandSRT():polygon over %dが%dを越えるとダメ\n",
                     *polyStartIndex + pbgdata->nbPolygons, dyna->polyListMax);
    }
    //_69bc ab615c
    if (!(dyna->vtxListMax >= *vtxStartIndex + pbgdata->nbVertices)) {
        osSyncPrintf(VT_FGCOL(RED));
        osSyncPrintf("DynaPolyInfo_expandSRT():vertex over %dが%dを越えるとダメ\n",
                     *vtxStartIndex + pbgdata->nbVertices, dyna->vtxListMax);
    }
    //_69f0
    (dyna->polyListMax >= *polyStartIndex + pbgdata->nbPolygons)
        ? (void)0
        : __assert("pdyna_poly_info->poly_num >= *pstart_poly_index + pbgdata->poly_num", "../z_bgcheck.c", 6687);
    (dyna->vtxListMax >= *vtxStartIndex + pbgdata->nbVertices)
        ? (void)0
        : __assert("pdyna_poly_info->vert_num >= *pstart_vert_index + pbgdata->vtx_num", "../z_bgcheck.c", 6688);

    // _6a74
    if (!((dyna->bitFlag & 1) || func_8003E804(&dyna->bgActors[bgId]) != true)) {

        for (pi = *polyStartIndex; pi < *polyStartIndex + pbgdata->nbPolygons; pi++) {
            CollisionPoly* poly = &dyna->polyList[pi];

            if (poly->normal.y > COLPOLY_SNORMAL(0.5f)) {
                spA0 = pi;
                // _6ADC
                func_80038780(&dyna->polyNodes, &dyna->bgActors[bgId].dynaLookup.floor, &spA0);
            } else if (poly->normal.y < COLPOLY_SNORMAL(-0.8f)) {
                if (!(dyna->bgActorFlags[bgId] & 8)) {
                    sp9E = pi;
                    // _6B20
                    func_80038780(&dyna->polyNodes, &dyna->bgActors[bgId].dynaLookup.ceiling, &sp9E);
                }
            } else {
                sp9C = pi;
                //_6B44
                func_80038780(&dyna->polyNodes, &dyna->bgActors[bgId].dynaLookup.wall, &sp9C);
            }
        }
        //_6B6C
        *polyStartIndex += pbgdata->nbPolygons;
        *vtxStartIndex += pbgdata->nbVertices;
        return;
    }
    //_6BCC
    SkinMatrix_SetScaleRotateYRPTranslate(
        &mtx, dyna->bgActors[bgId].curTransform.scale.x, dyna->bgActors[bgId].curTransform.scale.y,
        dyna->bgActors[bgId].curTransform.scale.z, dyna->bgActors[bgId].curTransform.rot.x,
        dyna->bgActors[bgId].curTransform.rot.y, dyna->bgActors[bgId].curTransform.rot.z,
        dyna->bgActors[bgId].curTransform.pos.x, dyna->bgActors[bgId].curTransform.pos.y,
        dyna->bgActors[bgId].curTransform.pos.z);

    // ab6374
    numVtxInverse = 1.0f / pbgdata->nbVertices;

    newCenterPoint.x = newCenterPoint.y = newCenterPoint.z = 0.0f;
    for (i = 0; i < pbgdata->nbVertices; i++) {
        //_6c34
        Math_Vec3s_ToVec3f(&sp90, &pbgdata->vtxList[i]);
        //_6c44
        SkinMatrix_Vec3fMtxFMultXYZ(&mtx, &sp90, &sp84);
        BgCheck_Vec3fToVec3s(&dyna->vtxList[*vtxStartIndex + i], &sp84);

        if (i == 0) {
            dyna->bgActors[bgId].minY = dyna->bgActors[bgId].maxY = sp84.y;
        } else if (sp84.y < dyna->bgActors[bgId].minY) {
            dyna->bgActors[bgId].minY = sp84.y;
        } else if (dyna->bgActors[bgId].maxY < sp84.y) {
            dyna->bgActors[bgId].maxY = sp84.y;
        }
        newCenterPoint.x += sp84.x;
        newCenterPoint.y += sp84.y;
        newCenterPoint.z += sp84.z;
    }

    sphere = &dyna->bgActors[bgId].boundingSphere;
    newCenterPoint.x *= numVtxInverse;
    newCenterPoint.y *= numVtxInverse;
    newCenterPoint.z *= numVtxInverse;
    sphere->center.x = (s16)newCenterPoint.x;
    sphere->center.y = (s16)newCenterPoint.y;
    sphere->center.z = (s16)newCenterPoint.z;
    newRadiusSq = -100.0f;

    //_6d10
    for (i = 0; i < pbgdata->nbVertices; i++) {

        spDC.x = dyna->vtxList[*vtxStartIndex + i].x;
        spDC.y = dyna->vtxList[*vtxStartIndex + i].y;
        spDC.z = dyna->vtxList[*vtxStartIndex + i].z;
        temp_ret = Math3D_Vec3fDistSq(&spDC, &newCenterPoint);

        if (newRadiusSq < temp_ret) {
            newRadiusSq = temp_ret;
        }
    }

    //_6E68
    sphere->radius = (s16)(sqrtf(newRadiusSq) * 1.1f);

    for (i = 0; i < pbgdata->nbPolygons; i++) {
        newPoly = &dyna->polyList[*polyStartIndex + i];
        *newPoly = pbgdata->polyList[i];

        newPoly->flags_vIA = (newPoly->flags_vIA & 0xE000) | (COLPOLY_VTX_INDEX(newPoly->flags_vIA) + *vtxStartIndex);
        newPoly->flags_vIB = (newPoly->flags_vIB & 0xE000) | (COLPOLY_VTX_INDEX(newPoly->flags_vIB) + *vtxStartIndex);
        newPoly->vIC = (*vtxStartIndex + newPoly->vIC);
        dvtxList = dyna->vtxList;
        spD0.x = dvtxList[COLPOLY_VTX_INDEX(newPoly->flags_vIA)].x;
        spD0.y = dvtxList[COLPOLY_VTX_INDEX(newPoly->flags_vIA)].y;
        spD0.z = dvtxList[COLPOLY_VTX_INDEX(newPoly->flags_vIA)].z;
        spC4.x = dvtxList[COLPOLY_VTX_INDEX(newPoly->flags_vIB)].x;
        spC4.y = dvtxList[COLPOLY_VTX_INDEX(newPoly->flags_vIB)].y;
        spC4.z = dvtxList[COLPOLY_VTX_INDEX(newPoly->flags_vIB)].z;
        spB8.x = dvtxList[newPoly->vIC].x;
        spB8.y = dvtxList[newPoly->vIC].y;
        spB8.z = dvtxList[newPoly->vIC].z;
        Math3D_SurfaceNorm(&spD0, &spC4, &spB8, &newNorm);
        newNormMagnitude = Math3D_Vec3fMagnitude(&newNorm);

        if (!IS_ZERO(newNormMagnitude)) {
            temp_f0 = 1.0f / newNormMagnitude;
            newNorm.x *= temp_f0;
            newNorm.y *= temp_f0;
            newNorm.z *= temp_f0;
            newPoly->normal.x = COLPOLY_SNORMAL(newNorm.x);
            newPoly->normal.y = COLPOLY_SNORMAL(newNorm.y);
            newPoly->normal.z = COLPOLY_SNORMAL(newNorm.z);
        }

        point = &dyna->vtxList[COLPOLY_VTX_INDEX(newPoly->flags_vIA)]; // needs to be dvtxList

        //_7190
        newPoly->dist = (s16) - (newNorm.x * point->x + newNorm.y * point->y + point->z * newNorm.z);
        if (newNorm.y > 0.5f) {
            sp76 = *polyStartIndex + i;
            //_7214
            func_80038780(&dyna->polyNodes, &dyna->bgActors[bgId].dynaLookup.floor, &sp76);
        } else if (newNorm.y < -0.8f) {
            sp74 = *polyStartIndex + i;
            //_7254
            func_80038780(&dyna->polyNodes, &dyna->bgActors[bgId].dynaLookup.ceiling, &sp74);
        } else {
            sp72 = *polyStartIndex + i;
            //_7274
            func_80038780(&dyna->polyNodes, &dyna->bgActors[bgId].dynaLookup.wall, &sp72);
        }
    }
    *polyStartIndex = *polyStartIndex + pbgdata->nbPolygons;
    *vtxStartIndex = *vtxStartIndex + pbgdata->nbVertices;
}
#else
void func_8003EE80(GlobalContext* globalCtx, DynaCollisionContext* dyna, s32 bgId, s32* vtxStartIndex,
                   s32* polyStartIndex);
#pragma GLOBAL_ASM("asm/non_matchings/code/z_bgcheck/func_8003EE80.s")
#endif

void func_8003F8EC(GlobalContext* globalCtx, DynaCollisionContext* dyna, Actor* actor) {
    Actor* dynaActor;
    s32 i;

    for (i = 0; i < BG_ACTOR_MAX; i++) {
        if ((dyna->bgActorFlags[i] & 1)) {
            dynaActor = func_8003EB84(&globalCtx->colCtx, i);
            if (dynaActor != NULL && dynaActor == actor) {
                func_800434A0(actor);
                return;
            }
        }
    }
}

// DynaPolyInfo_setup
void func_8003F984(GlobalContext* globalCtx, DynaCollisionContext* dyna) {
    DynaPolyActor* actor;
    s32 vtxStartIndex;
    s32 polyStartIndex;
    s32 i;

    func_80038870(&dyna->polyNodes);

    for (i = 0; i < BG_ACTOR_MAX; i++) {
        func_8003E688(&dyna->bgActors[i].dynaLookup);
    }

    for (i = 0; i < BG_ACTOR_MAX; i++) {
        if (dyna->bgActorFlags[i] & 2) {
            // Initialize BgActor
            osSyncPrintf(VT_FGCOL(GREEN));
            osSyncPrintf("DynaPolyInfo_setup():削除 index=%d\n", i);
            osSyncPrintf(VT_RST);

            dyna->bgActorFlags[i] = 0;
            func_8003E6EC(globalCtx, &dyna->bgActors[i]);
            dyna->bitFlag |= 1;
        }
        if (dyna->bgActors[i].actor != NULL && dyna->bgActors[i].actor->update == NULL) {
            // Delete BgActor
            osSyncPrintf(VT_FGCOL(GREEN));
            osSyncPrintf("DynaPolyInfo_setup():削除 index=%d\n", i);
            osSyncPrintf(VT_RST);
            actor = (DynaPolyActor*)func_8003EB84(&globalCtx->colCtx, i);
            if (actor == NULL) {
                return;
            }
            actor->bgId = BGACTOR_NEG_ONE;
            dyna->bgActorFlags[i] = 0;

            func_8003E6EC(globalCtx, &dyna->bgActors[i]);
            dyna->bitFlag |= 1;
        }
    }
    vtxStartIndex = 0;
    polyStartIndex = 0;
    for (i = 0; i < BG_ACTOR_MAX; i++) {
        if (dyna->bgActorFlags[i] & 1) {
            func_8003EE80(globalCtx, dyna, i, &vtxStartIndex, &polyStartIndex);
        }
    }
    dyna->bitFlag &= ~1;
}

// Update all BgActor's previous ScaleRotPos
void func_8003FB64(GlobalContext* globalCtx, DynaCollisionContext* dyna) {
    s32 i;

    for (i = 0; i < BG_ACTOR_MAX; i++) {
        if (dyna->bgActorFlags[i] & 1) {
            func_8003E8EC(globalCtx, &dyna->bgActors[i]);
        }
    }
}

#define DYNA_RAYCAST_FLOORS 1
#define DYNA_RAYCAST_WALLS 2
#define DYNA_RAYCAST_CEILINGS 4

// Perform dyna poly raycast toward floor on a list of floor, wall, or ceiling polys
// `listType` specifies the poly list type (e.g. DYNA_RAYCAST_FLOORS)
f32 func_8003FBF4(DynaRaycast* dynaRaycast, u32 listType) {
    CollisionPoly* polyList;
    SSNode* curNode;
    f32 result;
    f32 yIntersect;
    s16 id;
    u16 next;

    result = dynaRaycast->yIntersect;
    next = *dynaRaycast->nodeId;
    if (next == SS_NULL) {
        return result;
    }
    polyList = dynaRaycast->dyna->polyList;
    curNode = &dynaRaycast->dyna->polyNodes.tbl[next];

    while (true) {
        id = curNode->polyId;
        if (COLPOLY_VIA_FLAG_TEST(polyList[id].flags_vIA, dynaRaycast->xpFlags)) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dynaRaycast->dyna->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        if ((listType & (DYNA_RAYCAST_WALLS | DYNA_RAYCAST_CEILINGS)) && (dynaRaycast->unk_20 & 0x10) &&
            COLPOLY_GET_NORMAL(polyList[id].normal.y) < 0.0f) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dynaRaycast->dyna->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        if (func_80038D48(&polyList[id], dynaRaycast->dyna->vtxList, dynaRaycast->pos->x, dynaRaycast->pos->z,
                          &yIntersect, dynaRaycast->chkDist) == true &&
            yIntersect < dynaRaycast->pos->y && result < yIntersect) {
            result = yIntersect;
            *dynaRaycast->resultPoly = &dynaRaycast->dyna->polyList[id];
        }
        if (curNode->next == SS_NULL) {
            break;
        } else {
            curNode = &dynaRaycast->dyna->polyNodes.tbl[curNode->next];
            continue;
        }
    }
    return result;
}

// Perform dyna poly raycast toward floor
// returns the yIntersect of the poly found, or BGCHECK_Y_MIN if no poly is found
#ifdef NON_MATCHING
// codegen. type access issues at ab71f4
f32 func_8003FDDC(DynaRaycast* dynaRaycast) {

    CollisionPoly* poly; // s3
    Actor* v0_test;
    // ScaleRotPos* temp_v0_2;
    CollisionPoly* polyList;
    s32 i;      // phi_s2;
    f32 result; // f20
    CollisionPoly* polyMin;
    s32 i2;
    Vec3f polyVtx[3]; // spE0[3];
    Vec3f polyNorm;   // spD4;
    Vec3f* phi_s1;
    f32 polyDist;   // a7
    MtxF srpMtx;    // to spCC
    f32 intersect2; // f0
    Vec3s* vtxList; // sp84;
    f32 magnitude;  // temp_f12;
    Vec3f vtx;      // sp74;
    f32 intersect;  // sp70;
    u16 dynaLookupStart;
    BgActor* bgActor;

    result = BGCHECK_Y_MIN;
    *dynaRaycast->bgId = BGCHECK_SCENE;

    for (i = 0; i < BG_ACTOR_MAX; i++) {
        if (!(dynaRaycast->colCtx->dyna.bgActorFlags[i] & 1)) {
            continue;
        }

        if (dynaRaycast->actor == dynaRaycast->colCtx->dyna.bgActors[i].actor ||
            dynaRaycast->pos->y < dynaRaycast->colCtx->dyna.bgActors[i].minY ||
            Math3D_XZInSphere(&dynaRaycast->colCtx->dyna.bgActors[i].boundingSphere, dynaRaycast->pos->x,
                              dynaRaycast->pos->z) == false) {
            continue;
        }

        dynaRaycast->dyna = &dynaRaycast->colCtx->dyna;
        if (dynaRaycast->unk_20 & BGCHECK_IGNORE_FLOOR) {
            dynaRaycast->nodeId = &dynaRaycast->colCtx->dyna.bgActors[i].dynaLookup.floor;
            intersect2 = func_8003FBF4(dynaRaycast, DYNA_RAYCAST_FLOORS);

            if (dynaRaycast->yIntersect < intersect2) {

                dynaRaycast->yIntersect = intersect2;
                *dynaRaycast->bgId = i;
                result = intersect2;
            }
        }
        if ((dynaRaycast->unk_20 & BGCHECK_IGNORE_WALL) ||
            (*dynaRaycast->resultPoly == NULL && (dynaRaycast->unk_20 & 8))) {
            dynaRaycast->nodeId = &dynaRaycast->colCtx->dyna.bgActors[i].dynaLookup.wall;
            intersect2 = func_8003FBF4(dynaRaycast, DYNA_RAYCAST_WALLS);
            if (dynaRaycast->yIntersect < intersect2) {

                dynaRaycast->yIntersect = intersect2;
                *dynaRaycast->bgId = i;
                result = intersect2;
            }
        }

        if (dynaRaycast->unk_20 & BGCHECK_IGNORE_CEILING) {
            dynaRaycast->nodeId = &dynaRaycast->colCtx->dyna.bgActors[i].dynaLookup.ceiling;
            intersect2 = func_8003FBF4(dynaRaycast, DYNA_RAYCAST_CEILINGS);
            if (dynaRaycast->yIntersect < intersect2) {

                dynaRaycast->yIntersect = intersect2;
                *dynaRaycast->bgId = i;
                result = intersect2;
            }
        }
    }
    // 7154 loop_1 end;

    v0_test = func_8003EB84(dynaRaycast->colCtx, *dynaRaycast->bgId);
    if (!(result == BGCHECK_Y_MIN)) {
        if (v0_test != NULL) {
            if (dynaRaycast->globalCtx != NULL) {
                s32 v0_pause = dynaRaycast->globalCtx->pauseCtx.state != 0;
                if (v0_pause == 0) {
                    v0_pause = dynaRaycast->globalCtx->pauseCtx.flag != 0;
                }
                if (!v0_pause) {
                    // 71b8

                    if (dynaRaycast->colCtx->dyna.bgActorFlags[*dynaRaycast->bgId] & 2) {
                        // ab71f4
                        bgActor = &dynaRaycast->dyna->bgActors[*dynaRaycast->bgId];
                        dynaLookupStart = bgActor->dynaLookup.polyStartIndex;
                        polyList = bgActor->colHeader->polyList;
                        polyMin = &dynaRaycast->dyna->polyList[dynaLookupStart];
                        poly = *dynaRaycast->resultPoly - polyMin + polyList;
                        // temp_v0_2 = ;
                        SkinMatrix_SetScaleRotateYRPTranslate(
                            &srpMtx, bgActor->curTransform.scale.x, bgActor->curTransform.scale.y,
                            bgActor->curTransform.scale.z, bgActor->curTransform.rot.x, bgActor->curTransform.rot.y,
                            bgActor->curTransform.rot.z, bgActor->curTransform.pos.x, bgActor->curTransform.pos.y,
                            bgActor->curTransform.pos.z);

                        vtxList = dynaRaycast->dyna->bgActors[*dynaRaycast->bgId].colHeader->vtxList;

                        for (i2 = 0; i2 < 3; i2++) { //~ 72a8
                            Math_Vec3s_ToVec3f(&vtx, &vtxList[COLPOLY_VTX_INDEX(poly->vtxData[i2])]);
                            SkinMatrix_Vec3fMtxFMultXYZ(&srpMtx, &vtx, &polyVtx[i2]);
                        }
                        Math3D_SurfaceNorm(&polyVtx[0], &polyVtx[1], &polyVtx[2], &polyNorm);
                        magnitude = Math3D_Vec3fMagnitude(&polyNorm);
                        // ab7330
                        if (!IS_ZERO(magnitude)) {
                            // ab7378
                            polyNorm.x *= 1.0f / magnitude;
                            polyNorm.y *= 1.0f / magnitude;
                            polyNorm.z *= 1.0f / magnitude;
                            polyDist =
                                -(polyNorm.x * polyVtx[0].x + polyNorm.y * polyVtx[0].y + polyNorm.z * polyVtx[0].z);
                            if (Math3D_TriChkPointParaYIntersectInsideTri(
                                    &polyVtx[0], &polyVtx[1], &polyVtx[2], polyNorm.x, polyNorm.y, polyNorm.z, polyDist,
                                    dynaRaycast->pos->z, dynaRaycast->pos->x, &intersect, dynaRaycast->chkDist)) {

                                if (fabsf(intersect - result) < 1.0f) {

                                    result = intersect;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_bgcheck/func_8003FDDC.s")
#endif

// Performs collision detection on a BgActor's wall polys on sphere `pos`, `radius`
// returns true if a collision was detected
// `outX` `outZ` return the displaced x,z coordinates
// `outPoly` returns the pointer to the nearest poly collided with, or NULL
// `outBgId` returns `bgId` if the poly SurfaceType's wall damage flag is not set, else ?
s32 func_80040284(CollisionContext* colCtx, u16 xpFlags, DynaCollisionContext* dyna, u16* nodeId, f32* outX, f32* outZ,
                  CollisionPoly** outPoly, s32* outBgId, Vec3f* pos, f32 radius, s32 bgId);
#ifdef NON_MATCHING
// regalloc
s32 func_80040284(CollisionContext* colCtx, u16 xpFlags, DynaCollisionContext* dyna, u16* nodeId, f32* outX, f32* outZ,
                  CollisionPoly** outPoly, s32* outBgId, Vec3f* pos, f32 radius, s32 bgId) {
    s32 padding;
    f32 intersect;      // spD0
    s32 result = false; // spCC
    CollisionPoly* poly;
    SSNode* curNode; // curNode s1
    f32 nx;          //  spC0
    f32 ny;          // spBC
    f32 nz;          // spB8
    Vec3f resultPos; // spAC;
    s16 polyId;
    f32 zTemp;          // f0
    f32 xTemp;          // f0
    f32 normalXZ;       // f20
    f32 invNormalXZ;    // sp70 //f16
    f32 planeDist;      // f24
    f32 temp_f18;       // sp90
    f32 zIntersectDist; // f2
    f32 xIntersectDist; // f2
    f32 zMin;           // f2
    f32 zMax;           // f12
    f32 xMin;           // f2
    f32 xMax;           // f12

    if (*nodeId == SS_NULL) {
        return result;
    }
    resultPos = *pos;
    curNode = &dyna->polyNodes.tbl[*nodeId];

    while (true) {
        polyId = curNode->polyId;
        poly = &dyna->polyList[polyId];
        CollisionPoly_GetNormal(poly, &nx, &ny, &nz);
        normalXZ = sqrtf(SQ(nx) + SQ(nz));
        (!IS_ZERO(normalXZ)) ? (void)0 : __assert("!IS_ZERO(ac_size)", "../z_bgcheck.c", 7382);

        planeDist = Math3D_DistPlaneToPos(nx, ny, nz, poly->dist, &resultPos);
        if (radius < fabsf(planeDist) || COLPOLY_VIA_FLAG_TEST(poly->flags_vIA, xpFlags)) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dyna->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        invNormalXZ = 1.0f / normalXZ;
        temp_f18 = fabsf(nz) * invNormalXZ;
        if (temp_f18 < 0.4f) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dyna->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        // ab75e8

        // compute poly zMin/zMax
        zMax = zMin = dyna->vtxList[COLPOLY_VTX_INDEX(poly->flags_vIA)].z; // 7610
        zTemp = dyna->vtxList[COLPOLY_VTX_INDEX(poly->flags_vIB)].z;

        if (zTemp < zMin) { // 7630
            zMin = zTemp;
        } else if (zMax < zTemp) {
            zMax = zTemp;
        }
        zTemp = dyna->vtxList[poly->vIC].z;
        if (zTemp < zMin) {
            zMin = zTemp;
        } else if (zMax < zTemp) { // 76A0
            zMax = zTemp;
        }

        zMin -= radius;
        zMax += radius;
        if (resultPos.z < zMin || zMax < resultPos.z) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dyna->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        if (func_80039000(poly, dyna->vtxList, resultPos.x, pos->y, &intersect)) {
            zIntersectDist = intersect - resultPos.z;
            if (fabsf(zIntersectDist) <= radius / temp_f18) {
                if (zIntersectDist * nz <= 4.0f) {
                    // ab779c
                    if (func_80039A3C(colCtx, poly, &resultPos.x, &resultPos.z, nx, ny, nz, invNormalXZ, planeDist,
                                      radius, outPoly)) {
                        *outBgId = bgId;
                    }
                    result = true;
                }
            }
        }
        // ab77b4
        if (curNode->next == SS_NULL) {
            break;
        }
        curNode = &dyna->polyNodes.tbl[curNode->next];
    }

    // ab77d0
    curNode = &dyna->polyNodes.tbl[*nodeId];
    while (true) {
        poly = &dyna->polyList[curNode->polyId];
        CollisionPoly_GetNormal(poly, &nx, &ny, &nz);
        normalXZ = sqrtf(SQ(nx) + SQ(nz));
        (!IS_ZERO(normalXZ)) ? (void)0 : __assert("!IS_ZERO(ac_size)", "../z_bgcheck.c", 7489);

        planeDist = Math3D_DistPlaneToPos(nx, ny, nz, poly->dist, &resultPos);
        if (radius < fabsf(planeDist) || COLPOLY_VIA_FLAG_TEST(poly->flags_vIA, xpFlags)) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dyna->polyNodes.tbl[curNode->next];
                continue;
            }
        }

        invNormalXZ = 1.0f / normalXZ;
        temp_f18 = fabsf(nx) * invNormalXZ;
        if (temp_f18 < 0.4f) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dyna->polyNodes.tbl[curNode->next];
                continue;
            }
        }

        // compute poly xMin/xMax
        xMin = xMax = dyna->vtxList[COLPOLY_VTX_INDEX(poly->flags_vIA)].x;
        xTemp = dyna->vtxList[COLPOLY_VTX_INDEX(poly->flags_vIB)].x;

        if (xTemp < xMin) {
            xMin = xTemp;
        } else if (xMax < xTemp) {
            xMax = xTemp;
        }
        xTemp = dyna->vtxList[poly->vIC].x;
        if (xTemp < xMin) {
            xMin = xTemp;
        } else if (xMax < xTemp) {
            xMax = xTemp;
        }

        xMin -= radius;
        xMax += radius;
        if (resultPos.x < xMin || xMax < resultPos.x) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dyna->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        // 7a2c
        if (func_80038F60(poly, dyna->vtxList, pos->y, resultPos.z, &intersect)) {
            xIntersectDist = intersect - resultPos.x;
            if (fabsf(xIntersectDist) <= radius / temp_f18) {
                if (xIntersectDist * nx <= 4.0f) {
                    // ab7ac8
                    if (func_80039A3C(colCtx, poly, &resultPos.x, &resultPos.z, nx, ny, nz, invNormalXZ, planeDist,
                                      radius, outPoly)) {
                        *outBgId = bgId;
                    }
                    result = true;
                }
            }
        }
        if (curNode->next == SS_NULL) {
            break;
        }
        curNode = &dyna->polyNodes.tbl[curNode->next];
    }
    *outX = resultPos.x;
    *outZ = resultPos.z;
    return result;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_bgcheck/func_80040284.s")
#endif

// Performs collision detection on all dyna poly walls using sphere `pos`, `radius`
// returns true if a collision was detected
// `outX` `outZ` return the displaced x,z coordinates
// `outPoly` returns the pointer to the nearest poly collided with, or NULL
// `outBgId` returns the index of the BgActor that owns `outPoly`
// If `actor` is not NULL, an BgActor bound to that actor will be ignored
s32 func_800409A8(CollisionContext* colCtx, u16 xpFlags, f32* outX, f32* outZ, Vec3f* pos, f32 radius,
                  CollisionPoly** outPoly, s32* outBgId, Actor* actor);
#ifdef NON_MATCHING
// Codegen Issues
s32 func_800409A8(CollisionContext* colCtx, u16 xpFlags, f32* outX, f32* outZ, Vec3f* pos, f32 radius,
                  CollisionPoly** outPoly, s32* outBgId, Actor* actor) {
    Vec3f resultPos; // sp94
    s32 result;      // sp90;
    f32 r;           // f0
    f32 dz;          // f12
    f32 dx;          // f2
    // s16 temp_s2;
    BgActor* bgActor; // s0
    // Sphere16* temp_s1;
    s32 i; // s4
    BgActor* list;

    result = false;
    resultPos = *pos;
    list = colCtx->dyna.bgActors;

    for (i = 0; i < BG_ACTOR_MAX; i++) {
        if (!(colCtx->dyna.bgActorFlags[i] & 1)) {
            continue;
        }
        if (actor == list[i].actor) {
            continue;
        }
        bgActor = &colCtx->dyna.bgActors[i];

        if (resultPos.y < bgActor->minY || bgActor->maxY < resultPos.y) {
            continue;
        }

        bgActor->boundingSphere.radius += (s16)radius;

        r = bgActor->boundingSphere.radius;
        dx = bgActor->boundingSphere.center.x - resultPos.x;
        dz = bgActor->boundingSphere.center.z - resultPos.z;
        if (SQ(r) < (SQ(dx) + SQ(dz)) || !(Math3D_XYInSphere(&bgActor->boundingSphere, resultPos.x, resultPos.y) ||
                                           Math3D_YZInSphere(&bgActor->boundingSphere, resultPos.y, resultPos.z))) {
            bgActor->boundingSphere.radius -= (s16)radius;
            continue;
        }
        bgActor->boundingSphere.radius -= (s16)radius;
        if (func_80040284(colCtx, xpFlags, &colCtx->dyna, &colCtx->dyna.bgActors[i].dynaLookup.wall, outX, outZ,
                          outPoly, outBgId, &resultPos, radius, i)) {
            resultPos.x = *outX;
            resultPos.z = *outZ;
            result = true;
        }
    }
    return result;
}
#else
#pragma GLOBAL_ASM("asm/non_matchings/code/z_bgcheck/func_800409A8.s")
#endif

// Tests for collision with a dyna poly ceiling
// returns true if a collision occurs, else false
//`outPoly` returns the poly collided with
//`outY` returns the y coordinate needed to not collide with `outPoly`
s32 func_80040BE4(CollisionContext* colCtx, u16 xpFlags, DynaCollisionContext* dyna, u16* nodeId, f32* outY, Vec3f* pos,
                  f32 checkHeight, CollisionPoly** outPoly) {
    s16 polyId;
    SSNode* curNode;
    CollisionPoly* poly;
    Vec3f testPos;
    f32 ceilingY;
    f32 sign;
    f32 nx;
    f32 ny;
    f32 nz;
    s32 result;
    f32 intersectDist;
    u16 next;

    result = false;
    next = *nodeId;
    if (next == SS_NULL) {
        return false;
    }
    curNode = &dyna->polyNodes.tbl[next];
    testPos = *pos;

    while (true) {
        polyId = curNode->polyId;
        poly = &dyna->polyList[polyId];
        if (COLPOLY_VIA_FLAG_TEST(poly->flags_vIA, xpFlags)) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dyna->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        CollisionPoly_GetNormal(poly, &nx, &ny, &nz);
        if (checkHeight < Math3D_UDistPlaneToPos(nx, ny, nz, poly->dist, &testPos)) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dyna->polyNodes.tbl[curNode->next];
                continue;
            }
        }
        if (func_80038F20(poly, dyna->vtxList, testPos.x, testPos.z, &ceilingY)) {
            intersectDist = ceilingY - testPos.y;
            if (testPos.y < ceilingY && intersectDist < checkHeight && intersectDist * ny <= 0.0f) {
                sign = (0.0f <= ny) ? 1.0f : -1.0f;
                testPos.y = (sign * checkHeight) + ceilingY;
                result = true;
                *outPoly = poly;
            }
        }
        if (curNode->next == SS_NULL) {
            break;
        } else {
            curNode = &dyna->polyNodes.tbl[curNode->next];
            continue;
        }
    }
    *outY = testPos.y;
    return result;
}

// Tests collision with a dyna poly ceiling
// returns true if a collision occurs, else false
//`outPoly` returns the poly collided with, while `outBgId` returns the id of the BgActor that owns the poly
//`outY` returns the y coordinate needed to not collide with `outPoly`, or `pos`.y + `chkDist` if no collision occurs
s32 func_80040E40(CollisionContext* colCtx, u16 xpFlags, f32* outY, Vec3f* pos, f32 chkDist, CollisionPoly** outPoly,
                  s32* outBgId, Actor* actor) {
    s32 i = 0;
    s32 result = false;
    f32 resultY;
    f32 tempY;
    BgActor* bgActor;
    CollisionPoly* poly;

    tempY = chkDist + pos->y;
    resultY = tempY;

    for (i = 0; i < BG_ACTOR_MAX; i++) {
        if (!(colCtx->dyna.bgActorFlags[i] & 1)) {
            continue;
        }
        if (actor == colCtx->dyna.bgActors[i].actor) {
            continue;
        }
        if (!Math3D_XZInSphere(&colCtx->dyna.bgActors[i].boundingSphere, pos->x, pos->z)) {
            continue;
        }
        if (func_80040BE4(colCtx, xpFlags, &colCtx->dyna, &colCtx->dyna.bgActors[i].dynaLookup.ceiling, &tempY, pos,
                          chkDist, &poly) == true &&
            tempY < resultY) {

            resultY = tempY;
            *outPoly = poly;
            *outBgId = i;
            result = true;
        }
    }
    *outY = resultY;
    return result;
}

// Tests if DynaLineTest intersects with a poly
// returns true if a poly was intersected, else false
s32 func_80040FA4(DynaLineTest* dynaLineTest) {
    f32 distSq;
    u16 nodeId;
    CollisionPoly* curPoly;
    SSNode* curNode;
    Vec3f polyIntersect;
    s16 polyId;
    s32 result;

    nodeId = *dynaLineTest->nodeId;
    if (nodeId == SS_NULL) {
        return false;
    }

    curNode = &dynaLineTest->dyna->polyNodes.tbl[nodeId];
    result = false;

    while (true) {
        polyId = curNode->polyId;
        curPoly = &dynaLineTest->dyna->polyList[polyId];
        if (COLPOLY_VIA_FLAG_TEST(curPoly->flags_vIA, dynaLineTest->xpFlags)) {
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dynaLineTest->dyna->polyNodes.tbl[curNode->next];
            }
        } else {
            if (func_800390A0(curPoly, dynaLineTest->dyna->vtxList, dynaLineTest->posA, dynaLineTest->posB,
                              &polyIntersect, dynaLineTest->chkOneFace, dynaLineTest->chkDist)) {
                distSq = Math3D_Vec3fDistSq(dynaLineTest->posA, &polyIntersect);
                if (distSq < *dynaLineTest->distSq) {
                    *dynaLineTest->distSq = distSq;
                    *dynaLineTest->posResult = polyIntersect;
                    *dynaLineTest->posB = polyIntersect;
                    *dynaLineTest->resultPoly = curPoly;
                    result = true;
                }
            }
            if (curNode->next == SS_NULL) {
                break;
            } else {
                curNode = &dynaLineTest->dyna->polyNodes.tbl[curNode->next];
            }
        }
    }
    return result;
}

// Tests if line `posA` `posB` intersects with a dyna poly within BgActor `bgId`
// `distSq` is the maximum squared distance to check for a collision
// returns true if an intersection occurred, else false
// `posB`? and `posResult` return the point of intersection
// `outPoly` returns the poly intersected
// `distSq` returns the squared distance of the intersection
s32 func_80041128(CollisionContext* colCtx, u16 xpFlags, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                  CollisionPoly** outPoly, f32* distSq, s32 bgId, f32 chkDist, s32 bccFlags) {
    s32 result = false;
    DynaLineTest dynaLineTest;

    dynaLineTest.colCtx = colCtx;
    dynaLineTest.xpFlags = xpFlags;
    dynaLineTest.dyna = &colCtx->dyna;
    dynaLineTest.posA = posA;
    dynaLineTest.posB = posB;
    dynaLineTest.posResult = posResult;
    dynaLineTest.resultPoly = outPoly;
    dynaLineTest.chkOneFace = (bccFlags & BGCHECK_CHECK_ONE_FACE) != 0;
    dynaLineTest.distSq = distSq;
    dynaLineTest.chkDist = chkDist;

    dynaLineTest.nodeId = &colCtx->dyna.bgActors[bgId].dynaLookup.wall;
    if (bccFlags & BGCHECK_CHECK_WALL) {
        if (func_80040FA4(&dynaLineTest)) {
            result = true;
        }
    }
    dynaLineTest.nodeId = &colCtx->dyna.bgActors[bgId].dynaLookup.floor;
    if (bccFlags & BGCHECK_CHECK_FLOOR) {
        if (func_80040FA4(&dynaLineTest)) {
            result = true;
        }
    }
    dynaLineTest.nodeId = &colCtx->dyna.bgActors[bgId].dynaLookup.ceiling;
    if (bccFlags & BGCHECK_CHECK_CEILING) {
        if (func_80040FA4(&dynaLineTest)) {
            result = true;
        }
    }
    return result;
}

// Tests if line from `posA` to `posB` passes through a dyna poly.
// returns true if so, otherwise false
// `outPoly` returns the pointer of the poly intersected.
// `outBgId` returns the BgActor index of the poly
s32 func_80041240(CollisionContext* colCtx, u16 xpFlags, Vec3f* posA, Vec3f* posB, Vec3f* posResult,
                  CollisionPoly** outPoly, f32* distSq, s32* outBgId, Actor* actor, f32 chkDist, s32 bccFlags) {
    s32 pad;
    s32 i;
    s32 result = false;
    Linef line;
    f32 ay, by;

    for (i = 0; i < BG_ACTOR_MAX; i++) {
        if (colCtx->dyna.bgActorFlags[i] & 1) {
            if (actor != colCtx->dyna.bgActors[i].actor) {
                ay = posA->y;
                by = posB->y;
                if (!(ay < colCtx->dyna.bgActors[i].minY) || !(by < colCtx->dyna.bgActors[i].minY)) {
                    if (!(colCtx->dyna.bgActors[i].maxY < ay) || !(colCtx->dyna.bgActors[i].maxY < by)) {
                        line.a = *posA;
                        line.b = *posB;
                        if (Math3D_LineVsSph(&colCtx->dyna.bgActors[i].boundingSphere, &line) != 0) {
                            if (func_80041128(colCtx, xpFlags, posA, posB, posResult, outPoly, distSq, i, chkDist,
                                              bccFlags) == true) {
                                *outBgId = i;
                                result = true;
                            }
                        }
                    }
                }
            }
        }
    }
    return result;
}

// Get first dyna poly intersecting sphere `center` `radius` from list `nodeId`
// returns true if any poly intersects the sphere, else returns false
//`outPoly` returns the pointer of the first poly found that intersects
s32 func_800413F8(CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, Vec3f* center, f32 radius,
                  u16* nodeId) {
    u16 nextId;
    CollisionPoly* curPoly;
    DynaCollisionContext* dyna;
    SSNode* node;
    s32 curPolyId;

    nextId = *nodeId;
    if (nextId == SS_NULL) {
        return false;
    }
    dyna = &colCtx->dyna;
    node = &dyna->polyNodes.tbl[nextId];
    while (true) {
        curPolyId = node->polyId;
        curPoly = &dyna->polyList[curPolyId];
        if (COLPOLY_VIA_FLAG_TEST(curPoly->flags_vIA, xpFlags)) {
            if (node->next == SS_NULL) {
                break;
            } else {
                node = &dyna->polyNodes.tbl[node->next];
                continue;
            }
        }
        if (func_8003937C(curPoly, dyna->vtxList, center, radius)) {
            *outPoly = curPoly;
            return true;
        }
        if (node->next == SS_NULL) {
            break;
        } else {
            node = &dyna->polyNodes.tbl[node->next];
            continue;
        }
    }
    return false;
}

// Get first dyna poly intersecting sphere `center` `radius` from BgActor `bgId`
// returns true if any poly intersects the sphere, else false
//`outPoly` returns the pointer of the first poly found that intersects
s32 func_80041510(CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, Vec3f* center, f32 radius, s32 bgId,
                  u16 bciFlags) {
    if ((bciFlags & BGCHECK_IGNORE_CEILING) == 0) {
        if (func_800413F8(colCtx, xpFlags, outPoly, center, radius, &colCtx->dyna.bgActors[bgId].dynaLookup.ceiling)) {
            return true;
        }
    }
    if ((bciFlags & BGCHECK_IGNORE_WALL) == 0) {
        if (func_800413F8(colCtx, xpFlags, outPoly, center, radius, &colCtx->dyna.bgActors[bgId].dynaLookup.wall)) {
            return true;
        }
    }
    if ((bciFlags & BGCHECK_IGNORE_FLOOR) == 0) {
        if (func_800413F8(colCtx, xpFlags, outPoly, center, radius, &colCtx->dyna.bgActors[bgId].dynaLookup.floor)) {
            return true;
        }
    }
    return false;
}

// Gets first dyna poly intersecting sphere `center` `radius`
// returns true if poly detected, else false
// `outPoly` returns the first intersecting poly, while `outBgId` returns the BgActor index of that poly
s32 func_80041648(CollisionContext* colCtx, u16 xpFlags, CollisionPoly** outPoly, s32* outBgId, Vec3f* center,
                  f32 radius, Actor* actor, u16 bciFlags) {
    s32 i = 0;
    Sphere16 testSphere;

    for (i = 0; i < BG_ACTOR_MAX; i++) {
        if (!(colCtx->dyna.bgActorFlags[i] & 1)) {
            continue;
        }
        if (colCtx->dyna.bgActors[i].actor == actor) {
            continue;
        }
        testSphere.center.x = center->x;
        testSphere.center.y = center->y;
        testSphere.center.z = center->z;
        testSphere.radius = radius;
        if (!Math3D_SphVsSph(&testSphere, &colCtx->dyna.bgActors[i].boundingSphere)) {
            continue;
        }
        if (func_80041510(colCtx, xpFlags, outPoly, center, radius, i, bciFlags)) {
            return true;
        }
    }
    return false;
}

// SEGMENT_TO_VIRTUAL CollisionHeader members
void func_800417A0(CollisionHeader* colHeader) {
    colHeader->vtxList = SEGMENTED_TO_VIRTUAL(colHeader->vtxList);
    colHeader->polyList = SEGMENTED_TO_VIRTUAL(colHeader->polyList);
    colHeader->polygonTypes = SEGMENTED_TO_VIRTUAL(colHeader->polygonTypes);
    colHeader->cameraDataList = SEGMENTED_TO_VIRTUAL(colHeader->cameraDataList);
    colHeader->waterBoxes = SEGMENTED_TO_VIRTUAL(colHeader->waterBoxes);
}

// Convert CollisionHeader Segmented to Virtual addressing
void func_80041880(void* colHeader, CollisionHeader** dest) {
    *dest = SEGMENTED_TO_VIRTUAL(colHeader);
    func_800417A0(*dest);
}

// SEGMENT_TO_VIRTUAL all active BgActor CollisionHeaders
void func_800418D0(CollisionContext* colCtx, GlobalContext* globalCtx) {
    DynaCollisionContext* dyna;
    s32 i;
    u16 flag;

    dyna = &colCtx->dyna;
    for (i = 0; i < BG_ACTOR_MAX; i++) {
        flag = dyna->bgActorFlags[i];
        if ((flag & 1) && !(flag & 2)) {
            Actor_SetObjectDependency(globalCtx, dyna->bgActors[i].actor);
            func_800417A0(dyna->bgActors[i].colHeader);
        }
    }
}

// Reset SSNodeList polyCheckTbl
void func_80041978(SSNodeList* nodeList, s32 numPolys) {
    u8* t;

    for (t = nodeList->polyCheckTbl; t < nodeList->polyCheckTbl + numPolys; t++) {
        *t = 0;
    }
}

// Get SurfaceType property set
u32 func_800419B0(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId, s32 surfacePropId) {
    CollisionHeader* colHeader;
    SurfaceType* surfaceTypes;

    colHeader = func_8003C4C4(colCtx, bgId);
    if (colHeader == NULL || poly == NULL) {
        return 0;
    }
    surfaceTypes = colHeader->polygonTypes;
    if (surfaceTypes == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return 0;
    }
    return surfaceTypes[poly->type].data[surfacePropId];
}

// SurfaceType return CamData Index
u32 func_80041A28(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {

    return func_800419B0(colCtx, poly, bgId, 0) & 0xFF;
}

// CamData return cameraSType
u16 func_80041A4C(CollisionContext* colCtx, u32 camId, s32 bgId) {
    u16 result;
    CollisionHeader* colHeader;
    CamData* camData;

    colHeader = func_8003C4C4(colCtx, bgId);
    if (colHeader == NULL) {
        return 0;
    }
    camData = colHeader->cameraDataList;
    result = camData[camId].cameraSType;
    return result;
}

// SurfaceType return cameraSType
u16 func_80041A94(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    CollisionHeader* colHeader;
    CamData* camData;
    SurfaceType* surfaceTypes;

    colHeader = func_8003C4C4(colCtx, bgId);
    if (colHeader == NULL) {
        return 0;
    }
    camData = colHeader->cameraDataList;
    if (camData == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return 0;
    }
    surfaceTypes = colHeader->polygonTypes;
    if (surfaceTypes == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return 0;
    }
    return func_80041A4C(colCtx, func_80041A28(colCtx, poly, bgId), bgId);
}

// CamData Get number of cameras
u16 func_80041B24(CollisionContext* colCtx, u32 camId, s32 bgId) {
    CollisionHeader* colHeader;
    CamData* camData;

    colHeader = func_8003C4C4(colCtx, bgId);
    if (colHeader == NULL) {
        return 0;
    }

    camData = colHeader->cameraDataList;
    if (camData == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return 0;
    }
    return camData[camId].numCameras;
}

// SurfaceType Get number of cameras
u16 func_80041B80(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    CollisionHeader* colHeader;
    CamData* camData;
    SurfaceType* surfaceTypes;

    colHeader = func_8003C4C4(colCtx, bgId);
    if (colHeader == NULL) {
        return 0;
    }
    camData = colHeader->cameraDataList;
    if (camData == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return 0;
    }
    surfaceTypes = colHeader->polygonTypes;
    if (surfaceTypes == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return 0;
    }
    return func_80041B24(colCtx, func_80041A28(colCtx, poly, bgId), bgId);
}

// CamData Get camPosData
Vec3s* func_80041C10(CollisionContext* colCtx, s32 camId, s32 bgId) {
    CollisionHeader* colHeader;
    CamData* cameraDataList;

    colHeader = func_8003C4C4(colCtx, bgId);
    if (colHeader == NULL) {
        return NULL;
    }
    cameraDataList = colHeader->cameraDataList;
    if (cameraDataList == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return NULL;
    }
    return (Vec3s*)SEGMENTED_TO_VIRTUAL(cameraDataList[camId].camPosData);
}

// SurfaceType Get camPosData
Vec3s* func_80041C98(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    CollisionHeader* colHeader;
    CamData* camData;
    SurfaceType* surfaceTypes;

    colHeader = func_8003C4C4(colCtx, bgId);
    if (colHeader == NULL) {
        return NULL;
    }
    camData = colHeader->cameraDataList;
    if (camData == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return NULL;
    }
    surfaceTypes = colHeader->polygonTypes;
    if (surfaceTypes == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return NULL;
    }
    return func_80041C10(colCtx, func_80041A28(colCtx, poly, bgId), bgId);
}

// SurfaceType Get Scene Exit Index
u32 func_80041D28(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 0) >> 8 & 0x1F;
}

// SurfaceType Get ? Property (& 0x0003 E000)
u32 func_80041D4C(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 0) >> 13 & 0x1F;
}

// SurfaceType Get ? Property (& 0x001C 0000)
u32 func_80041D70(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 0) >> 18 & 7;
}

// SurfaceType Get Wall Property (Internal)
u32 func_80041D94(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 0) >> 21 & 0x1F;
}

// SurfaceType Get Wall Flags
s32 func_80041DB8(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return D_80119D90[func_80041D94(colCtx, poly, bgId)];
}

// SurfaceType Is Wall Flag (1 << 0) Set
s32 func_80041DE4(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return (func_80041DB8(colCtx, poly, bgId) & 1) ? true : false;
}

// SurfaceType Is Wall Flag (1 << 1) Set
s32 func_80041E18(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return (func_80041DB8(colCtx, poly, bgId) & 2) ? true : false;
}

// SurfaceType Is Wall Flag (1 << 2) Set
s32 func_80041E4C(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return (func_80041DB8(colCtx, poly, bgId) & 4) ? true : false;
}

// unused
u32 func_80041E80(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 0) >> 26 & 0xF;
}

// SurfaceType Get Floor Property
u32 func_80041EA4(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 0) >> 26 & 0xF;
}

// SurfaceType Is Floor Minus 1
u32 func_80041EC8(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 0) >> 30 & 1;
}

// SurfaceType Is Horse Blocked
u32 func_80041EEC(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 0) >> 31 & 1;
}

u32 func_80041F10(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 1) & 0xF;
}

// Get Poly Sfx
u16 func_80041F34(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    s32 temp_v0;

    temp_v0 = func_80041F10(colCtx, poly, bgId);
    if (temp_v0 < 0 || temp_v0 > 13) {
        return NA_SE_PL_WALK_GROUND & 0x1FF;
    }
    return D_80119E10[temp_v0];
}

// SurfaceType get terrain slope surface
u32 func_80041F7C(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 1) >> 4 & 3;
}

// SurfaceType get surface lighting setting
u32 func_80041FA0(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) { //MF: return type s32
    return func_800419B0(colCtx, poly, bgId, 1) >> 6 & 0x1F;
}

// SurfaceType get echo?
u32 func_80041FC4(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 1) >> 11 & 0x3F;
}

// SurfaceType Is Hookshot Surface
u32 func_80041FE8(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 1) >> 17 & 1;
}

// CollisionPoly is ignored by entities
// Returns true if poly is ignored by entities, else false
s32 func_8004200C(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    u32 flags;
    if (func_8003C4C4(colCtx, bgId) == NULL) {
        return true;
    }
    flags = poly->flags_vIA & 0x4000;
    return !!flags;
}

// CollisionPoly is ignored by projectiles
// Returns true if poly is ignored by projectiles, else false
s32 func_80042048(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    u32 flags;
    if (func_8003C4C4(colCtx, bgId) == NULL) {
        return true;
    }
    flags = poly->flags_vIA & 0x8000;
    return !!flags;
}

// CollisionPoly is conveyor enabled
// Returns true if `poly` is a conveyor surface, else false
s32 func_80042084(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    u32 flags;
    if (func_8003C4C4(colCtx, bgId) == NULL) {
        return true;
    }
    flags = poly->flags_vIB & 0x2000;
    return !!flags;
}

// SurfaceType Get Conveyor Surface Speed
u32 func_800420C0(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 1) >> 18 & 7;
}

// SurfaceType Get Conveyor Direction
// returns a value between 0-63, representing 360 / 64 degrees of rotation
u32 func_800420E4(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return func_800419B0(colCtx, poly, bgId, 1) >> 21 & 0x3F;
}

// SurfaceType is Wall Damage
u32 func_80042108(CollisionContext* colCtx, CollisionPoly* poly, s32 bgId) {
    return (func_800419B0(colCtx, poly, bgId, 1) & 0x8000000) ? 1 : 0;
}

// Zora's Domain WaterBox in King Zora's Room
WaterBox zdWaterBox = { -348, 877, -1746, 553, 780, 0x2104 };

// WaterBox's effective bounding box
f32 zdWaterBoxMinX = -348.0f;
f32 zdWaterBoxMinY = 777.0f;
f32 zdWaterBoxMinZ = -1746.0f;
f32 zdWaterBoxMaxX = 205.0f;
f32 zdWaterBoxMaxY = 977.0f;
f32 zdWaterBoxMaxZ = -967.0f;

// Public. Get the water surface at point (`x`, `ySurface`, `z`). `ySurface` doubles as position y input
// returns true if point is within the xz boundaries of an active water box, else false
// `ySurface` returns the water box's surface, while `outWaterBox` returns a pointer to the WaterBox
s32 func_8004213C(GlobalContext* globalCtx, CollisionContext* colCtx, f32 x, f32 z, f32* ySurface,
                  WaterBox** outWaterBox) {
    if (globalCtx->sceneNum == SCENE_SPOT07) {
        if (zdWaterBoxMinX < x && x < zdWaterBoxMaxX && zdWaterBoxMinY < *ySurface && *ySurface < zdWaterBoxMaxY &&
            zdWaterBoxMinZ < z && z < zdWaterBoxMaxZ) {
            *outWaterBox = &zdWaterBox;
            *ySurface = zdWaterBox.ySurface;
            return true;
        }
    }
    return func_80042244(globalCtx, colCtx, x, z, ySurface, outWaterBox);
}

// Internal. Get the water surface at point (`x`, `ySurface`, `z`). `ySurface` doubles as position y input
// returns true if point is within the xz boundaries of an active water box, else false
// `ySurface` returns the water box's surface, while `outWaterBox` returns a pointer to the WaterBox
s32 func_80042244(GlobalContext* globalCtx, CollisionContext* colCtx, f32 x, f32 z, f32* ySurface,
                  WaterBox** outWaterBox) {
    CollisionHeader* colHeader;
    u32 room;
    WaterBox* curWaterBox;

    colHeader = colCtx->colHeader;
    if (colHeader->nbWaterBoxes == 0 || colHeader->waterBoxes == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return false;
    }

    for (curWaterBox = colHeader->waterBoxes; curWaterBox < colHeader->waterBoxes + colHeader->nbWaterBoxes;
         curWaterBox++) {
        room = (curWaterBox->properties >> 13) & 0x3F;
        if (room == globalCtx->roomCtx.curRoom.num || room == 0x3F) {
            if ((curWaterBox->properties & 0x80000) == 0) {
                if (curWaterBox->xMin < x && x < curWaterBox->xMin + curWaterBox->xLength) {
                    if (curWaterBox->zMin < z && z < curWaterBox->zMin + curWaterBox->zLength) {
                        *outWaterBox = curWaterBox;
                        *ySurface = curWaterBox->ySurface;
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

// Gets the first active WaterBox at `pos` where WaterBox.properties & 0x80000 == 0
// `surfaceChkDist` is the absolute y distance from the water surface to check
// returns the index of the waterbox found, or -1 if no waterbox is found
// `outWaterBox` returns the pointer to the waterbox found, or NULL if none is found
s32 func_8004239C(GlobalContext* globalCtx, CollisionContext* colCtx, Vec3f* pos, f32 surfaceChkDist,
                  WaterBox** outWaterBox) {
    CollisionHeader* colHeader;
    s32 room;
    s32 i;
    WaterBox* waterBox;
    WaterBox* waterBoxList; // unused, needed for matching

    colHeader = colCtx->colHeader;
    waterBoxList = colHeader->waterBoxes;
    if (colHeader->nbWaterBoxes == 0 || colHeader->waterBoxes == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        *outWaterBox = NULL;
        return -1;
    }

    for (i = 0; i < colHeader->nbWaterBoxes; i++) {
        waterBox = &colHeader->waterBoxes[i];

        room = WATERBOX_ROOM(waterBox->properties);
        if (!(room == globalCtx->roomCtx.curRoom.num || room == 0x3F)) {
            continue;
        }
        if ((waterBox->properties & 0x80000)) {
            continue;
        }
        if (!(waterBox->xMin < pos->x && pos->x < waterBox->xMin + waterBox->xLength)) {
            continue;
        }
        if (!(waterBox->zMin < pos->z && pos->z < waterBox->zMin + waterBox->zLength)) {
            continue;
        }
        if (pos->y - surfaceChkDist < waterBox->ySurface && waterBox->ySurface < pos->y + surfaceChkDist) {
            *outWaterBox = waterBox;
            return i;
        }
    }

    *outWaterBox = NULL;
    return -1;
}

// WaterBox get CamData index
u32 func_80042538(CollisionContext* colCtx, WaterBox* waterBox) {
    u32 prop = waterBox->properties >> 0;
    return prop & 0xFF;
}

// WaterBox get CamData cameraSType
u16 func_80042548(CollisionContext* colCtx, WaterBox* waterBox) {
    s32 camId;
    CamData* camData;

    camId = func_80042538(colCtx, waterBox);

    camData = colCtx->colHeader->cameraDataList;
    if (camData == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return 0;
    }

    return colCtx->colHeader->cameraDataList[camId].cameraSType;
}

// WaterBox get lighting settings
u32 func_8004259C(CollisionContext* colCtx, WaterBox* waterBox) {
    u32 prop = waterBox->properties >> 8;
    return prop & 0x1F;
}

// Get the water surface at point (`x`, `ySurface`, `z`). `ySurface` doubles as position y input
// same as func_80042244, but tests if WaterBox properties & 0x80000 != 0
// returns true if point is within the xz boundaries of an active water box, else false
// `ySurface` returns the water box's surface, while `outWaterBox` returns a pointer to the WaterBox
s32 func_800425B0(GlobalContext* globalCtx, CollisionContext* colCtx, f32 x, f32 z, f32* ySurface,
                  WaterBox** outWaterBox) {
    CollisionHeader* colHeader;
    u32 room;
    WaterBox* curWaterBox;

    colHeader = colCtx->colHeader;
    if (colHeader->nbWaterBoxes == 0 || colHeader->waterBoxes == PHYSICAL_TO_VIRTUAL(gSegments[0])) {
        return false;
    }

    for (curWaterBox = colHeader->waterBoxes; curWaterBox < colHeader->waterBoxes + colHeader->nbWaterBoxes;
         curWaterBox++) {
        room = (curWaterBox->properties >> 0xD) & 0x3F;
        if ((room == globalCtx->roomCtx.curRoom.num) || (room == 0x3F)) {
            if ((curWaterBox->properties & 0x80000) != 0) {
                if (curWaterBox->xMin < x && x < (curWaterBox->xMin + curWaterBox->xLength)) {
                    if (curWaterBox->zMin < z && z < (curWaterBox->zMin + curWaterBox->zLength)) {
                        *outWaterBox = curWaterBox;
                        *ySurface = curWaterBox->ySurface;
                        return true;
                    }
                }
            }
        }
    }
    return false;
}

// Gets the `closestPoint` to `point` on the line formed from the intesection of planes `polyA` and `polyB`
// returns true if the `closestPoint` exists, else returns false
s32 func_80042708(CollisionPoly* polyA, CollisionPoly* polyB, Vec3f* point, Vec3f* closestPoint) {
    f32 n1X;
    f32 n1Y;
    f32 n1Z;
    f32 n2X;
    f32 n2Y;
    f32 n2Z;

    CollisionPoly_GetNormal(polyA, &n1X, &n1Y, &n1Z);
    CollisionPoly_GetNormal(polyB, &n2X, &n2Y, &n2Z);
    return Math3D_PlaneVsPlaneVsLineClosestPoint(n1X, n1Y, n1Z, polyA->dist, n2X, n2Y, n2Z, polyB->dist, point,
                                                 closestPoint);
}

// Get the `closestPoint` to line (`pointA`, `pointB`) formed from the intersection of planes `polyA` and `polyB`
// returns true if the `closestPoint` exists, else returns false
s32 func_800427B4(CollisionPoly* polyA, CollisionPoly* polyB, Vec3f* pointA, Vec3f* pointB, Vec3f* closestPoint) {
    f32 n1X;
    f32 n1Y;
    f32 n1Z;
    f32 n2X;
    f32 n2Y;
    f32 n2Z;
    s32 result;

    CollisionPoly_GetNormal(polyA, &n1X, &n1Y, &n1Z);
    CollisionPoly_GetNormal(polyB, &n2X, &n2Y, &n2Z);
    result = Math3D_PlaneVsLineSegClosestPoint(n1X, n1Y, n1Z, polyA->dist, n2X, n2Y, n2Z, polyB->dist, pointA, pointB,
                                               closestPoint);
    return result;
}

// Draw a list of dyna polys, specified by `nodeId`
void func_80042868(GlobalContext* globalCtx, CollisionContext* colCtx, DynaCollisionContext* dyna, u16* nodeId, u8 r,
                   u8 g, u8 b) {
    u16 nextId;
    CollisionPoly* poly;
    SSNode* curNode;
    Vec3f vA;
    Vec3f vB;
    Vec3f vC;
    f32 nx;
    f32 ny;
    f32 nz;
    s16 curPolyId;

    nextId = *nodeId;
    if (nextId != SS_NULL) {
        curNode = &dyna->polyNodes.tbl[nextId];
        while (true) {
            curPolyId = curNode->polyId;
            poly = &dyna->polyList[curPolyId];
            BgCheck_Vec3sToVec3f(COLPOLY_VTX_INDEX(poly->flags_vIA) + dyna->vtxList, &vA);
            BgCheck_Vec3sToVec3f(COLPOLY_VTX_INDEX(poly->flags_vIB) + dyna->vtxList, &vB);
            BgCheck_Vec3sToVec3f((s32)(poly->vIC) + dyna->vtxList, &vC);
            if (AREG(26)) {
                nx = COLPOLY_GET_NORMAL(poly->normal.x);
                ny = COLPOLY_GET_NORMAL(poly->normal.y);
                nz = COLPOLY_GET_NORMAL(poly->normal.z);
                vA.x += AREG(26) * nx;
                vA.y += AREG(26) * ny;
                vA.z += AREG(26) * nz;
                vB.x += AREG(26) * nx;
                vB.y += AREG(26) * ny;
                vB.z += AREG(26) * nz;
                vC.x += AREG(26) * nx;
                vC.y += AREG(26) * ny;
                vC.z += AREG(26) * nz;
            }
            func_8005B2AC(globalCtx->state.gfxCtx, &vA, &vB, &vC, r, g, b);
            if (curNode->next == SS_NULL) {
                break;
            }
            curNode = &dyna->polyNodes.tbl[curNode->next];
        }
    }
}

// Draw a BgActor's dyna polys
// `bgId` is the BgActor index that should be drawn
void func_80042B2C(GlobalContext* globalCtx, CollisionContext* colCtx, s32 bgId) {
    if (AREG(21)) {
        func_80042868(globalCtx, colCtx, &colCtx->dyna, &colCtx->dyna.bgActors[bgId].dynaLookup.ceiling, 255, 0, 0);
    }
    if (AREG(22)) {
        func_80042868(globalCtx, colCtx, &colCtx->dyna, &colCtx->dyna.bgActors[bgId].dynaLookup.wall, 0, 255, 0);
    }
    if (AREG(23)) {
        func_80042868(globalCtx, colCtx, &colCtx->dyna, &colCtx->dyna.bgActors[bgId].dynaLookup.floor, 0, 0, 255);
    }
}

// Draw all dyna polys
void func_80042C3C(GlobalContext* globalCtx, CollisionContext* colCtx) {
    s32 bgId;

    for (bgId = 0; bgId < BG_ACTOR_MAX; bgId++) {

        if (!(colCtx->dyna.bgActorFlags[bgId] & 1)) {
            continue;
        }
        func_80042B2C(globalCtx, colCtx, bgId);
    }
}

// Draw a static poly
void func_80042CB8(GlobalContext* globalCtx, CollisionContext* colCtx, CollisionPoly* poly, u8 r, u8 g, u8 b) {
    Vec3f vA;
    Vec3f vB;
    Vec3f vC;
    f32 nx;
    f32 ny;
    f32 nz;

    BgCheck_Vec3sToVec3f(COLPOLY_VTX_INDEX(poly->flags_vIA) + colCtx->colHeader->vtxList, &vA);
    BgCheck_Vec3sToVec3f(COLPOLY_VTX_INDEX(poly->flags_vIB) + colCtx->colHeader->vtxList, &vB);
    BgCheck_Vec3sToVec3f(poly->vIC + colCtx->colHeader->vtxList, &vC);
    if (AREG(26) != 0) {
        nx = COLPOLY_GET_NORMAL(poly->normal.x);
        ny = COLPOLY_GET_NORMAL(poly->normal.y);
        nz = COLPOLY_GET_NORMAL(poly->normal.z);
        vA.x += AREG(26) * nx;
        vA.y += AREG(26) * ny;
        vA.z += AREG(26) * nz;
        vB.x += AREG(26) * nx;
        vB.y += AREG(26) * ny;
        vB.z += AREG(26) * nz;
        vC.x += AREG(26) * nx;
        vC.y += AREG(26) * ny;
        vC.z += AREG(26) * nz;
    }
    func_8005B2AC(globalCtx->state.gfxCtx, &vA, &vB, &vC, r, g, b);
}

// Draw a list of static polys, specified by `nodeId`
void func_80042EF8(GlobalContext* globalCtx, CollisionContext* colCtx, u16* nodeId, u8 r, u8 g, u8 b) {
    SSNode* curNode;
    CollisionPoly* polyList;
    u16 nextId;
    s16 curPolyId;

    polyList = colCtx->colHeader->polyList;
    nextId = *nodeId;
    if (nextId != SS_NULL) {
        curNode = &colCtx->polyNodes.tbl[nextId];
        while (true) {
            curPolyId = curNode->polyId;
            func_80042CB8(globalCtx, colCtx, &polyList[curPolyId], r, g, b);
            if (curNode->next == SS_NULL) {
                break;
            }
            curNode = &colCtx->polyNodes.tbl[curNode->next];
        }
    }
}

// Draw scene collision
void func_80042FC4(GlobalContext* globalCtx, CollisionContext* colCtx) {
    Player* player;
    StaticLookup* lookup;

    player = PLAYER;
    lookup = func_8003AC54(colCtx, colCtx->lookupTbl, &player->actor.posRot.pos);
    if (AREG(23) != 0) {
        func_80042EF8(globalCtx, colCtx, &lookup->floor, 0, 0, 255);
    }
    if (AREG(22) != 0) {
        func_80042EF8(globalCtx, colCtx, &lookup->wall, 0, 255, 0);
    }
    if (AREG(21) != 0) {
        func_80042EF8(globalCtx, colCtx, &lookup->ceiling, 255, 0, 0);
    }
}
