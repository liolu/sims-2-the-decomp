#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02098a04();
// clang-format off
asm void func_02098e6c(void) {
    ldr ip, =0xffffffb4
    add r0, r0, ip
    b func_02098a04
}
// clang-format on
