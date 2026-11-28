/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_ov008_0214ab30[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_ov008_0214abb8[1] = {(u32) &__sinit_ov008_0214ab30};
