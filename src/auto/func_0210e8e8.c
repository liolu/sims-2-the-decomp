#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0210e8e8(void) {
    mov ip, #0x200000
    cmn ip, r1, lsl #0x1
    bhs L_0210e93c
    cmn ip, r3, lsl #0x1
    bhs L_0210e958
L_0210e8fc:
    orrs ip, r3, r1
    bmi L_0210e918
    cmp r1, r3
    cmpeq r0, r2
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_0210e918:
    orr ip, r0, ip, lsl #0x1
    orrs ip, ip, r2
    moveq r0, #0x0
    bxeq lr
    cmp r3, r1
    cmpeq r2, r0
    movne r0, #0x1
    moveq r0, #0x0
    bx lr
L_0210e93c:
    movne r0, #0x1
    bxne lr
    cmp r0, #0x0
    movhi r0, #0x1
    bxhi lr
    cmn ip, r3, lsl #0x1
    blo L_0210e8fc
L_0210e958:
    movne r0, #0x1
    bxne lr
    cmp r2, #0x0
    movhi r0, #0x1
    bxhi lr
    b L_0210e8fc
}
// clang-format on
