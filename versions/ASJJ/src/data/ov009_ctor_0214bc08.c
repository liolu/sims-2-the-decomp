/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_ov009_0214bbf4[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_ov009_0214bc08[1] = {(u32) &__sinit_ov009_0214bbf4};
