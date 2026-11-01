/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"
void func_020de774(s8 *arg0, s16 *arg1, u32 arg2) {
    s16 *var_r1;
    s16 temp_r2;
    s8 *var_r0;
    u32 var_r3;
    var_r0 = arg0;
    var_r1 = arg1;
    var_r3 = arg2 >> 1;
    if (var_r3 == 0) {
        return;
    }
    do {
        temp_r2 = *var_r1;
        var_r1 += 1;
        var_r3 -= 1;
        *var_r0 = (temp_r2 >> 8) + 0x80;
        var_r0 += 1;
    } while (var_r3 != 0);
}
