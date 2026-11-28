/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fbd64();                                /* extern */
M2C_UNK func_020fbd78(s32);                         /* extern */
s32 func_020fbd90();                                /* extern */
M2C_UNK func_020fbda4(s32);                         /* extern */

s32 func_020f9cbc(s32 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 var_r4;

    if (arg0 != M2C_FIELD(arg1, u16 *, 4)) {
        return -2;
    }
    if (arg3 != 0) {
        var_r4 = func_020fbd90();
    } else {
        var_r4 = func_020fbd64();
    }
    M2C_FIELD(arg1, u16 *, 4) = 0U;
    if (arg2 != NULL) {
        arg2();
    }
    M2C_FIELD(arg1, s32 *, 0) = 0;
    if (arg3 != 0) {
        func_020fbda4(var_r4);
    } else {
        func_020fbd78(var_r4);
    }
    return 0;
}
