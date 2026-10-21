/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020158f4(s32, u16);                    /* extern */
s32 func_02015914(s32, u8, u8, M2C_UNK);            /* extern */
s32 func_0204688c(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_020426f0(s32 arg0, void *arg1) {
    s32 var_r0;

    var_r0 = func_0204688c(0x20, 0, 4);
    if (var_r0 != 0) {
        var_r0 = func_02015914(var_r0, M2C_FIELD(arg1, u8 *, 2), M2C_FIELD(arg1, u8 *, 3), 1);
    }
    if (var_r0 == 0) {
        return;
    }
    func_020158f4(var_r0, M2C_FIELD(arg1, u16 *, 0));
}
