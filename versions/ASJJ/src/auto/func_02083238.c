#include "m2c.h"
extern s32 data_0213e094;
void func_02083238(s32 arg0) {
    u8 var_r3;
    var_r3        = 0;
    data_0213e094 = arg0;
    do {
        *(s32 *) (arg0 + (var_r3 * 4)) = 0;
        var_r3 += 1;
    } while ((u32) var_r3 < 2U);
}
