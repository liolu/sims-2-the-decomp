/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_020db1a4(void *, s32);                 /* extern */
M2C_UNK func_020fd22c(s32, s32);                    /* extern */

void func_020db13c(void *arg0, s32 arg1) {
    s32 temp_r2;
    s32 var_r1;

    var_r1 = arg1;
    if (var_r1 < 0) {
        var_r1 = 0;
    } else if (var_r1 > 0x10000) {
        var_r1 = 0x10000;
    }
    M2C_FIELD(arg0, s32 *, 0x80) = var_r1;
    if (M2C_FIELD(arg0, s32 *, 0x78) == 1) {
        temp_r2 = var_r1 * 0x7F;
        func_020fd22c(1 << M2C_FIELD(arg0, s32 *, 0x88), (s32) (temp_r2 + ((u32) (temp_r2 >> 0xF) >> 0x10)) >> 0x10);
        return;
    }
    func_020db1a4(arg0, M2C_FIELD(arg0, s32 *, 0x7C));
}
