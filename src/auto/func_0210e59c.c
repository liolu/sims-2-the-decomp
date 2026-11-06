#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0210e59c(void) {
    mov r3, #0xff000000
    cmp r3, r0, lsl #0x1
    movlo r0, #0x0
    bxlo lr
    cmp r3, r1, lsl #0x1
    movlo r0, #0x0
    bxlo lr
    orr r3, r0, r1
    movs r3, r3, lsl #0x1
    moveq r0, #0x1
    bxeq lr
    cmp r0, r1
    moveq r0, #0x1
    movne r0, #0x0
    bx lr
}
// clang-format on
