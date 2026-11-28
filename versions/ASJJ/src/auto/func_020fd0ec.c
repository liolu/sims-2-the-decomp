/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fd10c();                                /* extern */
s32 func_020fd14c();                                /* extern */

s32 func_020fd0ec(void) {
    s32 temp_r4;

    temp_r4 = func_020fd14c();
    return (0x100 - temp_r4) - func_020fd10c();
}
