#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208f5d0();
// clang-format off
asm void func_0208f910(void) {
    ldr ip, =0xffffffe0
    add r0, r0, ip
    b func_0208f5d0
}
// clang-format on
