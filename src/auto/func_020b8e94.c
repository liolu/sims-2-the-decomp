/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020444f8(u16);                         /* extern */
s32 func_020445a0(u16);                             /* extern */
s32 func_02046490();                                /* extern */
M2C_UNK func_020ee878(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
M2C_UNK func_020f0d40(s32, s32);                    /* extern */
s32 func_020f0d4c(s32, s32, M2C_UNK);               /* extern */
s32 func_020f1284(s32, M2C_UNK);                    /* extern */

void func_020b8e94(void *arg0, u16 arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r4;

    if ((arg3 != 1) && (M2C_FIELD(arg0, volatile s32 *, 0) != 0)) {
        func_020f0d40(func_02046490(), M2C_FIELD(arg0, volatile s32 *, 0));
        func_020444f8(M2C_FIELD(arg0, volatile u16 *, 4));
        M2C_FIELD(arg0, volatile s32 *, 0) = 0;
    }
    M2C_FIELD(arg0, volatile u16 *, 4) = arg1;
    temp_r4                            = func_020f1284(func_020445a0(arg1), 0);
    M2C_FIELD(arg0, volatile s32 *, 0) = func_020f0d4c(func_02046490(), temp_r4, arg2);
    func_020ee878(M2C_FIELD(arg0, volatile s32 *, 0), temp_r4, arg2, 0);
}
