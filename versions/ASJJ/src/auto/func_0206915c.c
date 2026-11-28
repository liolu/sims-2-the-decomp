#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_02066c44();
// clang-format off
asm void func_0206915c(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_02066c44
}
// clang-format on
