/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200dc20(void *, M2C_UNK, s32);        /* extern */

void func_0200e950(void *arg0, u16 arg1, s32 arg2) {
    s32 var_r2;

    if ((arg2 == 0) && (M2C_FIELD(arg0, u16 *, 0x234) == arg1)) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x234) = arg1;
    if (arg1 == 0xFFFF) {
        return;
    }
    var_r2 = 0x796;
    if ((u32) arg1 >= 8U) {
        var_r2 = 0x798;
    } else if ((u32) arg1 > 3U) {
        var_r2 = 0x797;
    }
    func_0200dc20(arg0, 2, var_r2);
}
