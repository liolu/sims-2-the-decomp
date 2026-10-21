/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02064644(s32 arg0, s32 arg1) {
    s32 var_r0;

    var_r0 = 1;
    if (!((1 << (arg1 & 0x1F)) & M2C_FIELD((arg0 + ((arg1 >> 5) * 4)), s32 *, 0x4814))) {
        var_r0 = 0;
    }
    return var_r0;
}
