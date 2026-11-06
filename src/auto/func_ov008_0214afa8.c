#include "m2c.h"

/* Uses instructions the compiler never generates: written in assembly. */
extern void func_ov008_0214a428();
// clang-format off
asm void func_ov008_0214afa8(void) {
    ldr ip, =0xffffffdc
    add r0, r0, ip
    b func_ov008_0214a428
}
// clang-format on
