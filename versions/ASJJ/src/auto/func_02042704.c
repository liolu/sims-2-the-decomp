/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020158ec(s32, u16);                    /* extern */
s32 func_0201590c(s32, u8, u8, M2C_UNK);            /* extern */
s32 func_020468a0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

void func_02042704(s32 arg0, void *arg1) {
    s32 var_r0;

    var_r0 = func_020468a0(0x20, 0, 4);
    if (var_r0 != 0) {
        var_r0 = func_0201590c(var_r0, M2C_FIELD(arg1, u8 *, 2), M2C_FIELD(arg1, u8 *, 3), 1);
    }
    if (var_r0 == 0) {
        return;
    }
    func_020158ec(var_r0, M2C_FIELD(arg1, u16 *, 0));
}
