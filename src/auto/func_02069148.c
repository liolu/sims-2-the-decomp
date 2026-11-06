#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066c30();
// clang-format off
asm void func_02069148(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_02066c30
}
// clang-format on
