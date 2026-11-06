#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0210e858(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0210e8b4
    cmn ip, r3, lsl #0x1
    bhs L_0210e8d0
L_0210e86c:
    orrs ip, r3, r1
    bmi L_0210e88c
    cmp r1, r3
    cmpeq r0, r2
    moveq r0, #0x0
    movlo r0, #0x1
    movhi r0, #0x2
    bx lr
L_0210e88c:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    moveq r0, #0x0
    movlo r0, #0x1
    movhi r0, #0x2
    bx lr
L_0210e8b4:
    movne r0, #0x3
    bxne lr
    cmp r0, #0x0
    movhi r0, #0x3
    bxhi lr
    cmn ip, r3, lsl #0x1
    blo L_0210e86c
L_0210e8d0:
    movne r0, #0x3
    bxne lr
    cmp r2, #0x0
    movhi r0, #0x3
    bxhi lr
    b L_0210e86c
}
// clang-format on
