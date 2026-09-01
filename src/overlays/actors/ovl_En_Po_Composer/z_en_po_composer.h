#ifndef Z_EN_PO_COMPOSER_H
#define Z_EN_PO_COMPOSER_H

#include "actor.h"
#include "light.h"
#include "assets/objects/object_po_composer/object_po_composer.h"

struct EnPoComposer;

typedef void (*EnPoComposerActionFunc)(struct EnPoComposer*, struct PlayState*);

typedef enum EnPoComposerType {
    EN_PO_COMPOSER_SHARP,
    EN_PO_COMPOSER_FLAT
} EnPoComposerType;

#define EN_PO_COMPOSER_GET_TYPE(params) ((params) & 0xFF)
#define EN_PO_COMPOSER_GET_SWITCH_FLAG(params) (((params) >> 8) & 0x3F)

typedef struct EnPoComposerInfo {
    /* 0x0000 */ Color_RGB8 primColor;
    /* 0x0003 */ Color_RGB8 lightColor;
    /* 0x0006 */ u8 unk_6; // limb index
    /* 0x0007 */ u8 unk_7; // limb index
    /* 0x0008 */ s8 unk_8; // rate of some kind
    /* 0x000C */ AnimationHeader* idleAnim;
    /* 0x0010 */ AnimationHeader* idleAnim2;
    /* 0x0014 */ AnimationHeader* damageAnim;
    /* 0x0018 */ AnimationHeader* fleeAnim;
    /* 0x001C */ Gfx* lanternDisplayList;
    /* 0x0020 */ Gfx* burnDisplayList;
    /* 0x0024 */ Gfx* soulDisplayList;
} EnPoComposerInfo; // size = 0x28

typedef struct EnPoComposer {
    /* 0x0000 */ Actor actor;
    /* 0x014C */ SkelAnime skelAnime;
    /* 0x0190 */ EnPoComposerActionFunc actionFunc;
    /* 0x0194 */ u8 unk_194;
    /* 0x0195 */ u8 unk_195;
    /* 0x0197 */ u8 infoIdx;
    /* 0x0198 */ s16 unk_198;
    /* 0x019A */ s16 visibilityTimer;
    /* 0x019C */ s16 subCamId;
    /* 0x019E */ Vec3s jointTable[21];
    /* 0x021C */ Vec3s morphTable[21];
    /* 0x029A */ Color_RGBA8 lightColor;
    /* 0x029E */ Color_RGBA8 envColor;
    /* 0x02A8 */ LightNode* lightNode;
    /* 0x02AC */ LightInfo lightInfo;
    /* 0x02BC */ ColliderCylinder colliderCylinder;
    /* 0x0308 */ ColliderJntSph colliderJntSph;
    /* 0x0328 */ ColliderJntSphElement colliderJntSphElements[1];
    /* 0x0368 */ MtxF unk_368;
} EnPoComposer; // size = 0x3A8

#endif
