#include "ultra64.h"
#include "z64.h"
#include "ovl_file_choose_all.h"
#include "assets/misc/link_animetion/link_animetion.h"
#include "assets/objects/gameplay_keep/gameplay_keep.h"

Vtx gNameEntryVtx[] = {
#include "assets/overlays/ovl_file_choose/gNameEntryVtx.vtx.inc"
};

s16 gCharPageHira[] = {
    10,
    15,
    20,
    25,
    30,
    35,
    40,
    45,
    48,
    53,
    56,
    62,
    61,
    11,
    16,
    21,
    26,
    31,
    36,
    41,
    223,
    49,
    223,
    57,
    223,
    223,
    12,
    17,
    22,
    27,
    32,
    37,
    42,
    46,
    50,
    54,
    58,
    63,
    228,
    13,
    18,
    23,
    28,
    33,
    38,
    43,
    223,
    51,
    223,
    59,
    223,
    231,
    14,
    19,
    24,
    29,
    34,
    39,
    44,
    47,
    52,
    55,
    60,
    64,
    232
};

s16 gCharPageKata[] = {
    90,
    95,
    100,
    105,
    110,
    115,
    120,
    125,
    128,
    133,
    136,
    142,
    141,
    91,
    96,
    101,
    106,
    111,
    116,
    121,
    223,
    129,
    223,
    137,
    223,
    223,
    92,
    97,
    102,
    107,
    112,
    117,
    122,
    126,
    130,
    134,
    138,
    143,
    228,
    93,
    98,
    103,
    108,
    113,
    118,
    123,
    223,
    131,
    223,
    139,
    223,
    231,
    94,
    99,
    104,
    109,
    114,
    119,
    124,
    127,
    132,
    135,
    140,
    144,
    232
};

s16 gCharPageEng[] = {
    171,
    172,
    173,
    174,
    175,
    176,
    177,
    178,
    179,
    180,
    181,
    182,
    183,
    184,
    185,
    186,
    187,
    188,
    189,
    190,
    191,
    192,
    193,
    194,
    195,
    196,
    197,
    198,
    199,
    200,
    201,
    202,
    203,
    204,
    205,
    206,
    207,
    208,
    209,
    210,
    211,
    212,
    213,
    214,
    215,
    216,
    217,
    218,
    219,
    220,
    221,
    222,
    1,
    2,
    3,
    4,
    5,
    6,
    7,
    8,
    9,
    0,
    234,
    228,
    223
};

s16 gNextCharPage[] = {
    0,
    1,
    2,
    1,
    0,
    2,
    0,
    2,
    1
};

Vtx gOptionsMenuHeadersVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuHeadersAllVtx.vtx.inc"
};

Vtx gOptionsMenuSettingsVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuSettingsAllVtx.vtx.inc"
};

Vtx gOptionsDividerSoundVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsDividerSoundAllVtx.vtx.inc"
};

Vtx gOptionsDividerZTargetVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsDividerZTargetAllVtx.vtx.inc"
};

Vtx gOptionsMenuLanguageVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsMenuLanguageAllVtx.vtx.inc"
};

Vtx gOptionsDividerLanguageVtx[] = {
#include "assets/overlays/ovl_file_choose/gOptionsDividerLanguageAllVtx.vtx.inc"
};
