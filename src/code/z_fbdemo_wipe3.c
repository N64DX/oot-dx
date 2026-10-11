#include "transition_wipe3.h"

#include "gfx.h"
#include "array_count.h"
#include "transition.h"
#include "transition_instances.h"

static u64 fbdemo_tex_000520[] = {
#include "assets/code/fbdemo_wipe3/tex_000520.i8.inc.c"
};

static u64 fbdemo_tex_000920[] = {
#include "assets/code/fbdemo_wipe3/tex_000920.i8.inc.c"
};

static u64 fbdemo_tex_000D20[] = {
#include "assets/code/fbdemo_wipe3/tex_000D20.i8.inc.c"
};

static u64 fbdemo_tex_001120[] = {
#include "assets/code/fbdemo_wipe3/tex_001120.i8.inc.c"
};

static u64 fbdemo_tex_001520[] = {
#include "assets/code/fbdemo_wipe3/tex_001520.i8.inc.c"
};

static Vtx sTransWipe3Vtx[] = {
#include "assets/code/fbdemo_wipe3/sTransWipe3Vtx.vtx.inc"
};

static Gfx sTransWipe3DL[] = {
#include "assets/code/fbdemo_wipe3/sTransWipe3DL.inc.c"
};

static u64* sTransWipe3Textures[] = {
    fbdemo_tex_000520, fbdemo_tex_000920, fbdemo_tex_000D20, fbdemo_tex_001120,
    fbdemo_tex_001520, fbdemo_tex_000520, fbdemo_tex_000520, fbdemo_tex_000520,
};

typedef enum TransitionWipe3Direction {
    /* 0 */ TRANS_WIPE3_DIR_IN,
    /* 1 */ TRANS_WIPE3_DIR_OUT
} TransitionWipe3Direction;

typedef enum TransitionWipe3Speed {
    /* 0 */ TRANS_WIPE3_SPEED_SLOW,
    /* 1 */ TRANS_WIPE3_SPEED_FAST
} TransitionWipe3Speed;

typedef enum TransitionWipe3Color {
    /* 0 */ TRANS_WIPE3_COLOR_BLACK,
    /* 1 */ TRANS_WIPE3_COLOR_WHITE,
    /* 2 */ TRANS_WIPE3_COLOR_GRAY
} TransitionWipe3Color;

#define TRANS3_GET_SPEED(type)      ((type) & 1)
#define TRANS3_GET_TEX_INDEX(type)  (((type) >> 1) & 7)
#define TRANS3_GET_COLOR(type)      (((type) >> 4) & 3)

void TransitionWipe3_Start(void* thisx) {
    TransitionWipe3* this = (TransitionWipe3*)thisx;

    this->isDone = false;
    this->curTexture = sTransWipe3Textures[this->texIndex % ARRAY_COUNTU(sTransWipe3Textures)];
    if (this->speedType == TRANS_WIPE3_SPEED_SLOW)
        this->wipeSpeed = 20;
    else this->wipeSpeed = 10;
    if (this->colorType == TRANS_WIPE3_COLOR_BLACK)
        this->color.rgba = RGBA8(0, 0, 0, 255);
    else if (this->colorType == TRANS_WIPE3_COLOR_WHITE)
        this->color.rgba = RGBA8(255, 255, 255, 255);
    else
        this->color.rgba = RGBA8(160, 160, 160, 255);
    if (this->dir != TRANS_WIPE3_DIR_IN)
        this->scrollY = 0;
    else this->scrollY = 500;
    guPerspective(&this->projection, &this->normal, 60.0f, 4.0f / 3.0f, 10.0f, 12800.0f, 1.0f);
    guLookAt(&this->lookAt, 0.0f, 0.0f, 400.0f, 0.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f);
}

void* TransitionWipe3_Init(void* thisx) {
    TransitionWipe3* this = (TransitionWipe3*)thisx;

    bzero(this, sizeof(TransitionWipe3));
    return this;
}

void TransitionWipe3_Destroy(void* thisx) {
}

void TransitionWipe3_Update(void* thisx, s32 updateRate) {
    TransitionWipe3* this = (TransitionWipe3*)thisx;

    if (this->dir != TRANS_WIPE3_DIR_IN) {
        this->scrollY += (this->wipeSpeed * 3) / updateRate;
        if (this->scrollY >= 500) {
            this->scrollY = 500;
            this->isDone = true;
        }
    } else {
        this->scrollY -= (this->wipeSpeed * 3) / updateRate;
        if (this->scrollY <= 0) {
            this->scrollY = 0;
            this->isDone = true;
        }
    }
}

void TransitionWipe3_Draw(void* thisx, Gfx** gfxP) {
    TransitionWipe3* this = (TransitionWipe3*)thisx;
    Gfx* gfx = *gfxP;
    Mtx* modelView = &this->modelView[this->frame];
    f32 scale = 14.8f;
    Gfx* texScroll;
    Color_RGBA8_u32* color;

    this->frame ^= 1;
    gDPPipeSync(gfx++);
    texScroll = Gfx_BranchTexScroll(&gfx, this->scrollX, this->scrollY, 16, 64);
    gSPSegment(gfx++, 0x09, texScroll);
    gSPSegment(gfx++, 0x08, this->curTexture);
    color = &this->color;
    gDPSetPrimColor(gfx++, 0, 0x80, color->r, color->g, color->b, color->a);
    gDPSetEnvColor(gfx++, color->r, color->g, color->b, color->a);
    gSPMatrix(gfx++, &this->projection, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_PROJECTION);
    gSPPerspNormalize(gfx++, this->normal);
    gSPMatrix(gfx++, &this->lookAt, G_MTX_NOPUSH | G_MTX_MUL | G_MTX_PROJECTION);
    if (scale != 1.0f) {
        guScale(modelView, scale, scale, 1.0f);
        gSPMatrix(gfx++, modelView, G_MTX_NOPUSH | G_MTX_LOAD | G_MTX_MODELVIEW);
    }
    gSPDisplayList(gfx++, sTransWipe3DL);
    gDPPipeSync(gfx++);
    *gfxP = gfx;
}

s32 TransitionWipe3_IsDone(void* thisx) {
    TransitionWipe3* this = (TransitionWipe3*)thisx;

    return this->isDone;
}

void TransitionWipe3_SetType(void* thisx, s32 type) {
    TransitionWipe3* this = (TransitionWipe3*)thisx;

    if (type & TC_SET_PARAMS) {
        this->speedType = TRANS3_GET_SPEED(type);
        this->texIndex = TRANS3_GET_TEX_INDEX(type);
        this->colorType = TRANS3_GET_COLOR(type);
    } else if (type == TRANS_INSTANCE_TYPE_FILL_OUT)
        this->dir = TRANS_WIPE3_DIR_OUT;
    else this->dir = TRANS_WIPE3_DIR_IN;
}

void TransitionWipe3_SetColor(void* thisx, u32 color) {
    TransitionWipe3* this = (TransitionWipe3*)thisx;

    this->color.rgba = color;
}
