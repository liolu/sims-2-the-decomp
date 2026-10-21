/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020fd620();                                /* extern */
s32 func_020fd660();                                /* extern */

s32 func_020fd600(void) {
    s32 temp_r4;

    temp_r4 = func_020fd660();
    return (0x100 - temp_r4) - func_020fd620();
}
