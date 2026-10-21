/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_021071c8();                                /* extern */
s32 func_021072e4();                                /* extern */

s32 func_0210730c(void) {
    s32 var_r4;

    var_r4 = 0;
    if (func_021071c8() != 0) {
        var_r4 = func_021072e4();
    }
    return var_r4;
}
