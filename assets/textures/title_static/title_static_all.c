#include "ultra64.h"
#include "z64.h"
#include "title_static_all.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

u64 gFileSelHeadsetGERTex[] = {
#include "assets/textures/title_static/headset_ger.ia8.inc.c"
};

u64 gFileSelHeadsetFRATex[] = {
#include "assets/textures/title_static/headset_fra.ia8.inc.c"
};

u64 gFileSelSOUNDFRATex[] = {
#include "assets/textures/title_static/SOUND_fra.ia8.inc.c"
};

u64 gFileSelStereoFRATex[] = {
#include "assets/textures/title_static/stereo_fra.ia8.inc.c"
};

u64 gFileSelZTargetingGERTex[] = {
#include "assets/textures/title_static/z_targeting_ger.ia8.inc.c"
};

u64 gFileSelZTargetingFRATex[] = {
#include "assets/textures/title_static/z_targeting_fra.ia8.inc.c"
};

u64 gFileSelSwitchGERTex[] = {
#include "assets/textures/title_static/switch_ger.ia8.inc.c"
};

u64 gFileSelSwitchFRATex[] = {
#include "assets/textures/title_static/switch_fra.ia8.inc.c"
};

u64 gFileSelHoldGERTex[] = {
#include "assets/textures/title_static/hold_ger.ia8.inc.c"
};

u64 gFileSelHoldFRATex[] = {
#include "assets/textures/title_static/hold_fra.ia8.inc.c"
};

u64 gFileSelLanguageChoiceENGTex[] = {
#include "assets/textures/title_static/language_choice_eng.ia8.inc.c"
};

u64 gFileSelLanguageChoiceGERTex[] = {
#include "assets/textures/title_static/language_choice_ger.ia8.inc.c"
};

u64 gFileSelLanguageChoiceFRATex[] = {
#include "assets/textures/title_static/language_choice_fra.ia8.inc.c"
};

u64 gFileSelLanguageChoiceJPNTex[] = {
#include "assets/textures/title_static/language_choice_jpn.ia8.inc.c"
};

u64 gFileSelLanguageENGTex[] = {
#include "assets/textures/title_static/language_eng.ia8.inc.c"
};

u64 gFileSelLanguageGERTex[] = {
#include "assets/textures/title_static/language_ger.ia8.inc.c"
};

u64 gFileSelLanguageFRATex[] = {
#include "assets/textures/title_static/language_fra.ia8.inc.c"
};

u64 gFileSelENDButtonGERTex[] = {
#include "assets/textures/title_static/end_button_ger.ia16.inc.c"
};

u64 gFileSelENDButtonFRATex[] = {
#include "assets/textures/title_static/end_button_fra.ia16.inc.c"
};

u64 gFileSelOptionsButtonGERTex[] = {
#include "assets/textures/title_static/options_button_ger.ia16.inc.c"
};

u64 gFileSelNoFileToCopyGERTex[] = {
#include "assets/textures/title_static/no_file_to_copy_ger.ia8.inc.c"
};

u64 gFileSelNoFileToEraseGERTex[] = {
#include "assets/textures/title_static/no_file_to_erase_ger.ia8.inc.c"
};

u64 gFileSelNoEmptyFileGERTex[] = {
#include "assets/textures/title_static/no_empty_file_ger.ia8.inc.c"
};

u64 gFileSelFileEmptyGERTex[] = {
#include "assets/textures/title_static/file_empty_ger.ia8.inc.c"
};

u64 gFileSelFileInUseGERTex[] = {
#include "assets/textures/title_static/file_in_use_ger.ia8.inc.c"
};

u64 gFileSelCopyWhichFileGERTex[] = {
#include "assets/textures/title_static/which_file_1_ger.ia8.inc.c"
};

u64 gFileSelCopyToWhichFileGERTex[] = {
#include "assets/textures/title_static/copy_to_which_file_ger.ia8.inc.c"
};

u64 gFileSelAreYouSureGERTex[] = {
#include "assets/textures/title_static/are_you_sure_ger.ia8.inc.c"
};

u64 gFileSelFileCopiedGERTex[] = {
#include "assets/textures/title_static/file_copied_ger.ia8.inc.c"
};

u64 gFileSelPleaseSelectAFileGERTex[] = {
#include "assets/textures/title_static/please_select_a_file_ger.ia8.inc.c"
};

u64 gFileSelOpenThisFileGERTex[] = {
#include "assets/textures/title_static/open_this_file_ger.ia8.inc.c"
};

u64 gFileSelEraseWhichFileGERTex[] = {
#include "assets/textures/title_static/which_file_2_ger.ia8.inc.c"
};

u64 gFileSelAreYouSure2GERTex[] = {
#include "assets/textures/title_static/are_you_sure_ger_2.ia8.inc.c"
};

u64 gFileSelFileErasedGERTex[] = {
#include "assets/textures/title_static/file_erased_ger.ia8.inc.c"
};

u64 gFileSelOptionsGERTex[] = {
#include "assets/textures/title_static/options_ger.ia8.inc.c"
};

u64 gFileSelNameGERTex[] = {
#include "assets/textures/title_static/name_ger.ia8.inc.c"
};

u64 gFileSelControlsGERTex[] = {
#include "assets/textures/title_static/controls_ger.ia8.inc.c"
};

u64 gFileSelCopyButtonGERTex[] = {
#include "assets/textures/title_static/copy_button_ger.ia16.inc.c"
};

u64 gFileSelFile1ButtonGERTex[] = {
#include "assets/textures/title_static/file_1_button_ger.ia16.inc.c"
};

u64 gFileSelFile2ButtonGERTex[] = {
#include "assets/textures/title_static/file_2_button_ger.ia16.inc.c"
};

u64 gFileSelFile3ButtonGERTex[] = {
#include "assets/textures/title_static/file_3_button_ger.ia16.inc.c"
};

u64 gFileSelYesButtonGERTex[] = {
#include "assets/textures/title_static/yes_button_ger.ia16.inc.c"
};

u64 gFileSelEraseButtonGERTex[] = {
#include "assets/textures/title_static/erase_button_ger.ia16.inc.c"
};

u64 gFileSelQuitButtonGERTex[] = {
#include "assets/textures/title_static/quit_button_ger.ia16.inc.c"
};

u64 gFileSelNoFileToCopyFRATex[] = {
#include "assets/textures/title_static/no_file_to_copy_fra.ia8.inc.c"
};

u64 gFileSelNoFileToEraseFRATex[] = {
#include "assets/textures/title_static/no_file_to_erase_fra.ia8.inc.c"
};

u64 gFileSelNoEmptyFileFRATex[] = {
#include "assets/textures/title_static/no_empty_file_fra.ia8.inc.c"
};

u64 gFileSelFileEmptyFRATex[] = {
#include "assets/textures/title_static/file_empty_fra.ia8.inc.c"
};

u64 gFileSelFileInUseFRATex[] = {
#include "assets/textures/title_static/file_in_use_fra.ia8.inc.c"
};

u64 gFileSelCopyWhichFileFRATex[] = {
#include "assets/textures/title_static/which_file_1_fra.ia8.inc.c"
};

u64 gFileSelCopyToWhichFileFRATex[] = {
#include "assets/textures/title_static/copy_to_which_file_fra.ia8.inc.c"
};

u64 gFileSelAreYouSureFRATex[] = {
#include "assets/textures/title_static/are_you_sure_fra.ia8.inc.c"
};

u64 gFileSelFileCopiedFRATex[] = {
#include "assets/textures/title_static/file_copied_fra.ia8.inc.c"
};

u64 gFileSelPleaseSelectAFileFRATex[] = {
#include "assets/textures/title_static/please_select_a_file_fra.ia8.inc.c"
};

u64 gFileSelOpenThisFileFRATex[] = {
#include "assets/textures/title_static/open_this_file_fra.ia8.inc.c"
};

u64 gFileSelEraseWhichFileFRATex[] = {
#include "assets/textures/title_static/which_file_2_fra.ia8.inc.c"
};

u64 gFileSelAreYouSure2FRATex[] = {
#include "assets/textures/title_static/are_you_sure_fra_2.ia8.inc.c"
};

u64 gFileSelFileErasedFRATex[] = {
#include "assets/textures/title_static/file_erased_fra.ia8.inc.c"
};

u64 gFileSelNameFRATex[] = {
#include "assets/textures/title_static/name_fra.ia8.inc.c"
};

u64 gFileSelControlsFRATex[] = {
#include "assets/textures/title_static/controls_fra.ia8.inc.c"
};

u64 gFileSelCopyButtonFRATex[] = {
#include "assets/textures/title_static/copy_button_fra.ia16.inc.c"
};

u64 gFileSelFile1ButtonFRATex[] = {
#include "assets/textures/title_static/file_1_button_fra.ia16.inc.c"
};

u64 gFileSelFile2ButtonFRATex[] = {
#include "assets/textures/title_static/file_2_button_fra.ia16.inc.c"
};

u64 gFileSelFile3ButtonFRATex[] = {
#include "assets/textures/title_static/file_3_button_fra.ia16.inc.c"
};

u64 gFileSelYesButtonFRATex[] = {
#include "assets/textures/title_static/yes_button_fra.ia16.inc.c"
};

u64 gFileSelEraseButtonFRATex[] = {
#include "assets/textures/title_static/erase_button_fra.ia16.inc.c"
};

u64 gFileSelQuitButtonFRATex[] = {
#include "assets/textures/title_static/quit_button_fra.ia16.inc.c"
};
