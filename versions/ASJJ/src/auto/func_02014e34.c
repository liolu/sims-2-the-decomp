#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02014d88();
// clang-format off
asm void func_02014e34(void) {
    ldr ip, =0xffffffe0
    add r0, r0, ip
    b func_02014d88
}
// clang-format on
