#include "m2c.h"

M2C_UNK func_020fd3a0(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_020fd6f4();                                /* extern */
M2C_UNK func_020fd7c4(s32);                         /* extern */
M2C_UNK func_020fd854(M2C_UNK);                     /* extern */

void func_020db788(void *arg0) {
    s32 temp_r4;
    s32 var_r0;

    var_r0 = 1 << M2C_FIELD(arg0, s32 *, 0x88);
    if (M2C_FIELD(arg0, s32 *, 0x78) == 2) {
        var_r0 |= 1 << M2C_FIELD(arg0, s32 *, 0x8C);
    }
    func_020fd3a0(var_r0, 0, 1 << M2C_FIELD(arg0, s32 *, 0x90), 0);
    temp_r4 = func_020fd6f4();
    func_020fd854(1);
    func_020fd7c4(temp_r4);
}
