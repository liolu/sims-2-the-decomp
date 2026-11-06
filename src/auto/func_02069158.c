#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_020667a4();
// clang-format off
asm void func_02069158(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_020667a4
}
// clang-format on
