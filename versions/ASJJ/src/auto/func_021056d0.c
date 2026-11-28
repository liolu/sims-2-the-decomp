/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_021048ec();                                /* extern */
s32 func_02104974(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02104ac8(M2C_UNK, M2C_UNK);            /* extern */

s32 func_021056d0(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_021048ec();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02104ac8(1, arg0);
    var_r0 = func_02104974(1, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
