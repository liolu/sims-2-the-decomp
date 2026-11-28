/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fd354();                                /* extern */
s32 func_020fd39c();                                /* extern */
M2C_UNK func_020fd3f4();                            /* extern */
s32 func_020fd4c4(s32);                             /* extern */
M2C_UNK func_020fd718(M2C_UNK);                     /* extern */
s32 func_020fd9bc(M2C_UNK);                         /* extern */

s32 func_020fd920(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (func_020fd354() == 0) {
        return 0;
    }
    temp_r0_3 = func_020fd39c();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (func_020fd4c4(temp_r0_4) > 0) {
        do {

        } while (func_020fd9bc(0) != 0);
        temp_r0_2 = func_020fd39c();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_020fd718(1);
block_12:
    func_020fd3f4();
    do {
        func_020fd9bc(1);
        temp_r0 = func_020fd39c();
    } while (temp_r0 == 0);
    return temp_r0;
}
