#include "file_select.h"
#include "file_select_state.h"

#include "libu64/gfxprint.h"
#include "array_count.h"
#include "controller.h"
#include "gfx_setupdl.h"
#include "sfx.h"
#include "save.h"
#include "regs.h"

#define SET_OPTION(option, shift, max) (option = (option & ~(max << shift)) | (((((option >> shift) & max) + 1) & max) << shift))
#define CLEAR_OPTION(option, shift, max) (option = (option & ~(max << shift)))

void FileSelectOptions_ToggleOption(FileSelectState* this, u8 index, u8 shift, u8 permanentFlag) {
    if (permanentFlag == NO_OPTION_FLAG || gSaveContext.gameProgress == GAME_PROGRESS_NOT_STARTED)
        this->fileOptions[gSaveContext.fileNum][index] ^= 1 << shift;
    else this->fileOptions[gSaveContext.fileNum][index] &= ~(1 << shift);
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetOptionMax3(FileSelectState* this, u8 index, u8 shift, u8 permanentFlag) {
    if (permanentFlag == NO_OPTION_FLAG || gSaveContext.gameProgress == GAME_PROGRESS_NOT_STARTED)
        SET_OPTION(this->fileOptions[gSaveContext.fileNum][index], shift, 3);
    else CLEAR_OPTION(this->fileOptions[gSaveContext.fileNum][index], shift, 3);
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectOptions_SetOptionMax7(FileSelectState* this, u8 index, u8 shift, u8 permanentFlag) {
    if (permanentFlag == NO_OPTION_FLAG || gSaveContext.gameProgress == GAME_PROGRESS_NOT_STARTED)
        SET_OPTION(this->fileOptions[gSaveContext.fileNum][index], shift, 7);
    else CLEAR_OPTION(this->fileOptions[gSaveContext.fileNum][index], shift, 3);
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectGlobalOptions_ToggleOption(FileSelectState* this, u8 index, u8 shift, u8 permanentFlag) {
    gSaveContext.globalSettings ^= 1 << shift;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileSelectGlobalOptions_ToggleSaveSlotsOption(FileSelectState* this, u8 index, u8 shift, u8 permanentFlag) {
    gSaveContext.globalSettings ^= 1 << shift;
    if (EXTRA_SAVE_SLOTS)
        Sram_EraseBackupSaves(this, &this->sramCtx);
    this->doRefresh = true;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

char* FileSelectOptions_GetOption(FileSelectState* this, u8 index, u8 shift) {
    return ((this->fileOptions[gSaveContext.fileNum][index] >> shift) & 1) ? "On" : "Off";
}

char* FileSelectOptions_GetHealthRecovery(FileSelectState* this, u8 index, u8 shift) {
    switch ((this->fileOptions[gSaveContext.fileNum][index] >> shift) & 3) {
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

char* FileSelectOptions_GetDamageTaken(FileSelectState* this, u8 index, u8 shift) {
    switch ((this->fileOptions[gSaveContext.fileNum][index] >> shift) & 7) {
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

char* FileSelectOptions_GetHP(FileSelectState* this, u8 index, u8 shift) {
    switch ((this->fileOptions[gSaveContext.fileNum][index] >> shift) & 7) {
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

char* FileSelectOptions_GetShieldDurability(FileSelectState* this, u8 index, u8 shift) {
    switch ((this->fileOptions[gSaveContext.fileNum][index] >> shift) & 3) {
        case 1:
            return "33%";
        case 2:
            return "66%";
        case 3:
            return "100%";
        default:
            return "Off";
    }
}

char* FileSelectOptions_GetHUDDisplay(FileSelectState* this, u8 index, u8 shift) {
    switch ((this->fileOptions[gSaveContext.fileNum][index] >> shift) & 3) {
        case 1:
            return "Lite";
        case 2:
            return "Pro";
        case 3:
            return "Hide";
        default:
            return "Full";
    }
}

char* FileSelectOptions_GetTimerSpeed(FileSelectState* this, u8 index, u8 shift) {
    switch ((this->fileOptions[gSaveContext.fileNum][index] >> shift) & 3) {
        case 1:
            return "1x";
        case 2:
            return "3x";
        case 3:
            return "5x";
        default:
            return "Off";
    }
}

char* FileSelectGlobalOptions_GetOption(FileSelectState* this, u8 index, u8 shift) {
    return ((gSaveContext.globalSettings >> shift) & 1) ? "On" : "Off";
}

static FileSelectOptionsEntry sFileOptionsEntries[] = {
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 2, 0,  PERMANENT_FLAG, "Timer Challenge",        FileSelectOptions_SetOptionMax3, FileSelectOptions_GetTimerSpeed       },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 0,  NO_OPTION_FLAG, "Mirror Mode",            FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 1,  NO_OPTION_FLAG, "Autosave",               FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 2,  NO_OPTION_FLAG, "Agony Visual Icon",      FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 4,  NO_OPTION_FLAG, "No Letterboxing",        FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 5,  NO_OPTION_FLAG, "Resume Last Area",       FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_NO_IQUE    | SHOW_OPTION_ALL_QUESTS, 0, 6,  NO_OPTION_FLAG, "Disable Token Freeze",   FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 7,  NO_OPTION_FLAG, "Fire Temple",            FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 8,  NO_OPTION_FLAG, "Skip Intros",            FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 9,  NO_OPTION_FLAG, "No Owl",                 FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 10, NO_OPTION_FLAG, "Instant Put Away",       FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 11, NO_OPTION_FLAG, "Pull Sword Out",         FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 12, NO_OPTION_FLAG, "Shield In Front",        FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 13, NO_OPTION_FLAG, "No Disruptive Text",     FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 14, NO_OPTION_FLAG, "Bow Aiming Reticle",     FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 15, NO_OPTION_FLAG, "No Low Health Beep",     FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 16, NO_OPTION_FLAG, "Uninverted  Aiming",     FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 17, NO_OPTION_FLAG, "Fix Useful Glitches",    FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 18, NO_OPTION_FLAG, "Reflect Chest Contents", FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 19, NO_OPTION_FLAG, "Easier Fishing",         FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 20, NO_OPTION_FLAG, "Use MM Young Link",      FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 21, NO_OPTION_FLAG, "Jump Animations",        FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 22, NO_OPTION_FLAG, "Use MM Bottles",         FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_NO_IQUE    | SHOW_OPTION_NO_CQ,      0, 23, NO_OPTION_FLAG, "Use MM Title Cards",     FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 24, NO_OPTION_FLAG, "Use MM HUD",             FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_NO_CQ,      0, 25, NO_OPTION_FLAG, "Use MM Pause Info",      FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 26, NO_OPTION_FLAG, "Unequip Items",          FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 27, NO_OPTION_FLAG, "HUD Display",            FileSelectOptions_SetOptionMax3, FileSelectOptions_GetHUDDisplay        },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 1, 0,  NO_OPTION_FLAG, "Health Recovery",        FileSelectOptions_SetOptionMax3, FileSelectOptions_GetHealthRecovery   },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 1, 2,  NO_OPTION_FLAG, "Damage Taken",           FileSelectOptions_SetOptionMax7, FileSelectOptions_GetDamageTaken      },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 1, 5,  NO_OPTION_FLAG, "Monster Health",         FileSelectOptions_SetOptionMax7, FileSelectOptions_GetHP               },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 1, 8,  NO_OPTION_FLAG, "Elite Monster Health",   FileSelectOptions_SetOptionMax7, FileSelectOptions_GetHP               },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 1, 11, NO_OPTION_FLAG, "Boss Health",            FileSelectOptions_SetOptionMax7, FileSelectOptions_GetHP               },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 1, 14, NO_OPTION_FLAG, "Harder Enemies",         FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 1, 15, NO_OPTION_FLAG, "Static Dark Link HP",    FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 1, 16, NO_OPTION_FLAG, "No Bottled Fairies",     FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 1, 17, NO_OPTION_FLAG, "No Item Drops",          FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 1, 18, NO_OPTION_FLAG, "Shield Durability",      FileSelectOptions_SetOptionMax3, FileSelectOptions_GetShieldDurability },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 2, 2,  NO_OPTION_FLAG, "Infinite Health",        FileSelectOptions_ToggleOption,  FileSelectOptions_GetOption           },
};

static FileSelectOptionsEntry sGlobalOptionsEntries[] = {
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 0, NO_OPTION_FLAG, "Skip Logo",              FileSelectGlobalOptions_ToggleOption,          FileSelectGlobalOptions_GetOption },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 1, NO_OPTION_FLAG, "Debug Mode",             FileSelectGlobalOptions_ToggleOption,          FileSelectGlobalOptions_GetOption },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 2, NO_OPTION_FLAG, "Show RAM",               FileSelectGlobalOptions_ToggleOption,          FileSelectGlobalOptions_GetOption },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 3, NO_OPTION_FLAG, "Show FPS",               FileSelectGlobalOptions_ToggleOption,          FileSelectGlobalOptions_GetOption },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 4, NO_OPTION_FLAG, "Extra Save Slots",       FileSelectGlobalOptions_ToggleSaveSlotsOption, FileSelectGlobalOptions_GetOption },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 5, NO_OPTION_FLAG, "Extended Draw Distance", FileSelectGlobalOptions_ToggleOption,          FileSelectGlobalOptions_GetOption },
    { SHOW_OPTION_ALL_BUILDS | SHOW_OPTION_ALL_QUESTS, 0, 6, NO_OPTION_FLAG, "Show Stars",             FileSelectGlobalOptions_ToggleOption,          FileSelectGlobalOptions_GetOption },
};

void FileSelectOptions_UpdateMenu(FileSelectState* this) {
    Input* input = &this->state.input[0];
    s32 pad;
    FileSelectOptionsEntry* selectedEntry;

    if (this->verticalInputAccumulator == 0) {
        if (CHECK_BTN_ANY(input->press.button, BTN_A)) {
            selectedEntry = &this->entries[this->currentEntry];
            selectedEntry->setFunc(this, selectedEntry->index, selectedEntry->shift, selectedEntry->permanentFlag);
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
    gDPFillRectangle(POLY_OPA_DISP++, X_HIRES_MULTIPLY(24 + WS_SHIFT_HALF), HIRES_MULTIPLY(12), X_HIRES_MULTIPLY(298 + WS_SHIFT_HALF), HIRES_MULTIPLY(228));
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
        GfxPrint_SetPos(&printer, 4 - WS_PX_SHIFT, i + 4);

        title = (this->topDisplayedEntry + i + this->count) % this->count;
        
        if (this->entries[title].permanentFlag != NO_OPTION_FLAG) {
            if (title == this->currentEntry)
                GfxPrint_SetColor(&printer, 255, 55, 55, 255);
            else GfxPrint_SetColor(&printer, 55, 200, 100, 255);
        } else {
            if (title == this->currentEntry)
                GfxPrint_SetColor(&printer, 255, 20, 20, 255);
            else GfxPrint_SetColor(&printer, 200, 200, 55, 255);
        }

        if (this->entries[title].number < 10)
            GfxPrint_Printf(&printer, " %d: %s", this->entries[title].number, this->entries[title].name);
        else GfxPrint_Printf(&printer, "%d: %s", this->entries[title].number, this->entries[title].name);

        GfxPrint_SetPos(&printer, 32 - WS_PX_SHIFT, i + 4);
        GfxPrint_Printf(&printer, "%s", this->entries[title].getFunc(this, this->entries[title].index, this->entries[title].shift));
    };
    
    if (this->configMode == CM_OPTIONS_MENU && EXTRA_SAVE_SLOTS) {
        GfxPrint_SetColor(&printer, 255, 20, 20, 255);
        GfxPrint_SetPos(&printer, 12 - WS_PX_SHIFT , 21);
        GfxPrint_Printf(&printer, "!!! WARNING !!!");
        GfxPrint_SetPos(&printer, 4 - WS_PX_SHIFT , 23);
        GfxPrint_Printf(&printer, "Extra save slots will be");
        GfxPrint_SetPos(&printer, 4 - WS_PX_SHIFT, 24);
        GfxPrint_Printf(&printer, "erased when playing non-DX ROMs");
    }

    POLY_OPA_DISP = GfxPrint_Close(&printer);
    GfxPrint_Destroy(&printer);

    CLOSE_DISPS(gfxCtx, "../z_options.c", 1037);
}

static FileSelectOptionsEntry sFileOptionsBuffer[ARRAY_COUNT(sFileOptionsEntries)];

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
        u8 questMode = this->questMode[this->buttonIndex];
        u8 isChildQuestMode = (questMode == CHILD_QUEST || questMode == CHILD_MASTER_QUEST ||  questMode == CHILD_URA_QUEST || questMode == DUNGEON_CHILD_RUSH);
        this->entries = sFileOptionsBuffer;
        this->count = 0;

        for (i=0; i<ARRAY_COUNT(sFileOptionsEntries); i++) {
            if ((GET_OPTION_QUESTS(i) == SHOW_OPTION_NO_CQ && isChildQuestMode) || (GET_OPTION_QUESTS(i) == SHOW_OPTION_ONLY_CQ && !isChildQuestMode) || (GET_OPTION_BUILDS(i) == SHOW_OPTION_NO_IQUE && PLATFORM_IQUE))
                continue;
            this->entries[this->count++] = sFileOptionsEntries[i];
        }
    }

    for (i=1; i<=this->count; i++)
        this->entries[i-1].number = i;
}
