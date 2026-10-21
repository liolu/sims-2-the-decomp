/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020fbea0();                                /* extern */
M2C_UNK func_020fbeb4(s32);                         /* extern */
s32 func_020fbecc();                                /* extern */
M2C_UNK func_020fbee0(s32);                         /* extern */

s32 func_020f9df8(s32 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 var_r4;

    if (arg0 != M2C_FIELD(arg1, u16 *, 4)) {
        return -2;
    }
    if (arg3 != 0) {
        var_r4 = func_020fbecc();
    } else {
        var_r4 = func_020fbea0();
    }
    M2C_FIELD(arg1, u16 *, 4) = 0U;
    if (arg2 != NULL) {
        arg2();
    }
    M2C_FIELD(arg1, s32 *, 0) = 0;
    if (arg3 != 0) {
        func_020fbee0(var_r4);
    } else {
        func_020fbeb4(var_r4);
    }
    return 0;
}
