.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

glabel D_80A66800
    .asciz "this->race.rider != NULL"
    .balign 4

glabel D_80A6681C
    .asciz "../z_en_horse.c"
    .balign 4

glabel D_80A6682C
    .asciz "../z_en_horse.c"
    .balign 4

glabel D_80A6683C
    .asciz "../z_en_horse.c"
    .balign 4

glabel D_80A6684C
 .word 0x414CCCCD
glabel D_80A66850
 .word 0x414CCCCD
glabel D_80A66854
 .word 0x47AFC800
glabel D_80A66858
    .float 0.8
    .balign 4

glabel D_80A6685C
 .word 0x3EF0A3D7
glabel D_80A66860
 .word 0x3EF0A3D7
glabel D_80A66864
    .float 0.4
    .balign 4

glabel D_80A66868
    .float 0.4
    .balign 4

glabel D_80A6686C
 .word 0x3F707379
glabel D_80A66870
    .float 0.7
    .balign 4

glabel D_80A66874
    .float 0.008
    .balign 4

glabel D_80A66878
 .word 0x7E967699
glabel D_80A6687C
 .word 0x41411EB8
glabel D_80A66880
 .word 0x3D75C28F
glabel D_80A66884
 .word 0x3C97B426
glabel D_80A66888
    .float 0.01
    .balign 4

glabel D_80A6688C
 .word 0x38021CC8
glabel D_80A66890
 .word 0x400CCCCD, 0x00000000
glabel D_80A66898
 .word 0x3FE6A090, 0x2DE00D1B
glabel D_80A668A0
 .word 0x3FE6A090, 0x2DE00D1B
glabel D_80A668A8
 .word 0x3FE6A090, 0x2DE00D1B
glabel D_80A668B0
 .word 0x3FE6A090, 0x2DE00D1B
glabel D_80A668B8
 .word 0x3D75C28F
glabel D_80A668BC
 .word 0x3D75C28F
glabel D_80A668C0
    .float 0.01
    .balign 4

glabel D_80A668C4
 .word 0x3D75C28F
glabel D_80A668C8
    .float 0.3
    .balign 4

glabel D_80A668CC
    .float 0.6
    .balign 4

glabel D_80A668D0
    .float 0.01
    .balign 4

glabel D_80A668D4
    .float 0.01
    .balign 4

glabel D_80A668D8
    .float 0.01
    .balign 4

glabel D_80A668DC
    .float 0.01
    .balign 4

glabel D_80A668E0
 .word 0x46FFFE00
glabel D_80A668E4
 .word 0x46FFFE00
glabel D_80A668E8
 .word 0xC6FFFE00
glabel D_80A668EC
 .word 0x46FFFE00
glabel D_80A668F0
    .float 0.3
    .balign 4

glabel D_80A668F4
    .float 0.2
    .balign 4

glabel D_80A668F8
    .float 0.2
    .balign 4

glabel D_80A668FC
    .float 0.3
    .balign 4

glabel D_80A66900
    .float 0.3
    .balign 4

glabel D_80A66904
    .float 0.3
    .balign 4

glabel D_80A66908
    .float 0.01
    .balign 4

glabel D_80A6690C
    .float 0.01
    .balign 4

glabel D_80A66910
    .float 0.01
    .balign 4

glabel D_80A66914
    .float 0.3
    .balign 4

glabel D_80A66918
    .float 0.3
    .balign 4

glabel D_80A6691C
    .float 0.3
    .balign 4

glabel D_80A66920
    .float 0.4
    .balign 4

glabel D_80A66924
    .float 0.4
    .balign 4

glabel D_80A66928
    .float 0.2
    .balign 4

glabel D_80A6692C
    .float 0.2
    .balign 4

glabel D_80A66930
    .float 0.4
    .balign 4

glabel D_80A66934
 .word 0x3EF0A3D7
glabel D_80A66938
    .float 0.4
    .balign 4

glabel D_80A6693C
 .word 0x3EF0A3D7
glabel D_80A66940
    .float 0.3
    .balign 4

glabel D_80A66944
    .float 0.1
    .balign 4

glabel D_80A66948
    .float 0.01
    .balign 4

glabel D_80A6694C
 .word 0x4242CCCD
glabel D_80A66950
 .word 0xBECCCCCD
glabel D_80A66954
 .word 0x38000100
glabel D_80A66958
 .word 0x3F51B3F3
glabel D_80A6695C
 .word 0x4622F983
glabel D_80A66960
 .word 0x38000100
glabel D_80A66964
 .word 0x3F51B3F3
glabel D_80A66968
 .word 0x45FFF800
glabel D_80A6696C
 .word 0x4622F983
glabel D_80A66970
 .word 0x38000100
glabel D_80A66974
 .word 0x4622F983
glabel D_80A66978
 .word 0x3F350481
glabel D_80A6697C
 .word 0xBE99999A
glabel D_80A66980
 .word 0x414CCCCD
glabel D_80A66984
 .word 0x4622F983
glabel D_80A66988
 .word 0x38000100
glabel D_80A6698C
 .word 0x38000100
glabel D_80A66990
 .word 0x38000100
glabel D_80A66994
 .word 0x3F51B3F3
glabel D_80A66998
 .word 0x38000100
glabel D_80A6699C
 .word 0x3F51B3F3
glabel D_80A669A0
 .word 0x415CCCCD
glabel D_80A669A4
 .word 0x415CCCCD
glabel D_80A669A8
    .float 0.1
    .balign 4

glabel D_80A669AC
 .word 0x3F5DB3D7
glabel D_80A669B0
 .word 0xBF5DB3D7
glabel D_80A669B4
 .word 0x43F00001
glabel D_80A669B8
 .word 0x44E38000
glabel D_80A669BC
    .float 0.025
    .balign 4

glabel D_80A669C0
 .word 0x3E31D0D4
glabel D_80A669C4
    .float 0.6
    .balign 4

glabel D_80A669C8
    .float 0.7
    .balign 4

glabel D_80A669CC
    .float 0.7
    .balign 4

glabel D_80A669D0
    .float 0.7
    .balign 4

glabel D_80A669D4
    .float 0.7
    .balign 4

glabel D_80A669D8
 .word 0x3D70F0F1
glabel D_80A669DC
    .float 0.04
    .balign 4



