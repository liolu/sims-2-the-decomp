/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_02074368(s32 arg0) {
    u16 var_r3;
    u8 var_r2;

    var_r3 = 0;
    var_r2 = 0;
    do {
        if (M2C_FIELD((arg0 + (var_r2 * 2)), u8 *, 1) != 0) {
            var_r3 += 1;
        }
        var_r2 += 1;
    } while ((u32) var_r2 < 0x1EU);
    return var_r3;
}
