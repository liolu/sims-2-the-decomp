/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204450c(u16);                         /* extern */
s32 func_020445b4(u16);                             /* extern */
s32 func_020464a4();                                /* extern */
M2C_UNK func_020ee364(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_020f082c(s32, s32);                    /* extern */
s32 func_020f0838(s32, s32, M2C_UNK);               /* extern */
s32 func_020f0d70(s32, M2C_UNK);                    /* extern */

void func_020b89c8(void *arg0, u16 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r4;

    if ((arg3 != 1) && (M2C_FIELD(arg0, volatile s32 *, 0) != 0)) {
        func_020f082c(func_020464a4(), M2C_FIELD(arg0, volatile s32 *, 0));
        func_0204450c(M2C_FIELD(arg0, volatile u16 *, 4));
        M2C_FIELD(arg0, volatile s32 *, 0) = 0;
    }
    M2C_FIELD(arg0, volatile u16 *, 4) = arg1;
    temp_r4                            = func_020f0d70(func_020445b4(arg1), 0);
    M2C_FIELD(arg0, volatile s32 *, 0) = func_020f0838(func_020464a4(), temp_r4, arg2);
    func_020ee364(M2C_FIELD(arg0, volatile s32 *, 0), temp_r4, arg2, 0);
}
