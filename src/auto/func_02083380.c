#include "m2c.h"
extern s32 data_0213e56c;
void func_02083380(s32 arg0) {
    u8 var_r3;
    var_r3        = 0;
    data_0213e56c = arg0;
    do {
        *(s32 *) (arg0 + (var_r3 * 4)) = 0;
        var_r3 += 1;
    } while ((u32) var_r3 < 2U);
}
