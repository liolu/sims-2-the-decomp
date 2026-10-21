/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031efc(s32, M2C_UNK);                /* extern */

s32 func_0203a2bc(void *arg0, s32 arg1, u8 *arg2) {
    M2C_UNK var_r1;

    switch (arg1) {                                 /* irregular */
        case 7:
            if (M2C_FIELD(arg0, u8 *, 0x2D) == 0) {
                var_r1 = 1;
            } else {
                var_r1 = 0;
            }
            func_02031efc(M2C_FIELD(arg0, s32 *, 4), var_r1);
            return 0;
        case 19:
            M2C_FIELD(arg0, u8 *, 0x2C) = (u8) *arg2;
            return 0;
        case 1:
            M2C_FIELD(arg0, u8 *, 0x2D) = (u8) *arg2;
            return 0;
        case 29:
            M2C_FIELD(arg0, u8 **, 0x30) = arg2;
            return 0;
        case 18:
            M2C_FIELD(arg0, s8 *, 0x13) = 1;
            return 0;
        default:
            return 0;
    }
}
