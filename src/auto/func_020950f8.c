#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02094d70();
// clang-format off
asm void func_020950f8(void) {
    ldr ip, =0xffffffe0
    add r0, r0, ip
    b func_02094d70
}
// clang-format on
