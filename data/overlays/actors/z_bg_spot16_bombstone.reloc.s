.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

.align 4

glabel D_808B6270
    .incbin "baserom/ovl_Bg_Spot16_Bombstone", 0x1640, 0x000001D0
