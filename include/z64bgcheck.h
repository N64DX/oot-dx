#ifndef _Z_BGCHECK_
#define _Z_BGCHECK_

struct GlobalContext;
struct Actor;
struct DynaPolyActor;

#define SS_NULL 0xFFFF
#define COLPOLY_NORM_FRAC (1.0f / 32767)
#define COLPOLY_GET_NORM(n) ((n)*COLPOLY_NORM_FRAC)

// bccFlags
#define BGCHECK_CHECK_WALL 1
#define BGCHECK_CHECK_FLOOR 2
#define BGCHECK_CHECK_CEILING 4
#define BGCHECK_CHECK_ONE_FACE 8
#define BGCHECK_CHECK_DYNA 0x10

// bciFlags
#define BGCHECK_IGNORE_NONE 0
#define BGCHECK_IGNORE_CEILING 1
#define BGCHECK_IGNORE_WALL 2
#define BGCHECK_IGNORE_FLOOR 4

// xpFlags
#define COLPOLY_IGNORE_NONE 0
#define COLPOLY_IGNORE_CAMERA 1
#define COLPOLY_IGNORE_ENTITY 2
#define COLPOLY_IGNORE_PROJECTILES 4
#define COLPOLY_SNORM(x) ((short)((x) * 32767))

#define BG_ACTOR_MAX 50
#define BGCHECK_SCENE BG_ACTOR_MAX
#define BGCHECK_Y_MIN -32000.0f
#define VIA_FLAG_TEST(vIA, flags) ((vIA) & (((flags)&7) << 13))
#define VTX_INDEX(vI) ((vI)&0x1FFF)

#define FUNC_80041EA4_RESPAWN 5
#define FUNC_80041EA4_MOUNT_WALL 6
#define FUNC_80041EA4_STOP 8
#define FUNC_80041EA4_VOID_OUT 12

#define WATERBOX_ROOM(p) ((p >> 13) & 0x3F)

typedef struct {
    Vec3f scale;
    Vec3s rot;
    Vec3f pos;
} ScaleRotPos;

typedef struct {
    /* 0x00 */ u16 type;
    union {
        u16 vtxData[3];
        struct {
            /* 0x02 */ u16 flags_vIA; // 0xE000 is poly exclusion flags, 0x1FFF is vtxId
            /* 0x04 */ u16 flags_vIB; // 0xE000 is ? flags, 0x1FFF is vtxId
            /* 0x06 */ u16 vIC;
        };
    };
    /* 0x08 */ Vec3s norm; // Unit normal vector.
                           // Value ranges from -0x7FFF to 0x7FFF, representing -1 to 1. 0x8000 is invalid

    /* 0x0E */ s16 dist; // Plane distance from origin
} CollisionPoly;         // size = 0x10

typedef struct {
    /* 0x00 */ u16 cameraSType;
    /* 0x02 */ s16 numCameras;
    /* 0x04 */ Vec3s* camPosData;
} CamData;

typedef struct {
    /* 0x00 */ s16 xMin;
    /* 0x02 */ s16 ySurface;
    /* 0x04 */ s16 zMin;
    /* 0x06 */ s16 xLength;
    /* 0x08 */ s16 zLength;
    /* 0x0C */ u32 properties;

    // 0x0008_0000 = ?
    // 0x0007_E000 = Room Index, 0x3F = all rooms
    // 0x0000_1F00 = Lighting Settings Index
    // 0x0000_00FF = CamData index
} WaterBox; // size = 0x10

typedef struct {
    u32 data[2];
} SurfaceType;
// Type 1
// 0x0800_0000 = wall damage

typedef struct {
    /* 0x00 */ Vec3s minBounds; // colAbsMin
    /* 0x06 */ Vec3s maxBounds; // colAbsMax
    /* 0x0C */ u16 nbVertices;
    /* 0x10 */ Vec3s* vtxList; // vertexArray
    /* 0x14 */ u16 nbPolygons;
    /* 0x18 */ CollisionPoly* polyList; // polygonArray
    /* 0x1C */ SurfaceType* polygonTypes;
    /* 0x20 */ CamData* cameraDataList;
    /* 0x24 */ u16 nbWaterBoxes;
    /* 0x28 */ WaterBox* waterBoxes;
} CollisionHeader; // BGDataInfo

typedef struct {
    s16 polyId;
    u16 next; // next SSNode index
} SSNode;

typedef struct {
    /* 0x00 */ u16 max;          // original name: short_slist_node_size
    /* 0x02 */ u16 count;        // original name: short_slist_node_last_index
    /* 0x04 */ SSNode* tbl;      // original name: short_slist_node_tbl
    /* 0x08 */ u8* polyCheckTbl; // set to 1 if polygon has already been tested
} SSNodeList;

typedef struct {
    SSNode* tbl;
    s32 count;
    s32 max;
} DynaSSNodeList;

typedef struct {
    u16 floor;
    u16 wall;
    u16 ceiling;
} Lookup;

typedef struct {
    u16 polyStartIndex;
    u16 ceiling;
    u16 wall;
    u16 floor;
} DynaLookup;

typedef struct {
    /* 0x00 */ struct Actor* actor;
    /* 0x04 */ CollisionHeader* colHeader;
    /* 0x08 */ DynaLookup dynaLookup;
    /* 0x10 */ u16 vtxStartIndex; // dyna vtx index start
    /* 0x14 */ ScaleRotPos prevSrp;
    /* 0x34 */ ScaleRotPos curSrp;
    /* 0x54 */ Sphere16 boundingSphere;
    /* 0x5C */ f32 minY;
    /* 0x60 */ f32 maxY;
} BgActor; // size = 0x64

typedef struct {
    /* 0x0000 */ u8 bitFlag;
    /* 0x0004 */ BgActor bgActors[BG_ACTOR_MAX];
    /* 0x138C */ u16 bgActorFlags[BG_ACTOR_MAX]; // & 0x0008 = no dyna ceiling
    /* 0x13F0 */ CollisionPoly* polyList;        // pbuf
    /* 0x13F4 */ Vec3s* vtxList;                 // pbuf
    /* 0x13F8 */ DynaSSNodeList polyNodes;
    /* 0x1404 */ s32 polyNodesMax;
    /* 0x1408 */ s32 polyListMax;
    /* 0x140C */ s32 vtxListMax;
} DynaCollisionContext; // size = 0x1410 //810

typedef struct CollisionContext {
    /* 0x00 */ CollisionHeader* colHeader;
    /* 0x04 */ Vec3f minBounds;
    /* 0x10 */ Vec3f maxBounds;
    /* 0x1C */ Vec3i subdivisions;
    /* 0x28 */ Vec3f unitSize;
    /* 0x34 */ Vec3f inverseUnitSize;
    /* 0x40 */ Lookup* lookupTbl;
    /* 0x44 */ SSNodeList polyNodes;
    /* 0x50 */ DynaCollisionContext dyna;
    /* 0x1460 */ u32 memSize;
} CollisionContext; // off 0x07C0 size = 0x1464

typedef struct {
    /* 0x00 */ struct GlobalContext* globalCtx;
    /* 0x04 */ struct CollisionContext* colCtx;
    /* 0x08 */ u16 xpFlags;
    /* 0x0C */ CollisionPoly** resultPoly;
    /* 0x10 */ f32 yIntersect;
    /* 0x14 */ Vec3f* pos;
    /* 0x18 */ s32* bgId;
    /* 0x1C */ struct Actor* actor;
    /* 0x20 */ u32 unk_20;
    /* 0x24 */ f32 chkDist;
    /* 0x28 */ DynaCollisionContext* dyna;
    /* 0x2C */ u16* nodeId;
} DynaRaycast;

typedef struct {
    /* 0x00 */ struct CollisionContext* colCtx;
    /* 0x04 */ u16 xpFlags;
    /* 0x08 */ DynaCollisionContext* dyna;
    /* 0x0C */ u16* nodeId;
    /* 0x10 */ Vec3f* posA;
    /* 0x14 */ Vec3f* posB;
    /* 0x18 */ Vec3f* posResult;
    /* 0x1C */ CollisionPoly** resultPoly;
    /* 0x20 */ s32 chkOneFace; // bccFlags & 0x8
    /* 0x24 */ f32* distSq;    // distance from posA to poly squared
    /* 0x28 */ f32 chkDist;    // distance from poly
} DynaLineTest;                   // dyna ?

#endif
