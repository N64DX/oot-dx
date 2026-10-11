#include "object_toki_objects_extra.h"

#include "gfx.h"

static Vtx gFourSwordHandleVtx[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandleVtx.inc.c"
};

static Vtx gFourSwordBladeVtx[] = {
#include "assets/objects/object_link_child/swords/gFourSwordBladeVtx.inc.c"
};

static u64 gFourSwordHandleTex1[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandleTex1.ci8.inc.c"
};

static u64 gFourSwordHandleTLUT1[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandleTex1.tlut.rgba16.inc.c"
};

static u64 gFourSwordDullHandleTex1[] = {
#include "assets/objects/object_link_child/swords/gFourSwordDullHandleTex1.ci8.inc.c"
};

static u64 gFourSwordDullHandleTLUT1[] = {
#include "assets/objects/object_link_child/swords/gFourSwordDullHandleTex1.tlut.rgba16.inc.c"
};

static u64 gFourSwordHandleTex2[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandleTex2.i4.inc.c"
};

static u64 gFourSwordHandleTex3[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandleTex3.ci8.inc.c"
};

static u64 gFourSwordHandleTLUT3[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandleTex3.tlut.rgba16.inc.c"
};

static u64 gFourSwordDullHandleTex3[] = {
#include "assets/objects/object_link_child/swords/gFourSwordDullHandleTex3.ci8.inc.c"
};

static u64 gFourSwordDullHandleTLUT3[] = {
#include "assets/objects/object_link_child/swords/gFourSwordDullHandleTex3.tlut.rgba16.inc.c"
};

static u64 gFourSwordHandleTex4[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandleTex4.ci8.inc.c"
};

static u64 gFourSwordHandleTLUT4[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandleTex4.tlut.rgba16.inc.c"
};

static u64 gFourSwordHandleTex5[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandleTex5.ci8.inc.c"
};

static u64 gFourSwordHandleTLUT5[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandleTex5.tlut.rgba16.inc.c"
};

static u64 gFourSwordBladeTex[] = {
#include "assets/objects/object_link_child/swords/gFourSwordBladeTex.ci8.inc.c"
};

static u64 gFourSwordBladeTLUT[] = {
#include "assets/objects/object_link_child/swords/gFourSwordBladeTex.tlut.rgba16.inc.c"
};

static const Gfx gFourSwordHandle1DL[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandle1DL.inc.c"
};

static const Gfx gFourSwordHandle2DL[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandle2DL.inc.c"
};

static const Gfx gFourSwordHandle3DL[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandle3DL.inc.c"
};

static const Gfx gFourSwordHandle4DL[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandle4DL.inc.c"
};

static const Gfx gFourSwordHandle5DL[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandle5DL.inc.c"
};

static const Gfx gFourSwordHandleDL[] = {
#include "assets/objects/object_link_child/swords/gFourSwordHandleDL.inc.c"
};

static const Gfx gFourSwordDullHandleDL[] = {
#include "assets/objects/object_link_child/swords/gFourSwordDullHandleDL.inc.c"
};

static const Gfx gFourSwordBladeDL[] = {
#include "assets/objects/object_link_child/swords/gFourSwordBladeDL.inc.c"
};

static Mtx gFourSwordDullBladeScaleMtx = gdSPDefMtx(
    0.7, 0, 0, 216,
      0, 1, 0,   0,
      0, 0, 1,   0,
      0, 0, 0,   1
);

static Mtx gFourSwordMtx = gdSPDefMtx(
      0, 0.5,   0, -180,
   -0.5,   0,   0,  700,
      0,   0, 0.5,    0,
      0,   0,   0,    1
);

Gfx gObjectTokiObjectsFourSwordDullDL[] = {
    gsSPMatrix(&gFourSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsSPDisplayList(gFourSwordDullHandleDL),
    gsSPMatrix(&gFourSwordDullBladeScaleMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, 1, COMBINED, 0, PRIMITIVE, 0, 0, 0, 0, COMBINED),
    gsDPSetPrimColor(0, 0, 255, 255, 255, 150),
    gsSPDisplayList(gFourSwordBladeDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};

Gfx gObjectTokiObjectsFourSwordDL[] = {
    gsSPMatrix(&gFourSwordMtx, G_MTX_PUSH | G_MTX_MUL | G_MTX_MODELVIEW),
    gsSPDisplayList(gFourSwordHandleDL),
    gsSPDisplayList(gFourSwordBladeDL),
    gsSPPopMatrix(G_MTX_MODELVIEW),
    gsSPEndDisplayList(),
};
