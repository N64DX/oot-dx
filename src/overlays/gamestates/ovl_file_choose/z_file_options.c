#include "file_select.h"
#include "file_select_state.h"

#include "libc64/qrand.h"
#include "libu64/gfxprint.h"
#include "alloca.h"
#include "array_count.h"
#include "controller.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "gfxalloc.h"
#include "printf.h"
#include "regs.h"
#include "segment_symbols.h"
#include "seqcmd.h"
#include "sequence.h"
#include "sfx.h"
#include "terminal.h"
#include "translation.h"
#include "ultra64.h"
#include "play_state.h"
#include "save.h"
#include "sram.h"
#include "resolution.h"

void FileSelectOptions_SetMirrorMode(FileSelectState* this) {
    SET_MIRROR_MODE;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetResumeLastArea(FileSelectState* this) {
    SET_RESUME_LAST_AREA;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetCensorFireTemple(FileSelectState* this) {
    SET_CENSOR_FIRE_TEMPLE;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetNoOwl(FileSelectState* this) {
    SET_NO_OWL;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetDamageTaken(FileSelectState* this) {
    Input* input = &this->state.input[0];
    if (CHECK_BTN_ALL(input->press.button, BTN_A))
        SET_DAMAGE_TAKEN((DAMAGE_TAKEN + 1));
    else SET_DAMAGE_TAKEN((DAMAGE_TAKEN - 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetRecoveryTaken(FileSelectState* this) {
    Input* input = &this->state.input[0];
    if (CHECK_BTN_ALL(input->press.button, BTN_A))
        SET_RECOVERY_TAKEN((RECOVERY_TAKEN + 1));
    else SET_RECOVERY_TAKEN((RECOVERY_TAKEN - 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetMonsterHP(FileSelectState* this) {
    Input* input = &this->state.input[0];
    if (CHECK_BTN_ALL(input->press.button, BTN_A))
        SET_MONSTER_HP((MONSTER_HP + 1));
    else SET_MONSTER_HP((MONSTER_HP - 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetEliteHP(FileSelectState* this) {
    Input* input = &this->state.input[0];
    if (CHECK_BTN_ALL(input->press.button, BTN_A))
        SET_ELITE_HP((ELITE_HP + 1));
    else SET_ELITE_HP((ELITE_HP - 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetBossHP(FileSelectState* this) {
    Input* input = &this->state.input[0];
    if (CHECK_BTN_ALL(input->press.button, BTN_A))
        SET_BOSS_HP((BOSS_HP + 1));
    else SET_BOSS_HP((BOSS_HP - 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetHarderEnemies(FileSelectState* this) {
    SET_HARDER_ENEMIES;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetFixedDarkLinkHP(FileSelectState* this) {
    SET_FIXED_DARK_LINK_HP;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetNoBottledFairies(FileSelectState* this) {
    SET_NO_BOTTLED_FAIRIES;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

char* FileSelectOptions_GetMirrorMode(FileSelectState* this) {
    return MIRROR_MODE ? "On" : "Off";
}

char* FileSelectOptions_GetResumeLastArea(FileSelectState* this) {
    return RESUME_LAST_AREA ? "On" : "Off";
}

char* FileSelectOptions_GetCensorFireTemple(FileSelectState* this) {
    return CENSOR_FIRE_TEMPLE ? "On" : "Off";
}

char* FileSelectOptions_GetNoOwl(FileSelectState* this) {
    return NO_OWL ? "On" : "Off";
}

char* FileSelectOptions_GetDamageTaken(FileSelectState* this) {
    switch (DAMAGE_TAKEN) {
        case 1:
            return "2x";
        case 2:
            return "3x";
        case 3:
            return "4x";
        case 4:
            return "6x";
        case 5:
            return "8x";
        case 6:
            return "1/2x";
        case 7:
            return "1/4x";
        default:
            return "1x";
    }
}

char* FileSelectOptions_GetRecoveryTaken(FileSelectState* this) {
    switch (RECOVERY_TAKEN) {
        case 1:
            return "1/2x";
        case 2:
            return "1/4x";
        case 3:
            return "0x";
        default:
            return "1x";
    }
}

char* FileSelectOptions_GetMonsterHP(FileSelectState* this) {
    switch (MONSTER_HP) {
        case 1:
            return "1.5x";
        case 2:
            return "2x";
        case 3:
            return "2.5x";
        case 4:
            return "3x";
        case 5:
            return "4x";
        case 6:
            return "5x";
        case 7:
            return "1/2x";
        default:
            return "1x";
    }
}

char* FileSelectOptions_GetEliteHP(FileSelectState* this) {
    switch (ELITE_HP) {
        case 1:
            return "1.5x";
        case 2:
            return "2x";
        case 3:
            return "2.5x";
        case 4:
            return "3x";
        case 5:
            return "4x";
        case 6:
            return "5x";
        case 7:
            return "1/2x";
        default:
            return "1x";
    }
}

char* FileSelectOptions_GetBossHP(FileSelectState* this) {
    switch (BOSS_HP) {
        case 1:
            return "1.5x";
        case 2:
            return "2x";
        case 3:
            return "2.5x";
        case 4:
            return "3x";
        case 5:
            return "4x";
        case 6:
            return "5x";
        case 7:
            return "1/2x";
        default:
            return "1x";
    }
}

char* FileSelectOptions_GetHarderEnemies(FileSelectState* this) {
    return HARDER_ENEMIES ? "On" : "Off";
}

char* FileSelectOptions_GetFixedDarkLinkHP(FileSelectState* this) {
    return FIXED_DARK_LINK_HP ? "On" : "Off";
}

char* FileSelectOptions_GetNoBottledFairies(FileSelectState* this) {
    return NO_BOTTLED_FAIRIES ? "On" : "Off";
}

static FileSelectOptionsEntry sFileOptionsEntries[] = {
    { " 1: Mirror Mode",          FileSelectOptions_SetMirrorMode,       FileSelectOptions_GetMirrorMode       },
    { " 2: Resume Last Area",     FileSelectOptions_SetResumeLastArea,   FileSelectOptions_GetResumeLastArea   },
    { " 3: Censor Fire Temple",   FileSelectOptions_SetCensorFireTemple, FileSelectOptions_GetCensorFireTemple },
    { " 4: No Owl",               FileSelectOptions_SetNoOwl,            FileSelectOptions_GetNoOwl            },
    { " 5: Damage Taken",         FileSelectOptions_SetDamageTaken,      FileSelectOptions_GetDamageTaken      },
    { " 6: Recovery Taken",       FileSelectOptions_SetRecoveryTaken,    FileSelectOptions_GetRecoveryTaken    },
    { " 7: Monster Health",       FileSelectOptions_SetMonsterHP,        FileSelectOptions_GetMonsterHP        },
    { " 8: Elite Monster Health", FileSelectOptions_SetEliteHP,          FileSelectOptions_GetEliteHP          },
    { " 9: Boss Health",          FileSelectOptions_SetBossHP,           FileSelectOptions_GetBossHP           },
    { "10: Harder Enemies",       FileSelectOptions_SetHarderEnemies,    FileSelectOptions_GetHarderEnemies    },
    { "11: Fixed Dark Link HP",   FileSelectOptions_SetFixedDarkLinkHP,  FileSelectOptions_GetFixedDarkLinkHP  },
    { "12: No Bottled Fairies",   FileSelectOptions_SetNoBottledFairies, FileSelectOptions_GetNoBottledFairies },
};

void FileSelectOptions_UpdateMenu(FileSelectState* this) {
    Input* input = &this->state.input[0];
    s32 pad;
    FileSelectOptionsEntry* selectedEntry;

    if (this->verticalInputAccumulator == 0) {
        if (CHECK_BTN_ANY(input->press.button, BTN_A | BTN_B)) {
            selectedEntry = &this->entries[this->currentEntry];
            selectedEntry->setFunc(this);
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DUP) || input->rel.stick_y > 30) {
            if (this->lockUp == true)
                this->timerUp = 0;
            if (this->timerUp == 0) {
                this->timerUp = 20;
                this->lockUp = true;
                Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
                this->verticalInput = R_UPDATE_RATE;
            }
        }

        if (CHECK_BTN_ALL(input->cur.button, BTN_DUP) && this->timerUp == 0) {
            Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
            this->verticalInput = R_UPDATE_RATE * 3;
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DDOWN) || input->rel.stick_y < -30) {
            if (this->lockDown == true)
                this->timerDown = 0;
            if (this->timerDown == 0) {
                this->timerDown = 20;
                this->lockDown = true;
                Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
                this->verticalInput = -R_UPDATE_RATE;
            }
        }

        if (CHECK_BTN_ALL(input->cur.button, BTN_DDOWN) && (this->timerDown == 0)) {
            Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
            this->verticalInput = -R_UPDATE_RATE * 3;
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DLEFT) || CHECK_BTN_ALL(input->cur.button, BTN_DLEFT)) {
            Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
            this->verticalInput = R_UPDATE_RATE;
        }

        if (CHECK_BTN_ALL(input->press.button, BTN_DRIGHT) || CHECK_BTN_ALL(input->cur.button, BTN_DRIGHT)) {
            Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
            this->verticalInput = -R_UPDATE_RATE;
        }
    }

    this->verticalInputAccumulator += this->verticalInput;

    if (this->verticalInputAccumulator < -7) {
        this->verticalInput = 0;
        this->verticalInputAccumulator = 0;

        this->currentEntry++;
        this->currentEntry = (this->currentEntry + this->count) % this->count;

        if (this->currentEntry == ((this->topDisplayedEntry + this->count + (this->count >= 19 ? 19 : this->count-1)) % this->count)) {
            this->topDisplayedEntry++;
            this->topDisplayedEntry = (this->topDisplayedEntry + this->count) % this->count;
        }
    }

    if (this->verticalInputAccumulator > 7) {
        this->verticalInput = 0;
        this->verticalInputAccumulator = 0;

        if (this->currentEntry == this->topDisplayedEntry) {
            this->topDisplayedEntry -= 2;
            this->topDisplayedEntry = (this->topDisplayedEntry + this->count) % this->count;
        }

        this->currentEntry--;
        this->currentEntry = (this->currentEntry + this->count) % this->count;

        if (this->currentEntry == ((this->topDisplayedEntry + this->count) % this->count)) {
            this->topDisplayedEntry--;
            this->topDisplayedEntry = (this->topDisplayedEntry + this->count) % this->count;
        }
    }

    this->currentEntry = (this->currentEntry + this->count) % this->count;
    this->topDisplayedEntry = (this->topDisplayedEntry + this->count) % this->count;

    dREG(83) = this->currentEntry;
    dREG(84) = this->topDisplayedEntry;
    dREG(85) = this->pageDownIndex;

    if (this->timerUp != 0)
        this->timerUp--;

    if (this->timerUp == 0)
        this->lockUp = false;

    if (this->timerDown != 0)
        this->timerDown--;

    if (this->timerDown == 0)
        this->lockDown = false;
}

void FileSelectOptions_Draw(FileSelectState* this) {
    GraphicsContext* gfxCtx = this->state.gfxCtx;
    GfxPrint printer;
    Gfx* gfx;
    Gfx* gfxRef;
    u16 title, i;

    OPEN_DISPS(gfxCtx, "../z_options.c", 1013);

    Gfx_SetupDL_39Opa(gfxCtx);

    gDPSetRenderMode(POLY_OPA_DISP++, G_RM_XLU_SURF, G_RM_XLU_SURF2);
    gDPSetCombineMode(POLY_OPA_DISP++, G_CC_PRIMITIVE, G_CC_PRIMITIVE);
    gDPSetPrimColor(POLY_OPA_DISP++, 0, 0, 0, 0, 0, 220);
    gDPFillRectangle(POLY_OPA_DISP++, HIRES_MULTIPLY((24 + WS_SHIFT_HALF)), HIRES_MULTIPLY(12), HIRES_MULTIPLY((298 + WS_SHIFT_HALF)), HIRES_MULTIPLY(228));
    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetCombineLERP(POLY_OPA_DISP++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

    GfxPrint_Init(&printer);
    GfxPrint_Open(&printer, POLY_OPA_DISP);

    GfxPrint_SetColor(&printer, 255, 155, 150, 255);
    GfxPrint_SetPos(&printer, 12, 2);
    GfxPrint_Printf(&printer, "File %d Options", (gSaveContext.fileNum+1));

    for (i=0; i<(this->count >= 20 ? 20 : this->count); i++) {
        GfxPrint_SetPos(&printer, 4, i + 4);

        title = (this->topDisplayedEntry + i + this->count) % this->count;
        if (title == this->currentEntry)
            GfxPrint_SetColor(&printer, 255, 20, 20, 255);
        else  GfxPrint_SetColor(&printer, 200, 200, 55, 255);

        GfxPrint_Printf(&printer, "%s", this->entries[title].name);

        GfxPrint_SetPos(&printer, 30, i + 4);
        GfxPrint_Printf(&printer, "%s", this->entries[title].getFunc(this));
    };

    GfxPrint_SetColor(&printer, 155, 55, 150, 255);
    GfxPrint_SetPos(&printer, 22, 25);

    POLY_OPA_DISP = GfxPrint_Close(&printer);
    GfxPrint_Destroy(&printer);

    CLOSE_DISPS(gfxCtx, "../z_options.c", 1037);
}

void FileSelectOptions_Reset(FileSelectState* this) {
    this->topDisplayedEntry = 0;
    this->currentEntry = 0;
    this->pageDownIndex = 0;

    this->verticalInputAccumulator = 0;
    this->verticalInput = 0;
    this->timerUp = 0;
    this->timerDown = 0;
    this->lockUp = 0;
    this->lockDown = 0;

    if ((dREG(83) >= 0) && (dREG(83) < this->count)) {
        this->currentEntry = dREG(83);
        this->topDisplayedEntry = dREG(84);
        this->pageDownIndex = dREG(85);
    }
}

void FileSelectOptions_Init(FileSelectState* this) {
    this->entries = sFileOptionsEntries;
    this->count = ARRAY_COUNT(sFileOptionsEntries);

    FileSelectOptions_Reset(this);
}
