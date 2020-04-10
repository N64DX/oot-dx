.include "macro.inc"

 # assembler directives
 .set noat      # allow manual use of $at
 .set noreorder # don't insert nops after branches
 .set gp=64     # allow use of 64-bit general purposee registers

.section .rodata

glabel D_80A08B70
    .asciz "\n\n"
    .balign 4

glabel D_80A08B74
    .asciz "[32m☆☆☆☆☆ デスマウンテンエンカウント２セットされました ☆☆☆☆☆ %d\n[m"
    .balign 4

glabel D_80A08BC4
    .asciz "\n\n"
    .balign 4

glabel D_80A08BC8
    .asciz "[32m☆☆☆☆☆ ガノンタワー脱出エンカウント２セットされました ☆☆☆☆☆ %d\n[m"
    .balign 4

glabel D_80A08C1C
    .asciz "[32m☆☆☆☆☆ 発生できません！ ☆☆☆☆☆\n[m"
    .balign 4

glabel D_80A08C4C
    .asciz "[32m☆☆☆☆☆ 発生できません！ ☆☆☆☆☆\n[m"
    .balign 4

glabel D_80A08C7C
    .asciz "[32m☆☆☆☆☆ 発生できません！ ☆☆☆☆☆\n[m"
    .balign 4

glabel D_80A08CAC
    .asciz "[32m☆☆☆☆☆ 発生できません！ ☆☆☆☆☆\n[m"
    .balign 4

glabel D_80A08CDC
    .asciz "[32m☆☆☆☆☆ 発生できません！ ☆☆☆☆☆\n\n[m"
    .balign 4

glabel D_80A08D10
    .asciz "../z_en_encount2.c"
    .balign 4

glabel D_80A08D24
    .asciz "../z_en_encount2.c"
    .balign 4

glabel D_80A08D38
    .asciz "../z_en_encount2.c"
    .balign 4

glabel D_80A08D4C
    .float 1500.0
    .balign 4

glabel D_80A08D50
 .word 0xC4A14000
glabel D_80A08D54
    .float 1500.0
    .balign 4

glabel D_80A08D58
 .word 0xC4A14000
glabel D_80A08D5C
 .word 0xC5714000
glabel D_80A08D60
    .float 0.005
    .balign 4

glabel D_80A08D64
 .word 0x3BE56042
glabel D_80A08D68
    .float 1.99000000954
    .balign 4

glabel D_80A08D6C
 .word 0x407F5C29
glabel D_80A08D70
    .float 0.8
    .balign 4

glabel D_80A08D74
    .float 0.3
    .balign 4

glabel D_80A08D78
    .float 1500.0
    .balign 4

glabel D_80A08D7C
 .word 0x3C8EFA35


