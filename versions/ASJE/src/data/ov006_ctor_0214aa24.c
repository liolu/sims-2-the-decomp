/* compiler: 2.0/sp1p5 */
#include "m2c.h"

extern u8 __sinit_ov006_0214a99c[];
#pragma define_section TABLE ".ctor"    \
                             ".ctor" RW
__declspec(TABLE) u32 data_ov006_0214aa24[1] = {(u32) &__sinit_ov006_0214a99c};
