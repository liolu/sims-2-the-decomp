#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020667b8();
// clang-format off
asm void func_0206916c(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_020667b8
}
// clang-format on
