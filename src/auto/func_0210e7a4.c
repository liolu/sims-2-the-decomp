#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_0210e7a4(void) {
    mov r3, #0xff000000
    cmp r3, r0, lsl #0x1
    movlo r0, #0x0
    bxlo lr
    cmp r3, r1, lsl #0x1
    movlo r0, #0x0
    bxlo lr
    mov r0, #0x1
    bx lr
}
// clang-format on
