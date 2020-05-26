.include "macro.inc"

# assembler directives
.set noat      # allow manual use of $at
.set noreorder # don't insert nops after branches
.set gp=64     # allow use of 64-bit general purposee registers

.section .data

.align 4

glabel D_80134D20
    .incbin "baserom.z64", 0xBABEC0, 0x10
