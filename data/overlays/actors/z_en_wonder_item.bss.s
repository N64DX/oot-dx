.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .bss

.align 4

glabel D_80B39010
 .space 0x70
glabel D_80B39080
 .space 0x70

