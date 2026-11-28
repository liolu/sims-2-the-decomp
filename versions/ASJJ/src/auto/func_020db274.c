#include "m2c.h"

M2C_UNK func_020fce8c(s32, M2C_UNK, s32, M2C_UNK);  /* extern */
s32 func_020fd1e0();                                /* extern */
M2C_UNK func_020fd2b0(s32);                         /* extern */
M2C_UNK func_020fd340(M2C_UNK);                     /* extern */

void func_020db274(void *arg0) {
    s32 temp_r4;
    s32 var_r0;

    var_r0 = 1 << M2C_FIELD(arg0, s32 *, 0x88);
    if (M2C_FIELD(arg0, s32 *, 0x78) == 2) {
        var_r0 |= 1 << M2C_FIELD(arg0, s32 *, 0x8C);
    }
    func_020fce8c(var_r0, 0, 1 << M2C_FIELD(arg0, s32 *, 0x90), 0);
    temp_r4 = func_020fd1e0();
    func_020fd340(1);
    func_020fd2b0(temp_r4);
}
