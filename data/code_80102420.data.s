.include "macro.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purposee registers

.section .data

.align 4

glabel D_80134CF0
    .incbin "baserom.z64", 0xBABE90, 0x4

glabel D_80134CF4
    .incbin "baserom.z64", 0xBABE94, 0xC
