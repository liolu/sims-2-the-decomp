/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_020e47fc(s32, void *, s32, s32);       /* extern */
M2C_UNK func_020e490c(s32, void *, s32, s32);       /* extern */
M2C_UNK func_020e9afc(s32, void *, void *, s32, s32); /* extern */
M2C_UNK func_020e9c60(s32, void *, void *, s32, s32); /* extern */
M2C_UNK func_020e9dc4(s32, void *, s32);            /* extern */
M2C_UNK func_020e9ec8(s32, void *, s32);            /* extern */

void func_020ea3c8(s32 arg0, s32 arg1, void *arg2, void *arg3, s32 arg4) {
    s32 var_r5;
    s32 var_r4;
    s32 temp_r2;
    s32 temp_r1;

    var_r5 = M2C_FIELD(arg3, s32 *, 0);
    if (arg0 > (s32) (var_r5 * 4)) {
        var_r5 = arg0 >> 2;
        func_020e9ec8(var_r5, arg3, arg4);
    }
    var_r4 = M2C_FIELD(arg3, s32 *, 4);
    if (arg0 > (s32) (var_r4 * 4)) {
        var_r4 = arg0 >> 2;
        func_020e9dc4(var_r4, arg3, arg4 + (var_r5 * 4));
    }
    if (arg1 >= 0) {
        if (arg0 > 4) {
            func_020e9c60(arg0, arg2, arg3 + 8, var_r5, arg4);
            func_020e490c(arg0, arg2, var_r4, arg4 + (var_r5 * 4));
        } else if (arg0 == 4) {
            func_020e9c60(arg0, arg2, arg3 + 8, var_r5, arg4);
        }
        temp_r2                   = M2C_FIELD(arg2, s32 *, 4);
        temp_r1                   = M2C_FIELD(arg2, s32 *, 0);
        M2C_FIELD(arg2, s32 *, 0) = (s32) (temp_r1 + temp_r2);
        M2C_FIELD(arg2, s32 *, 4) = (s32) (temp_r1 - temp_r2);
        return;
    }
    M2C_FIELD(arg2, s32 *, 4) = (s32) ((s32) (M2C_FIELD(arg2, s32 *, 0) - M2C_FIELD(arg2, s32 *, 4)) >> 1);
    M2C_FIELD(arg2, s32 *, 0) = (s32) (M2C_FIELD(arg2, s32 *, 0) - M2C_FIELD(arg2, s32 *, 4));
    if (arg0 > 4) {
        func_020e47fc(arg0, arg2, var_r4, arg4 + (var_r5 * 4));
        func_020e9afc(arg0, arg2, arg3 + 8, var_r5, arg4);
        return;
    }
    if (arg0 != 4) {
        return;
    }
    func_020e9afc(arg0, arg2, arg3 + 8, var_r5, arg4);
}
