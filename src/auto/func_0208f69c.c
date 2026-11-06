#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208f324();
// clang-format off
asm void func_0208f69c(void) {
    ldr ip, =0xffffffb4
    add r0, r0, ip
    b func_0208f324
}
// clang-format on
