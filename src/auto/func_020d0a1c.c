/* compiler: 1.2/sp2p3 -thumb */
#include "m2c.h"

s32 func_020d0a1c(u8 *arg0, s32 arg1, u32 arg2) {
    s32 temp_r7;
    s32 var_r5;
    s32 var_r4;
    s32 temp_r3;

    var_r5  = 0;
    var_r4  = 0;
    temp_r3 = arg1 & 0xF;
    if ((temp_r3 == 0) || (temp_r7 = arg1 & 0xF0, (temp_r7 == 0))) {
        var_r5 = 0x10;
        if ((arg1 &= 0xF0) == 0xF0) {
            var_r4 = 0xF;
        } else if (temp_r3 == 0xF) {
            var_r4 = -0xF;
        }
    } else if (temp_r3 == 0xF) {
        var_r4 = arg1 >> 4;
    } else if (temp_r7 == 0xF0) {
        var_r4 = 0 - temp_r3;
    }
    if (var_r4 != 0) {
        *arg0 += var_r4;
        if ((u32) *arg0 > arg2) {
            if (var_r4 < 0) {
                *arg0 = 0;
            } else {
                *arg0 = (u8) arg2;
            }
        }
    }
    return var_r5;
}
