#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208d1b8();
// clang-format off
asm void func_0208d2e8(void) {
    ldr ip, =0xffffffe0
    add r0, r0, ip
    b func_0208d1b8
}
// clang-format on
