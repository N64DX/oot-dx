.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

glabel D_80885BF0
    .asciz "Curtain (arg_data 0x%04x)\n"
    .balign 4

glabel D_80885C0C
    .asciz "Error : object のタイプが設定されていない(%s %d)(arg_data 0x%04x)\n"
    .balign 4

glabel D_80885C50
    .asciz "../z_bg_hidan_curtain.c"
    .balign 4

glabel D_80885C68
    .asciz "Warning : object のセーブビットが設定されていない(%s %d)(arg_data 0x%04x)\n"
    .balign 4

glabel D_80885CB4
    .asciz "../z_bg_hidan_curtain.c"
    .balign 4

glabel D_80885CCC
    .asciz "../z_bg_hidan_curtain.c"
    .balign 4

glabel D_80885CE4
    .asciz "../z_bg_hidan_curtain.c"
    .balign 4

glabel D_80885CFC
    .asciz "../z_bg_hidan_curtain.c"
    .balign 4

.align 4

