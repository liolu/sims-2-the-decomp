/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fd4e4();                                /* extern */
s32 func_020fd524();                                /* extern */

s32 func_020fd4c4(void) {
    s32 temp_r4;

    temp_r4 = func_020fd524();
    return (0x100 - temp_r4) - func_020fd4e4();
}
