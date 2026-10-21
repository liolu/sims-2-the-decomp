/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02081f88(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    u8 var_r5;

    var_r5 = 0;
loop_1:
    temp_r4 = (var_r5 * 0x4C) + arg0;
    if ((M2C_FIELD(temp_r4, u8 *, 0xA41) != 0) && (arg1 == M2C_FIELD(temp_r4, s32 *, 0xA38))) {
        if (arg2 == -1) {
            return 1;
        }
        if (arg2 == M2C_FIELD(temp_r4, u16 *, 0xA3C)) {
            return 1;
        }
        goto block_7;
    }
block_7:
    var_r5 += 1;
    if ((u32) var_r5 >= 0xAU) {
        return 0;
    }
    goto loop_1;
}
