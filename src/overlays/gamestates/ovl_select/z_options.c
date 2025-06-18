/*
 * File: z_options.c
 * Overlay: ovl_select
 * Description: File Options Menu
 */

#include "libc64/qrand.h"
#include "libu64/gfxprint.h"
#include "alloca.h"
#include "array_count.h"
#include "file_select_state.h"
#include "controller.h"
#include "gfx.h"
#include "gfx_setupdl.h"
#include "file_options_state.h"
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

void FileOptions_SetMirrorMode() {
    SET_MIRROR_MODE;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileOptions_SetResumeLastArea() {
    SET_RESUME_LAST_AREA;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileOptions_SetCensorFireTemple() {
    SET_CENSOR_FIRE_TEMPLE;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileOptions_SetNoOwl() {
    SET_NO_OWL;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileOptions_SetDamageTaken() {
    SET_DAMAGE_TAKEN((DAMAGE_TAKEN + 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileOptions_SetRecoveryTaken() {
    SET_RECOVERY_TAKEN((RECOVERY_TAKEN + 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileOptions_SetMonsterHP() {
    SET_MONSTER_HP((MONSTER_HP + 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileOptions_SetEliteHP() {
    SET_ELITE_HP((ELITE_HP + 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileOptions_SetBossHP() {
    SET_BOSS_HP((BOSS_HP + 1));
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileOptions_SetHarderEnemies() {
    SET_HARDER_ENEMIES;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileOptions_SetFixedDarkLinkHP() {
    SET_FIXED_DARK_LINK_HP;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

void FileOptions_SetNoBottledFairies() {
    SET_NO_BOTTLED_FAIRIES;
    Audio_PlaySfxGeneral(NA_SE_IT_SWORD_IMPACT, &gSfxDefaultPos, 4, &gSfxDefaultFreqAndVolScale, &gSfxDefaultFreqAndVolScale, &gSfxDefaultReverb);
}

char* FileOptions_GetMirrorMode() {
    return MIRROR_MODE ? "On" : "Off";
}

char* FileOptions_GetResumeLastArea() {
    return RESUME_LAST_AREA ? "On" : "Off";
}

char* FileOptions_GetCensorFireTemple() {
    return CENSOR_FIRE_TEMPLE ? "On" : "Off";
}

char* FileOptions_GetNoOwl() {
    return NO_OWL ? "On" : "Off";
}

char* FileOptions_GetDamageTaken() {
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

char* FileOptions_GetRecoveryTaken() {
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

char* FileOptions_GetMonsterHP() {
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

char* FileOptions_GetEliteHP() {
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

char* FileOptions_GetBossHP() {
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

char* FileOptions_GetHarderEnemies() {
    return HARDER_ENEMIES ? "On" : "Off";
}

char* FileOptions_GetFixedDarkLinkHP() {
    return FIXED_DARK_LINK_HP ? "On" : "Off";
}

char* FileOptions_GetNoBottledFairies() {
    return NO_BOTTLED_FAIRIES ? "On" : "Off";
}

static FileOptionsEntry sFileOptionsEntries[] = {
    { "Mirror Mode",          FileOptions_SetMirrorMode,       FileOptions_GetMirrorMode       },
    { "Resume Last Area",     FileOptions_SetResumeLastArea,   FileOptions_GetResumeLastArea   },
    { "Censor Fire Temple",   FileOptions_SetCensorFireTemple, FileOptions_GetCensorFireTemple },
    { "No Owl",               FileOptions_SetNoOwl,            FileOptions_GetNoOwl            },
    { "Damage Taken",         FileOptions_SetDamageTaken,      FileOptions_GetDamageTaken      },
    { "Recovery Taken",       FileOptions_SetRecoveryTaken,    FileOptions_GetRecoveryTaken    },
    { "Monster Health",       FileOptions_SetMonsterHP,        FileOptions_GetMonsterHP        },
    { "Elite Monster Health", FileOptions_SetEliteHP,          FileOptions_GetEliteHP          },
    { "Boss Health",          FileOptions_SetBossHP,           FileOptions_GetBossHP           },
    { "Harder Enemies",       FileOptions_SetHarderEnemies,    FileOptions_GetHarderEnemies },
    { "Fixed Dark Link HP",   FileOptions_SetFixedDarkLinkHP,  FileOptions_GetFixedDarkLinkHP },
    { "No Bottled Fairies",   FileOptions_SetNoBottledFairies, FileOptions_GetNoBottledFairies },
};

void FileOptions_UpdateMenu(FileOptionsState* this) {
    Input* input = &this->state.input[0];
    s32 pad;
    FileOptionsEntry* selectedEntry;

    if (this->verticalInputAccumulator == 0) {
        if (CHECK_BTN_ALL(input->press.button, BTN_A)) {
            selectedEntry = &this->entries[this->currentEntry];
            selectedEntry->setFunc();
        }
        
        if (CHECK_BTN_ANY(input->press.button, BTN_B | BTN_START)) {
            Sram_WriteSave(&this->sramCtx);
            SET_NEXT_GAMESTATE(&this->state, FileSelect_Init, FileSelectState);
            this->state.running = false;
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

    dREG(80) = this->currentEntry;
    dREG(81) = this->topDisplayedEntry;
    dREG(82) = this->pageDownIndex;

    if (this->timerUp != 0)
        this->timerUp--;

    if (this->timerUp == 0)
        this->lockUp = false;

    if (this->timerDown != 0)
        this->timerDown--;

    if (this->timerDown == 0)
        this->lockDown = false;
}

void FileOptions_PrintMenu(FileOptionsState* this, GfxPrint* printer) {
    u16 title, i;

    GfxPrint_SetColor(printer, 255, 155, 150, 255);
    GfxPrint_SetPos(printer, 12, 2);
    GfxPrint_Printf(printer, "File %d Options", (gSaveContext.fileNum+1));

    for (i=0; i<(this->count >= 20 ? 20 : this->count); i++) {
        GfxPrint_SetPos(printer, 9, i + 4);

        title = (this->topDisplayedEntry + i + this->count) % this->count;
        if (title == this->currentEntry)
            GfxPrint_SetColor(printer, 255, 20, 20, 255);
        else  GfxPrint_SetColor(printer, 200, 200, 55, 255);

        GfxPrint_Printf(printer, "%s", this->entries[title].name);
        
        GfxPrint_SetPos(printer, 30, i + 4);
        GfxPrint_Printf(printer, "%s", this->entries[title].getFunc());
    };
    
    GfxPrint_SetColor(printer, 155, 55, 150, 255);
    GfxPrint_SetPos(printer, 22, 25);
}

void FileOptions_Draw(FileOptionsState* this) {
    GraphicsContext* gfxCtx = this->state.gfxCtx;
    GfxPrint* printer;

    OPEN_DISPS(gfxCtx, "../z_options.c", 1013);

    gSPSegment(POLY_OPA_DISP++, 0x00, NULL);
    Gfx_SetupFrame(gfxCtx, 0, 0, 0, 0);
    SET_FULLSCREEN_VIEWPORT(&this->view);
    View_Apply(&this->view, VIEW_ALL);
    
    Gfx_SetupDL_28Opa(gfxCtx);

    printer = alloca(sizeof(GfxPrint));
    GfxPrint_Init(printer);
    GfxPrint_Open(printer, POLY_OPA_DISP);
    FileOptions_PrintMenu(this, printer);
    POLY_OPA_DISP = GfxPrint_Close(printer);
    GfxPrint_Destroy(printer);
    
    CLOSE_DISPS(gfxCtx, "../z_options.c", 1037);
}

void FileOptions_Main(GameState* thisx) {
    FileOptionsState* this = (FileOptionsState*)thisx;

    FileOptions_UpdateMenu(this);
    FileOptions_Draw(this);
}

void FileOptions_Destroy(GameState* thisx) {
}

void FileOptions_Init(GameState* thisx) {
    FileOptionsState* this = (FileOptionsState*)thisx;

    this->state.main = FileOptions_Main;
    this->state.destroy = FileOptions_Destroy;
    this->entries = sFileOptionsEntries;
    this->topDisplayedEntry = 0;
    this->currentEntry = 0;
    this->pageDownIndex = 0;
    this->count = ARRAY_COUNT(sFileOptionsEntries);
    View_Init(&this->view, this->state.gfxCtx);
    this->view.flags = (VIEW_PROJECTION_ORTHO | VIEW_VIEWPORT);
    this->verticalInputAccumulator = 0;
    this->verticalInput = 0;
    this->timerUp = 0;
    this->timerDown = 0;
    this->lockUp = 0;
    this->lockDown = 0;

    if ((dREG(80) >= 0) && (dREG(80) < this->count)) {
        this->currentEntry = dREG(80);
        this->topDisplayedEntry = dREG(81);
        this->pageDownIndex = dREG(82);
    }

    R_UPDATE_RATE = 1;
}
