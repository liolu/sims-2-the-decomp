/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

// clang-format off
asm void IsDebugger(void)
{
    swi 0xf
    bx lr
}
// clang-format on
