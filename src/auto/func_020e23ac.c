/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

s32 func_020e23ac(s32 arg0, u32 arg1, u32 arg2, s32 arg3) {
    u32 var_r2;

    var_r2 = arg2;
    if (var_r2 <= 8U) {
        var_r2 = 8;
    } else if (var_r2 < 0x10U) {
        var_r2 = 0x10;
    }
    return (((u32) (arg0 * var_r2) >> 3) + ((u32) (var_r2 * ((arg1 >> 3) * arg3)) >> 3) + 3) & ~3;
}
