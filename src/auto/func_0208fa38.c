#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0208f6f8();
// clang-format off
asm void func_0208fa38(void) {
    ldr ip, =0xffffffe0
    add r0, r0, ip
    b func_0208f6f8
}
// clang-format on
