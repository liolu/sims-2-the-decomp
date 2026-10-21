/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020fd490();                                /* extern */
s32 func_020fd4d8();                                /* extern */
M2C_UNK func_020fd530();                            /* extern */
s32 func_020fd600(s32);                             /* extern */
M2C_UNK func_020fd854(M2C_UNK);                     /* extern */
s32 func_020fdaf8(M2C_UNK);                         /* extern */

s32 func_020fda5c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (func_020fd490() == 0) {
        return 0;
    }
    temp_r0_3 = func_020fd4d8();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (func_020fd600(temp_r0_4) > 0) {
        do {

        } while (func_020fdaf8(0) != 0);
        temp_r0_2 = func_020fd4d8();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_020fd854(1);
block_12:
    func_020fd530();
    do {
        func_020fdaf8(1);
        temp_r0 = func_020fd4d8();
    } while (temp_r0 == 0);
    return temp_r0;
}
