.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

.align 4

glabel D_80AAECA0
    .incbin "baserom/ovl_En_Mm", 0x1530, 0x000001B0
