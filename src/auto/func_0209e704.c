#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_0209cc28();
// clang-format off
asm void func_0209e704(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_0209cc28
}
// clang-format on
