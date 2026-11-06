#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0210eb04(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0210eb58
    cmn ip, r3, lsl #0x1
    bhs L_0210eb74
L_0210eb18:
    orrs ip, r3, r1
    bmi L_0210eb34
    cmp r1, r3
    cmpeq r0, r2
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_0210eb34:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x1
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movls r0, #0x1
    movhi r0, #0x0
    bx lr
L_0210eb58:
    movne r0, #0x0
    bxne lr
    cmp r0, #0x0
    movhi r0, #0x0
    bxhi lr
    cmn ip, r3, lsl #0x1
    blo L_0210eb18
L_0210eb74:
    movne r0, #0x0
    bxne lr
    cmp r2, #0x0
    movhi r0, #0x0
    bxhi lr
    b L_0210eb18
}
// clang-format on
