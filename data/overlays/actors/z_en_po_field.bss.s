.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .bss

.align 4

glabel D_80AD76B0
 .space 0x40
glabel D_80AD76F0
 .space 0x10
glabel D_80AD7700
 .space 0x40

