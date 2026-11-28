#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
// clang-format off
asm void func_02001394(void) {
    cmp r2, #0x0
L_02001398:
    beq L_02001398
    mov ip, #0x10
    cmp ip, #0x10
L_020013a4:
    bne L_020013a4
}
// clang-format on
