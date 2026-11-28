/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fcf7c();                                /* extern */
s32 func_020fcfc4();                                /* extern */
M2C_UNK func_020fd01c();                            /* extern */
s32 func_020fd0ec(s32);                             /* extern */
M2C_UNK func_020fd340(M2C_UNK);                     /* extern */
s32 func_020fd5e4(M2C_UNK);                         /* extern */

s32 func_020fd548(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r0_4;

    if (func_020fcf7c() == 0) {
        return 0;
    }
    temp_r0_3 = func_020fcfc4();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    temp_r0_4 = arg0 & 1;
    if (temp_r0_4 == 0) {
        return 0;
    }
    if (func_020fd0ec(temp_r0_4) > 0) {
        do {

        } while (func_020fd5e4(0) != 0);
        temp_r0_2 = func_020fcfc4();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_020fd340(1);
block_12:
    func_020fd01c();
    do {
        func_020fd5e4(1);
        temp_r0 = func_020fcfc4();
    } while (temp_r0 == 0);
    return temp_r0;
}
