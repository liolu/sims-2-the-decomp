/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02044480(u16);                         /* extern */
s32 func_02044528(u16);                             /* extern */
s32 func_02046418();                                /* extern */
M2C_UNK func_020ee73c(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_020f0c04(s32, s32);                    /* extern */
s32 func_020f0c10(s32, s32, M2C_UNK);               /* extern */
s32 func_020f1148(s32, M2C_UNK);                    /* extern */

void func_020b8dcc(void *arg0, u16 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r4;

    if ((arg3 != 1) && (M2C_FIELD(arg0, volatile s32 *, 0) != 0)) {
        func_020f0c04(func_02046418(), M2C_FIELD(arg0, volatile s32 *, 0));
        func_02044480(M2C_FIELD(arg0, volatile u16 *, 4));
        M2C_FIELD(arg0, volatile s32 *, 0) = 0;
    }
    M2C_FIELD(arg0, volatile u16 *, 4) = arg1;
    temp_r4                            = func_020f1148(func_02044528(arg1), 0);
    M2C_FIELD(arg0, volatile s32 *, 0) = func_020f0c10(func_02046418(), temp_r4, arg2);
    func_020ee73c(M2C_FIELD(arg0, volatile s32 *, 0), temp_r4, arg2, 0);
}
