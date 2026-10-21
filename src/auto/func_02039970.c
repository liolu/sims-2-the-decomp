/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02031efc(s32, M2C_UNK);                /* extern */

s32 func_02039970(void *arg0, s32 arg1, u8 *arg2) {
    M2C_UNK var_r1;

    switch (arg1) {                                 /* irregular */
        case 19:
            M2C_FIELD(arg0, u8 *, 0x34) = (u8) *arg2;
            return 0;
        case 1:
            M2C_FIELD(arg0, u8 *, 0x35) = (u8) *arg2;
            return 0;
        case 7:
            if (M2C_FIELD(arg0, u8 *, 0x35) == 0) {
                var_r1 = 1;
            } else {
                var_r1 = 0;
            }
            func_02031efc(M2C_FIELD(arg0, s32 *, 4), var_r1);
            return 0;
        default:
            return 0;
    }
}
