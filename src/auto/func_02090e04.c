#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02090934();
// clang-format off
asm void func_02090e04(void) {
    ldr ip, =0xffffffb4
    add r0, r0, ip
    b func_02090934
}
// clang-format on
