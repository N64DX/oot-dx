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

void FileSelectOptions_SetHealthRecovery(FileSelectState* this, u8 index, u8 shift) {
    SET_HEALTH_RECOVERY((HEALTH_RECOVERY + 1));
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

void FileSelectGlobalOptions_ToggleOption(FileSelectState* this, u8 index, u8 shift) {
    gSaveContext.globalSettings ^= 1 << shift;
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

char* FileSelectOptions_GetHealthRecovery(FileSelectState* this, u8 index, u8 shift) {
    switch (HEALTH_RECOVERY) {
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
    switch ((gFileOptions[gSaveContext.fileNum][index] >> shift) & 7) {
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

char* FileSelectGlobalOptions_GetOption(FileSelectState* this, u8 index, u8 shift) {
    return ((gSaveContext.globalSettings >> shift) & 1) ? "On" : "Off";
}

static FileSelectOptionsEntry sFileOptionsEntries[] = {
    { 0, "Mirror Mode",            FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 0  },
    { 0, "Autosave",               FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 1  },
    { 0, "Agony Visual Icon",      FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 2  },
    { 0, "Extended Draw Distance", FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 3  },
    { 0, "No Letterboxing",        FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 4  },
    { 0, "Resume Last Area",       FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 5  },
#if !PLATFORM_IQUE
    { 0, "Disable Token Freeze",   FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 6  },
#endif
    { 0, "Censor Fire Temple",     FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 7  },
    { 0, "Skip Intros",            FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 8  },
    { 0, "No Owl",                 FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 9  },
    { 0, "Instant Put Away",       FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 10 },
    { 0, "Pull Sword Out",         FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 11 },
    { 0, "Shield In Front",        FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 12 },
    { 0, "No Disruptive Text",     FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 13 },
    { 0, "Bow Aiming Reticle",     FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 14 },
    { 0, "No Low Health Beep",     FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 15 },
    { 0, "Uninverted  Aiming",     FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 16 },
    { 0, "Fix Power Crouch Stab",  FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 17 },
    { 0, "Reflect Chest Contents", FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 18 },
    { 0, "Easier Fishing",         FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 19 },
    { 0, "Use MM Young Link",      FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 20 },
    { 0, "Use MM Bottles",         FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         0, 21 },
    { 0, "Health Recovery",        FileSelectOptions_SetHealthRecovery, FileSelectOptions_GetHealthRecovery, 1, 0  },
    { 0, "Damage Taken",           FileSelectOptions_SetDamageTaken,    FileSelectOptions_GetDamageTaken,    1, 2  },
    { 0, "Monster Health",         FileSelectOptions_SetHP,             FileSelectOptions_GetHP,             1, 5  },
    { 0, "Elite Monster Health",   FileSelectOptions_SetHP,             FileSelectOptions_GetHP,             1, 8  },
    { 0, "Boss Health",            FileSelectOptions_SetHP,             FileSelectOptions_GetHP,             1, 11 },
    { 0, "Harder Enemies",         FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         1, 14 },
    { 0, "Static Dark Link HP",    FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         1, 15 },
    { 0, "No Bottled Fairies",     FileSelectOptions_ToggleOption,      FileSelectOptions_GetOption,         1, 16 },
};

static FileSelectOptionsEntry sGlobalOptionsEntries[] = {
    { 0, "Skip Logo",  FileSelectGlobalOptions_ToggleOption, FileSelectGlobalOptions_GetOption, 0, 0 },
    { 0, "Debug Mode", FileSelectGlobalOptions_ToggleOption, FileSelectGlobalOptions_GetOption, 0, 1 },
    { 0, "Show RAM",   FileSelectGlobalOptions_ToggleOption, FileSelectGlobalOptions_GetOption, 0, 2 },
    { 0, "Show FPS",         FileSelectGlobalOptions_ToggleOption,  FileSelectGlobalOptions_GetOption, 0, 3 },
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
    gDPFillRectangle(POLY_OPA_DISP++, HIRES_MULTIPLY(24 + WS_SHIFT_HALF), HIRES_MULTIPLY(12), HIRES_MULTIPLY(298 + WS_SHIFT_HALF), HIRES_MULTIPLY(228));
    gDPPipeSync(POLY_OPA_DISP++);
    gDPSetCombineLERP(POLY_OPA_DISP++, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0, 0, 0, 0, PRIMITIVE, TEXEL0, 0, PRIMITIVE, 0);

    GfxPrint_Init(&printer);
    GfxPrint_Open(&printer, POLY_OPA_DISP);

    GfxPrint_SetColor(&printer, 255, 155, 150, 255);
    GfxPrint_SetPos(&printer, 12, 2);
    
    if (this->configMode == CM_OPTIONS_MENU)
        GfxPrint_Printf(&printer, "Global Options");
    else GfxPrint_Printf(&printer, "File %d Options", (gSaveContext.fileNum+1));

    for (i=0; i<(this->count < 20 ? this->count : 20); i++) {
        GfxPrint_SetPos(&printer, SCREEN_MODE <= 1 ? 4 : 3, i + 4);

        title = (this->topDisplayedEntry + i + this->count) % this->count;
        if (title == this->currentEntry)
            GfxPrint_SetColor(&printer, 255, 20, 20, 255);
        else  GfxPrint_SetColor(&printer, 200, 200, 55, 255);

        if (this->entries[title].number < 10)
            GfxPrint_Printf(&printer, " %d: %s", this->entries[title].number, this->entries[title].name);
        else GfxPrint_Printf(&printer, "%d: %s", this->entries[title].number, this->entries[title].name);

        GfxPrint_SetPos(&printer, SCREEN_MODE <= 1 ? 32 : 31, i + 4);
        GfxPrint_Printf(&printer, "%s", this->entries[title].getFunc(this, this->entries[title].index, this->entries[title].shift));
    };

    POLY_OPA_DISP = GfxPrint_Close(&printer);
    GfxPrint_Destroy(&printer);

    CLOSE_DISPS(gfxCtx, "../z_options.c", 1037);
}

void FileSelectOptions_Reset(FileSelectState* this) {
    u8 i;
    
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
    
    if (this->configMode == CM_OPTIONS_MENU) {
        this->entries = sGlobalOptionsEntries;
        this->count = ARRAY_COUNT(sGlobalOptionsEntries);
    } else {
       this->entries = sFileOptionsEntries;
        this->count = ARRAY_COUNT(sFileOptionsEntries); 
    }

    for (i=1; i<=this->count; i++)
        this->entries[i-1].number = i;
}
