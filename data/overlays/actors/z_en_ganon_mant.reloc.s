.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

.align 4

glabel D_80A27EF0
    .incbin "baserom/ovl_En_Ganon_Mant", 0x4190, 0x00000110
