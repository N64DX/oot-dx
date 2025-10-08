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

u64 gZelda2Skel_06010D38_Limbs_06010D20_StandardLimb_0600EA58_DL_00000E00_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D20_StandardLimb_0600EA58_DL_00000E00_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D20_StandardLimb_0600EA58_DL_00000E00_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D20_StandardLimb_0600EA58_DL_00000E00_CITex.ci8.tlut_gZelda2_0TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010D14_StandardLimb_0600E910_DL_00000F00_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D14_StandardLimb_0600E910_DL_00000F00_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D14_StandardLimb_0600E910_DL_00000F00_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D14_StandardLimb_0600E910_DL_00000F00_CITex.ci8.tlut_gZelda2_0TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00000F40_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00000F40_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00000F40_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00000F40_CITex.ci8.tlut_gZelda2_0TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001140_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001140_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001140_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001140_CITex.ci8.tlut_gZelda2_0TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001180_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001180_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001180_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001180_CITex.ci8.tlut_gZelda2_1TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001280_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001280_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001280_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL_00001280_CITex.ci8.tlut_gZelda2_1TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_000012C0_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_000012C0_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_000012C0_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_000012C0_CITex.ci8.tlut_gZelda2_0TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_000016C0_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_000016C0_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_000016C0_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_000016C0_CITex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_00001AC0_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_00001AC0_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_00001AC0_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_00001AC0_CITex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_00001CC0_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_00001CC0_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_00001CC0_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL_00001CC0_CITex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_000024C0_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_000024C0_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_000024C0_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_000024C0_CITex.ci8.tlut_gZelda2_1TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002500_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002500_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002500_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002500_CITex.ci8.tlut_gZelda2_1TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002600_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002600_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002600_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002600_CITex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002700_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002700_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002700_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002700_CITex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002740_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002740_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002740_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002740_CITex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002780_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002780_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002780_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002780_CITex.ci8.tlut_gZelda2_2TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002880_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002880_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002880_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL_00002880_CITex.ci8.tlut_gZelda2_1TLUT.inc.c"
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

u64 gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_000034C8_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_000034C8_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_000034C8_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_000034C8_CITex.ci8.tlut_gZelda2_3TLUT.inc.c"
};

u64 gZelda2MouthSeriousTex[TEX_LEN(u64, gZelda2MouthSeriousTex_WIDTH, gZelda2MouthSeriousTex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2MouthSeriousTex.ci8.tlut_gZelda2MouthTLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003908_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003908_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003908_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003908_CITex.ci8.tlut_gZelda2_3TLUT.inc.c"
};

u64 gZelda2Tex_003A08[TEX_LEN(u64, gZelda2Tex_003A08_WIDTH, gZelda2Tex_003A08_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Tex_003A08.ci8.tlut_gZelda2_4TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003A48_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003A48_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003A48_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003A48_CITex.ci8.tlut_gZelda2_4TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003AC8_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003AC8_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003AC8_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003AC8_CITex.ci8.tlut_gZelda2_4TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003B48_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003B48_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003B48_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00003B48_CITex.ci8.tlut_gZelda2_4TLUT.inc.c"
};

u64 gZelda2EyeHalfTex[TEX_LEN(u64, gZelda2EyeHalfTex_WIDTH, gZelda2EyeHalfTex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2EyeHalfTex.ci8.tlut_gZelda2EyesTLUT.inc.c"
};

u64 gZelda2EyeShutTex[TEX_LEN(u64, gZelda2EyeShutTex_WIDTH, gZelda2EyeShutTex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2EyeShutTex.ci8.tlut_gZelda2EyesTLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00004448_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00004448_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00004448_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00004448_CITex.ci8.tlut_gZelda2_4TLUT.inc.c"
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

u64 gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00006548_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00006548_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00006548_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_00006548_CITex.ci8.tlut_gZelda2_4TLUT.inc.c"
};

Vtx gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_06006748_Vtx_fused_[] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL_06006748_Vtx_fused_.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL[729] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb_06007DC8_DL.inc.c"
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

u64 gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009738_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009738_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009738_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009738_CITex.ci8.tlut_gZelda2_6TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009938_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009938_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009938_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009938_CITex.ci8.tlut_gZelda2_5TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009A38_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009A38_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009A38_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009A38_CITex.ci8.tlut_gZelda2_5TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009A78_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009A78_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009A78_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009A78_CITex.ci8.tlut_gZelda2_5TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009E78_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009E78_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009E78_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009E78_CITex.ci8.tlut_gZelda2_6TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009F78_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009F78_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009F78_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009F78_CITex.ci8.tlut_gZelda2_6TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009FF8_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009FF8_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009FF8_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_00009FF8_CITex.ci8.tlut_gZelda2_7TLUT.inc.c"
};

u64 gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_0000A0F8_CITex[TEX_LEN(u64, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_0000A0F8_CITex_WIDTH, gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_0000A0F8_CITex_HEIGHT, 8)] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_0000A0F8_CITex.ci8.tlut_gZelda2_7TLUT.inc.c"
};

Vtx gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_0600A4F8_Vtx_fused_[] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL_0600A4F8_Vtx_fused_.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL[166] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb_0600B068_DL.inc.c"
};

u64 gZelda2OcarinaTex[TEX_LEN(u64, gZelda2OcarinaTex_WIDTH, gZelda2OcarinaTex_HEIGHT, 16)] = {
#include "assets/objects/object_zl2/gZelda2OcarinaTex.rgba16.inc.c"
};

Vtx gZelda2OcarinaDL_0600B998_Vtx[] = {
#include "assets/objects/object_zl2/gZelda2OcarinaDL_0600B998_Vtx.inc.c"
};

Gfx gZelda2OcarinaDL[37] = {
#include "assets/objects/object_zl2/gZelda2OcarinaDL.inc.c"
};

Vtx gZelda2Skel_06010D38_Limbs_06010CFC_StandardLimb_0600F228_DL_0600BC10_Vtx_fused_[] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CFC_StandardLimb_0600F228_DL_0600BC10_Vtx_fused_.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL[112] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb_0600E590_DL.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010D14_StandardLimb_0600E910_DL[41] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D14_StandardLimb_0600E910_DL.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010D20_StandardLimb_0600EA58_DL[97] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D20_StandardLimb_0600EA58_DL.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010CE4_StandardLimb_0600ED60_DL[112] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CE4_StandardLimb_0600ED60_DL.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010CF0_StandardLimb_0600F0E0_DL[41] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CF0_StandardLimb_0600F0E0_DL.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010CFC_StandardLimb_0600F228_DL[97] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CFC_StandardLimb_0600F228_DL.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL[437] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb_0600F530_DL.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL[194] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb_060102D8_DL.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010CB4_StandardLimb_060108E8_DL[39] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CB4_StandardLimb_060108E8_DL.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010CC0_StandardLimb_06010A20_DL[39] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CC0_StandardLimb_06010A20_DL.inc.c"
};

Gfx gZelda2Skel_06010D38_Limbs_06010CCC_StandardLimb_06010B58_DL[39] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CCC_StandardLimb_06010B58_DL.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010C90_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010C90_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010C9C_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CA8_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010CB4_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CB4_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010CC0_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CC0_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010CCC_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CCC_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CD8_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010CE4_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CE4_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010CF0_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CF0_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010CFC_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010CFC_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D08_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010D14_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D14_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010D20_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D20_StandardLimb.inc.c"
};

StandardLimb gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs_06010D2C_StandardLimb.inc.c"
};

void* gZelda2Skel_06010D38_Limbs[] = {
#include "assets/objects/object_zl2/gZelda2Skel_06010D38_Limbs.inc.c"
};

FlexSkeletonHeader gZelda2Skel = {
#include "assets/objects/object_zl2/gZelda2Skel.inc.c"
};
