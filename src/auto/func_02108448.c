/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02107d04(M2C_UNK, M2C_UNK, s32, s32);      /* extern */

s32 func_02108448(s32 arg0, M2C_UNK arg1, s32 arg2) {
    s32 var_r5;

    var_r5 = arg0;
    if (arg2 != func_02107d04(arg1, 1, arg2, var_r5)) {
        var_r5 = 0;
    }
    return var_r5;
}
