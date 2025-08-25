#include "ultra64.h"
#include "tex_len.h"
#include "versions.h"
#include "actor.h"

#if OOT_NTSC_N64
u64 gRoadToFortressTitleCardENGTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToFortressTitleCardENGTex.ia8.inc.c"
};

u64 gRoadToFortressTitleCardGERTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToFortressTitleCardGERTex.ia8.inc.c"
};

u64 gRoadToFortressTitleCardFRATex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToFortressTitleCardFRATex.ia8.inc.c"
};

u64 gRoadToFortressTitleCardJPNTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToFortressTitleCardJPNTex.ia8.inc.c"
};

#else

#if OOT_NTSC
u64 gRoadToFortressTitleCardJPNTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToFortressTitleCardJPNTex.ia8.inc.c"
};
#endif

u64 gRoadToFortressTitleCardENGTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToFortressTitleCardENGTex.ia8.inc.c"
};

#if OOT_PAL
u64 gRoadToFortressTitleCardGERTex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToFortressTitleCardGERTex.ia8.inc.c"
};

u64 gRoadToFortressTitleCardFRATex[TEX_LEN(u64, PLACE_NAME_TEX_WIDTH, PLACE_NAME_TEX_HEIGHT, 8)] = {
#include "assets/textures/place_title_cards/gRoadToFortressTitleCardFRATex.ia8.inc.c"
};
#endif

#endif
