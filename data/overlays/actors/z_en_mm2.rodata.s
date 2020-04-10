.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

glabel D_80AAFB80
    .asciz "[36m マラソン 開始されていない \n[m\n"
    .balign 4

glabel D_80AAFBA8
    .asciz "../z_en_mm2.c"
    .balign 4

glabel D_80AAFBB8
    .asciz "((z_common_data.event_inf[1]) & (0x0001)) = %x\n"
    .balign 4

glabel D_80AAFBE8
    .asciz "../z_en_mm2.c"
    .balign 4

glabel D_80AAFBF8
    .asciz "../z_en_mm2.c"
    .balign 4

.align 4
