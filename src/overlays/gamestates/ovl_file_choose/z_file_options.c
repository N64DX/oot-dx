#include "file_select.h"
#include "file_select_state.h"

#include "libu64/gfxprint.h"
#include "array_count.h"
#include "controller.h"
#include "gfx_setupdl.h"
#include "sfx.h"
#include "save.h"
#include "regs.h"

void FileSelectOptions_ToggleOption(FileSelectState* this, u8 index, u8 shift) {
    gFileOptions[gSaveContext.fileNum][index] ^= 1 << shift;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetDamageTaken(FileSelectState* this, u8 index, u8 shift) {
    SET_DAMAGE_TAKEN((DAMAGE_TAKEN + 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetRecoveryTaken(FileSelectState* this, u8 index, u8 shift) {
    SET_RECOVERY_TAKEN((RECOVERY_TAKEN + 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetHP(FileSelectState* this, u8 index, u8 shift) {
    if (shift == 5)
        SET_MONSTER_HP((MONSTER_HP + 1));
    else if (shift == 8)
        SET_ELITE_HP((ELITE_HP + 1));
    else SET_BOSS_HP((BOSS_HP + 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

char* FileSelectOptions_GetOption(FileSelectState* this, u8 index, u8 shift) {
    return ((gFileOptions[gSaveContext.fileNum][index] >> shift) & 1) ? "On" : "Off";
}

char* FileSelectOptions_GetDamageTaken(FileSelectState* this, u8 index, u8 shift) {
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

char* FileSelectOptions_GetRecoveryTaken(FileSelectState* this, u8 index, u8 shift) {
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

char* FileSelectOptions_GetHP(FileSelectState* this, u8 index, u8 shift) {
    switch ((gFileOptions[gSaveContext.fileNum][index] >> shift)  & 7) {
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

static FileSelectOptionsEntry sFileOptionsEntries[] = {
    { " 1: Mirror Mode",          FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        0, 0  },
    { " 2: Resume Last Area",     FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        0, 1  },
    { " 3: Censor Fire Temple",   FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        0, 2  },
    { " 4: Skip Intros",          FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        0, 3  },
    { " 5: No Owl",               FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        0, 4  },
    { " 6: Instant Put Away",     FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        0, 5  },
    { " 7: Remove Dungeon Texts", FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        0, 6  },
    { " 8: Bow Aiming Reticle",   FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        0, 7  },
    { " 9: No Low Health Beep",   FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        0, 8  },
    { "10: Damage Taken",         FileSelectOptions_SetDamageTaken,   FileSelectOptions_GetDamageTaken,   1, 0  },
    { "11: Recovery Taken",       FileSelectOptions_SetRecoveryTaken, FileSelectOptions_GetRecoveryTaken, 1, 0  },
    { "12: Monster Health",       FileSelectOptions_SetHP,            FileSelectOptions_GetHP,            1, 5  },
    { "13: Elite Monster Health", FileSelectOptions_SetHP,            FileSelectOptions_GetHP,            1, 8  },
    { "14: Boss Health",          FileSelectOptions_SetHP,            FileSelectOptions_GetHP,            1, 11 },
    { "15: Harder Enemies",       FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        1, 14 },
    { "16: Static Dark Link HP",  FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        1, 15 },
    { "17: No Bottled Fairies",   FileSelectOptions_ToggleOption,     FileSelectOptions_GetOption,        1, 16 },
};

void FileSelectOptions_UpdateMenu(FileSelectState* this) {
    Input* input = &this->state.input[0];
    s32 pad;
    FileSelectOptionsEntry* selectedEntry;

    if (this->verticalInputAccumulator == 0) {
        if (CHECK_BTN_ANY(input->press.button, BTN_A)) {
            selectedEntry = &this->entries[this->currentEntry];
            selectedEntry->setFunc(this, selectedEntry->index, selectedEntry->shift);
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
        GfxPrint_Printf(&printer, "%s", this->entries[title].getFunc(this, this->entries[title].index, this->entries[title].shift));
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
