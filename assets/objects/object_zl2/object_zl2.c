#include "assets/objects/object_zl2/object_zl2.h"

#include "array_count.h"
#include "gfx.h"
#include "sys_matrix.h"
#include "ultra64.h"

u64 gZelda2_0TLUT[] = {
#include "assets/objects/object_zl2/gZelda2_0TLUT.tlut.rgba16.inc.c"
};

u64 gZelda2_1TLUT[] = {
#include "assets/objects/object_zl2/gZelda2_1TLUT.tlut.rgba16.inc.c"
};

u64 gZelda2_2TLUT[] = {
#include "assets/objects/object_zl2/gZelda2_2TLUT.tlut.rgba16.inc.c"
};

u64 object_zl2_000E00_Tex[TEX_LEN(u64, object_zl2_000E00_Tex_WIDTH, object_zl2_000E00_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_000E00_Tex.ci8.tlut_gZelda2_0TLUT.inc.c"
};

u64 object_zl2_000F00_Tex[TEX_LEN(u64, object_zl2_000F00_Tex_WIDTH, object_zl2_000F00_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_000F00_Tex.ci8.tlut_gZelda2_0TLUT.inc.c"
};

u64 object_zl2_000F40_Tex[TEX_LEN(u64, object_zl2_000F40_Tex_WIDTH, object_zl2_000F40_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_000F40_Tex.ci8.tlut_gZelda2_0TLUT.inc.c"
};

u64 object_zl2_001140_Tex[TEX_LEN(u64, object_zl2_001140_Tex_WIDTH, object_zl2_001140_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_001140_Tex.ci8.tlut_gZelda2_0TLUT.inc.c"
};

u64 object_zl2_001180_Tex[TEX_LEN(u64, object_zl2_001180_Tex_WIDTH, object_zl2_001180_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_001180_Tex.ci8.tlut_gZelda2_1TLUT.inc.c"
};

u64 object_zl2_001280_Tex[TEX_LEN(u64, object_zl2_001280_Tex_WIDTH, object_zl2_001280_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_001280_Tex.ci8.tlut_gZelda2_1TLUT.inc.c"
};

u64 object_zl2_0012C0_Tex[TEX_LEN(u64, object_zl2_0012C0_Tex_WIDTH, object_zl2_0012C0_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_0012C0_Tex.ci8.tlut_gZelda2_0TLUT.inc.c"
};

u64 object_zl2_0016C0_Tex[TEX_LEN(u64, object_zl2_0016C0_Tex_WIDTH, object_zl2_0016C0_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_0016C0_Tex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 object_zl2_001AC0_Tex[TEX_LEN(u64, object_zl2_001AC0_Tex_WIDTH, object_zl2_001AC0_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_001AC0_Tex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 object_zl2_001CC0_Tex[TEX_LEN(u64, object_zl2_001CC0_Tex_WIDTH, object_zl2_001CC0_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_001CC0_Tex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 object_zl2_0024C0_Tex[TEX_LEN(u64, object_zl2_0024C0_Tex_WIDTH, object_zl2_0024C0_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_0024C0_Tex.ci8.tlut_gZelda2_1TLUT.inc.c"
};

u64 object_zl2_002500_Tex[TEX_LEN(u64, object_zl2_002500_Tex_WIDTH, object_zl2_002500_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_002500_Tex.ci8.tlut_gZelda2_1TLUT.inc.c"
};

u64 object_zl2_002600_Tex[TEX_LEN(u64, object_zl2_002600_Tex_WIDTH, object_zl2_002600_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_002600_Tex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 object_zl2_002700_Tex[TEX_LEN(u64, object_zl2_002700_Tex_WIDTH, object_zl2_002700_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_002700_Tex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 object_zl2_002740_Tex[TEX_LEN(u64, object_zl2_002740_Tex_WIDTH, object_zl2_002740_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_002740_Tex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 object_zl2_002780_Tex[TEX_LEN(u64, object_zl2_002780_Tex_WIDTH, object_zl2_002780_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_002780_Tex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 object_zl2_002880_Tex[TEX_LEN(u64, object_zl2_002880_Tex_WIDTH, object_zl2_002880_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_002880_Tex.ci8.tlut_gZelda2_1TLUT.inc.c"
};

u64 gZelda2TriforceTex[TEX_LEN(u64, gZelda2TriforceTex_WIDTH, gZelda2TriforceTex_HEIGHT, 16)] = {
#include "assets/objects/object_zl2/gZelda2TriforceTex.rgba16.inc.c"
};

u64 gZelda2EyesTLUT[] = {
#include "assets/objects/object_zl2/gZelda2EyesTLUT.tlut.rgba16.inc.c"
};

u64 gZelda2_3TLUT[] = {
#include "assets/objects/object_zl2/gZelda2_3TLUT.tlut.rgba16.inc.c"
};

u64 gZelda2MouthTLUT[] = {
#include "assets/objects/object_zl2/gZelda2MouthTLUT.tlut.rgba16.inc.c"
};

u64 gZelda2_4TLUT[] = {
#include "assets/objects/object_zl2/gZelda2_4TLUT.tlut.rgba16.inc.c"
};

u64 gZelda2EyeOpenTex[TEX_LEN(u64, gZelda2EyeOpenTex_WIDTH, gZelda2EyeOpenTex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2EyeOpenTex.ci8.tlut_gZelda2EyesTLUT.inc.c"
};

u64 object_zl2_0034C8_Tex[TEX_LEN(u64, object_zl2_0034C8_Tex_WIDTH, object_zl2_0034C8_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_0034C8_Tex.ci8.tlut_gZelda2_3TLUT.inc.c"
};

u64 gZelda2MouthSeriousTex[TEX_LEN(u64, gZelda2MouthSeriousTex_WIDTH, gZelda2MouthSeriousTex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2MouthSeriousTex.ci8.tlut_gZelda2MouthTLUT.inc.c"
};

u64 object_zl2_003908_Tex[TEX_LEN(u64, object_zl2_003908_Tex_WIDTH, object_zl2_003908_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_003908_Tex.ci8.tlut_gZelda2_3TLUT.inc.c"
};

u64 gZelda2Tex_003A08[TEX_LEN(u64, gZelda2Tex_003A08_WIDTH, gZelda2Tex_003A08_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Tex_003A08.ci8.tlut_gZelda2_4TLUT.inc.c"
};

u64 object_zl2_003A48_Tex[TEX_LEN(u64, object_zl2_003A48_Tex_WIDTH, object_zl2_003A48_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_003A48_Tex.ci8.tlut_gZelda2_4TLUT.inc.c"
};

u64 object_zl2_003AC8_Tex[TEX_LEN(u64, object_zl2_003AC8_Tex_WIDTH, object_zl2_003AC8_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_003AC8_Tex.ci8.tlut_gZelda2_4TLUT.inc.c"
};

u64 object_zl2_003B48_Tex[TEX_LEN(u64, object_zl2_003B48_Tex_WIDTH, object_zl2_003B48_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_003B48_Tex.ci8.tlut_gZelda2_4TLUT.inc.c"
};

u64 gZelda2EyeHalfTex[TEX_LEN(u64, gZelda2EyeHalfTex_WIDTH, gZelda2EyeHalfTex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2EyeHalfTex.ci8.tlut_gZelda2EyesTLUT.inc.c"
};

u64 gZelda2EyeShutTex[TEX_LEN(u64, gZelda2EyeShutTex_WIDTH, gZelda2EyeShutTex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2EyeShutTex.ci8.tlut_gZelda2EyesTLUT.inc.c"
};

u64 object_zl2_004448_Tex[TEX_LEN(u64, object_zl2_004448_Tex_WIDTH, object_zl2_004448_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_004448_Tex.ci8.tlut_gZelda2_4TLUT.inc.c"
};

u64 gZelda2Eye03Tex[TEX_LEN(u64, gZelda2Eye03Tex_WIDTH, gZelda2Eye03Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Eye03Tex.ci8.tlut_gZelda2EyesTLUT.inc.c"
};

u64 gZelda2Eye04Tex[TEX_LEN(u64, gZelda2Eye04Tex_WIDTH, gZelda2Eye04Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Eye04Tex.ci8.tlut_gZelda2EyesTLUT.inc.c"
};

u64 gZelda2Eye05Tex[TEX_LEN(u64, gZelda2Eye05Tex_WIDTH, gZelda2Eye05Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Eye05Tex.ci8.tlut_gZelda2EyesTLUT.inc.c"
};

u64 gZelda2Eye06Tex[TEX_LEN(u64, gZelda2Eye06Tex_WIDTH, gZelda2Eye06Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Eye06Tex.ci8.tlut_gZelda2EyesTLUT.inc.c"
};

u64 gZelda2MouthHappyTex[TEX_LEN(u64, gZelda2MouthHappyTex_WIDTH, gZelda2MouthHappyTex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2MouthHappyTex.ci8.tlut_gZelda2MouthTLUT.inc.c"
};

u64 gZelda2MouthOpenTex[TEX_LEN(u64, gZelda2MouthOpenTex_WIDTH, gZelda2MouthOpenTex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2MouthOpenTex.ci8.tlut_gZelda2MouthTLUT.inc.c"
};

u64 gZelda2Eye07Tex[TEX_LEN(u64, gZelda2Eye07Tex_WIDTH, gZelda2Eye07Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Eye07Tex.ci8.tlut_gZelda2EyesTLUT.inc.c"
};

u64 gZelda2Eye08Tex[TEX_LEN(u64, gZelda2Eye08Tex_WIDTH, gZelda2Eye08Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Eye08Tex.ci8.tlut_gZelda2EyesTLUT.inc.c"
};

u64 object_zl2_006548_Tex[TEX_LEN(u64, object_zl2_006548_Tex_WIDTH, object_zl2_006548_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_006548_Tex.ci8.tlut_gZelda2_4TLUT.inc.c"
};

Vtx object_zl2_Vtx_006748[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_006748.inc.c"
};

Gfx object_zl2_007DC8_DL[729] = {
#include "assets/objects/object_zl2/object_zl2_007DC8_DL.inc.c"
};

u64 gZelda2_5TLUT[] = {
#include "assets/objects/object_zl2/gZelda2_5TLUT.tlut.rgba16.inc.c"
};

u64 gZelda2_6TLUT[] = {
#include "assets/objects/object_zl2/gZelda2_6TLUT.tlut.rgba16.inc.c"
};

u64 gZelda2_7TLUT[] = {
#include "assets/objects/object_zl2/gZelda2_7TLUT.tlut.rgba16.inc.c"
};

u64 object_zl2_009738_Tex[TEX_LEN(u64, object_zl2_009738_Tex_WIDTH, object_zl2_009738_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_009738_Tex.ci8.tlut_gZelda2_6TLUT.inc.c"
};

u64 object_zl2_009938_Tex[TEX_LEN(u64, object_zl2_009938_Tex_WIDTH, object_zl2_009938_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_009938_Tex.ci8.tlut_gZelda2_5TLUT.inc.c"
};

u64 object_zl2_009A38_Tex[TEX_LEN(u64, object_zl2_009A38_Tex_WIDTH, object_zl2_009A38_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_009A38_Tex.ci8.tlut_gZelda2_5TLUT.inc.c"
};

u64 object_zl2_009A78_Tex[TEX_LEN(u64, object_zl2_009A78_Tex_WIDTH, object_zl2_009A78_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_009A78_Tex.ci8.tlut_gZelda2_5TLUT.inc.c"
};

u64 object_zl2_009E78_Tex[TEX_LEN(u64, object_zl2_009E78_Tex_WIDTH, object_zl2_009E78_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_009E78_Tex.ci8.tlut_gZelda2_6TLUT.inc.c"
};

u64 object_zl2_009F78_Tex[TEX_LEN(u64, object_zl2_009F78_Tex_WIDTH, object_zl2_009F78_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_009F78_Tex.ci8.tlut_gZelda2_6TLUT.inc.c"
};

u64 object_zl2_009FF8_Tex[TEX_LEN(u64, object_zl2_009FF8_Tex_WIDTH, object_zl2_009FF8_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_009FF8_Tex.ci8.tlut_gZelda2_7TLUT.inc.c"
};

u64 object_zl2_00A0F8_Tex[TEX_LEN(u64, object_zl2_00A0F8_Tex_WIDTH, object_zl2_00A0F8_Tex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/object_zl2_00A0F8_Tex.ci8.tlut_gZelda2_7TLUT.inc.c"
};

Vtx object_zl2_Vtx_00A4F8[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00A4F8.inc.c"
};

Gfx object_zl2_00B068_DL[166] = {
#include "assets/objects/object_zl2/object_zl2_00B068_DL.inc.c"
};

u64 gZelda2OcarinaTex[TEX_LEN(u64, gZelda2OcarinaTex_WIDTH, gZelda2OcarinaTex_HEIGHT, 16)] = {
#include "assets/objects/object_zl2/gZelda2OcarinaTex.rgba16.inc.c"
};

Vtx gZelda2OcarinaVtx[] = {
#include "assets/objects/object_zl2/gZelda2OcarinaVtx.inc.c"
};

Gfx gZelda2OcarinaDL[37] = {
#include "assets/objects/object_zl2/gZelda2OcarinaDL.inc.c"
};

Vtx object_zl2_Vtx_00BC10[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00BC10.inc.c"
};

Vtx object_zl2_Vtx_00C1B0[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00C1B0.inc.c"
};

Vtx object_zl2_Vtx_00C370[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00C370.inc.c"
};

Vtx object_zl2_Vtx_00C770[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00C770.inc.c"
};

Vtx object_zl2_Vtx_00CD10[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00CD10.inc.c"
};

Vtx object_zl2_Vtx_00CED0[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00CED0.inc.c"
};

Vtx object_zl2_Vtx_00D2D0[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00D2D0.inc.c"
};

Vtx object_zl2_Vtx_00D530[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00D530.inc.c"
};

Vtx object_zl2_Vtx_00D790[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00D790.inc.c"
};

Vtx object_zl2_Vtx_00D9F0[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00D9F0.inc.c"
};

Vtx object_zl2_Vtx_00DE00[] = {
#include "assets/objects/object_zl2/object_zl2_Vtx_00DE00.inc.c"
};

Gfx object_zl2_00E590_DL[112] = {
#include "assets/objects/object_zl2/object_zl2_00E590_DL.inc.c"
};

Gfx object_zl2_00E910_DL[41] = {
#include "assets/objects/object_zl2/object_zl2_00E910_DL.inc.c"
};

Gfx object_zl2_00EA58_DL[97] = {
#include "assets/objects/object_zl2/object_zl2_00EA58_DL.inc.c"
};

Gfx object_zl2_00ED60_DL[112] = {
#include "assets/objects/object_zl2/object_zl2_00ED60_DL.inc.c"
};

Gfx object_zl2_00F0E0_DL[41] = {
#include "assets/objects/object_zl2/object_zl2_00F0E0_DL.inc.c"
};

Gfx object_zl2_00F228_DL[97] = {
#include "assets/objects/object_zl2/object_zl2_00F228_DL.inc.c"
};

Gfx object_zl2_00F530_DL[437] = {
#include "assets/objects/object_zl2/object_zl2_00F530_DL.inc.c"
};

Gfx object_zl2_0102D8_DL[194] = {
#include "assets/objects/object_zl2/object_zl2_0102D8_DL.inc.c"
};

Gfx object_zl2_0108E8_DL[39] = {
#include "assets/objects/object_zl2/object_zl2_0108E8_DL.inc.c"
};

Gfx object_zl2_010A20_DL[39] = {
#include "assets/objects/object_zl2/object_zl2_010A20_DL.inc.c"
};

Gfx object_zl2_010B58_DL[39] = {
#include "assets/objects/object_zl2/object_zl2_010B58_DL.inc.c"
};

StandardLimb object_zl2_010C90_Limb = {
#include "assets/objects/object_zl2/object_zl2_010C90_Limb.inc.c"
};

StandardLimb object_zl2_010C9C_Limb = {
#include "assets/objects/object_zl2/object_zl2_010C9C_Limb.inc.c"
};

StandardLimb object_zl2_010CA8_Limb = {
#include "assets/objects/object_zl2/object_zl2_010CA8_Limb.inc.c"
};

StandardLimb object_zl2_010CB4_Limb = {
#include "assets/objects/object_zl2/object_zl2_010CB4_Limb.inc.c"
};

StandardLimb object_zl2_010CC0_Limb = {
#include "assets/objects/object_zl2/object_zl2_010CC0_Limb.inc.c"
};

StandardLimb object_zl2_010CCC_Limb = {
#include "assets/objects/object_zl2/object_zl2_010CCC_Limb.inc.c"
};

StandardLimb object_zl2_010CD8_Limb = {
#include "assets/objects/object_zl2/object_zl2_010CD8_Limb.inc.c"
};

StandardLimb object_zl2_010CE4_Limb = {
#include "assets/objects/object_zl2/object_zl2_010CE4_Limb.inc.c"
};

StandardLimb object_zl2_010CF0_Limb = {
#include "assets/objects/object_zl2/object_zl2_010CF0_Limb.inc.c"
};

StandardLimb object_zl2_010CFC_Limb = {
#include "assets/objects/object_zl2/object_zl2_010CFC_Limb.inc.c"
};

StandardLimb object_zl2_010D08_Limb = {
#include "assets/objects/object_zl2/object_zl2_010D08_Limb.inc.c"
};

StandardLimb object_zl2_010D14_Limb = {
#include "assets/objects/object_zl2/object_zl2_010D14_Limb.inc.c"
};

StandardLimb object_zl2_010D20_Limb = {
#include "assets/objects/object_zl2/object_zl2_010D20_Limb.inc.c"
};

StandardLimb object_zl2_010D2C_Limb = {
#include "assets/objects/object_zl2/object_zl2_010D2C_Limb.inc.c"
};

void* gZelda2Limbs[] = {
#include "assets/objects/object_zl2/gZelda2Limbs.inc.c"
};

FlexSkeletonHeader gZelda2Skel = {
#include "assets/objects/object_zl2/gZelda2Skel.inc.c"
};
