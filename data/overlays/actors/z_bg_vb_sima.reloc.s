.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

.align 4

glabel D_808BE470
    .incbin "baserom/ovl_Bg_Vb_Sima", 0x710, 0x00000090
