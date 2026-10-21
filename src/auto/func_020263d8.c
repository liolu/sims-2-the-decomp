/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffabc8(s32, M2C_UNK, M2C_UNK);       /* extern */
s32 func_01ffaf28(s32, M2C_UNK, void *);            /* extern */
M2C_UNK func_02018af8(s32, M2C_UNK, s8 *, M2C_UNK); /* extern */

s32 func_020263d8(void *arg0, s32 arg1) {
    s8 sp0;

    if (arg1 == 2) {
        if (M2C_FIELD(arg0, u16 *, 0x10) != 9) {
            if (func_01ffaf28(M2C_FIELD(arg0, s32 *, 4) + 0xE0, 4, arg0) != 0) {
                func_01ffabc8(M2C_FIELD(arg0, s32 *, 4) + 0xE0, 4, 1);
            }
            sp0 = 1;
            func_02018af8(M2C_FIELD(arg0, s32 *, 4) + 0x128, 5, &sp0, 2);
            M2C_FIELD(arg0, s8 *, 0x13) = 1;
        }
        return 0;
    }
    return 0;
}
