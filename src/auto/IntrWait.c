/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

// clang-format off
asm void IntrWait(void)
{
    swi 4
    bx lr
}
// clang-format on
