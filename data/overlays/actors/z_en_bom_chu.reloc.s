.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

.align 4

glabel D_809C6DF0
    .incbin "baserom/ovl_En_Bom_Chu", 0x15C0, 0x00000170
