#include "ultra64.h"
#include "tex_len.h"
#include "versions.h"
#include "actor.h"

#if OOT_NTSC_N64
u64 gRoadToLakeHyliaTitleCardENGTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToLakeHyliaTitleCardENGTex.ia8.inc.c"
};

u64 gRoadToLakeHyliaTitleCardGERTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToLakeHyliaTitleCardGERTex.ia8.inc.c"
};

u64 gRoadToLakeHyliaTitleCardFRATex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToLakeHyliaTitleCardFRATex.ia8.inc.c"
};

u64 gRoadToLakeHyliaTitleCardJPNTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToLakeHyliaTitleCardJPNTex.ia8.inc.c"
};

#else

#if OOT_NTSC
u64 gRoadToLakeHyliaTitleCardJPNTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToLakeHyliaTitleCardJPNTex.ia8.inc.c"
};
#endif

u64 gRoadToLakeHyliaTitleCardENGTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToLakeHyliaTitleCardENGTex.ia8.inc.c"
};

#if OOT_PAL
u64 gRoadToLakeHyliaTitleCardGERTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToLakeHyliaTitleCardGERTex.ia8.inc.c"
};

u64 gRoadToLakeHyliaTitleCardFRATex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToLakeHyliaTitleCardFRATex.ia8.inc.c"
};
#endif

#endif
