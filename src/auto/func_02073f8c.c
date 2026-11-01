/* compiler: 2.0/sp1p5 -O4,s */
#include "m2c.h"

extern M2C_UNK data_0211f9d4;

s32 func_02073f8c(s32 arg0) {
    s32 var_r3;

    var_r3 = 0;
loop_1:
    if (arg0 == *((M2C_UNK *) ((s8 *) &data_0211f9d4 + (var_r3 * 4)))) {
        return var_r3;
    }
    var_r3 += 1;
    if (var_r3 >= 6) {
        return -1;
    }
    goto loop_1;
}
