/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fae78(u16 *, s32);                  /* extern */
M2C_UNK func_020fcbdc(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020fcc70(s32, void *, M2C_UNK);        /* extern */
s32 func_02104d58(M2C_UNK, M2C_UNK);                /* extern */
void *func_02104e78();                              /* extern */
s32 func_02104e88(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_02104fdc(M2C_UNK, M2C_UNK);            /* extern */

s32 func_02105774(M2C_UNK arg0, u16 *arg1, s32 arg2, s32 arg3, u16 arg4) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r0 = func_02104d58(1, 2);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg1 == NULL) {
        return 6;
    }
    func_020fae78(arg1, *arg1 * 2);
    func_02104fdc(0xC, arg0);
    temp_r4                       = M2C_FIELD(func_02104e78(), void **, 0xC);
    M2C_FIELD(temp_r4, s16 *, 0)  = 0xC;
    M2C_FIELD(temp_r4, u16 **, 4) = arg1;
    if (arg2 != 0) {
        func_020fcc70(arg2, temp_r4 + 8, 0x18);
    } else {
        func_020fcbdc(temp_r4 + 8, 0, 0x18);
    }
    M2C_FIELD(temp_r4, s32 *, 0x20) = arg3;
    M2C_FIELD(temp_r4, u16 *, 0x26) = arg4;
    var_r0                          = func_02104e88(0xC, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
