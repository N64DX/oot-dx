.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

.align 4

glabel D_80813020
    .incbin "baserom/ovl_file_choose", 0xF2E0, 0x000007E0
