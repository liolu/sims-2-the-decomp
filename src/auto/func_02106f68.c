/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02104d58(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
s32 func_02104e88(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_02104fdc(M2C_UNK, M2C_UNK);            /* extern */

s32 func_02106f68(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02104d58(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02104fdc(0x21, arg0);
    var_r0 = func_02104e88(0x21, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
