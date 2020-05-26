.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .data

.align 4

glabel Bg_Haka_InitVars
 .word 0x009D0100, 0x00000000, 0x00A20000, 0x00000168
.word BgHaka_Init
.word BgHaka_Destroy
.word BgHaka_Update
.word BgHaka_Draw
glabel D_8087BCF0
 .word 0xB0700000, 0x48500064, 0x00000000, 0x00000000

