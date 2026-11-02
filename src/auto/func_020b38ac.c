/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s8 *func_020b38ac(s32 arg0, s8 *arg1) {
    s32 var_r4;
    s32 var_lr;
    s32 var_r0;
    s8 *var_r1;
    u8 temp_r2;
    u8 temp_r3;

    var_r0 = arg0;
    var_r1 = arg1;
    var_r4 = 0;
    do {
        var_lr = 0;
    loop_2:
        temp_r3 = *(u8 *) (var_r0 + var_lr);
        temp_r2 = *(u8 *) (var_r0 + (var_lr + 1));
        var_lr += 2;
        *var_r1 = temp_r3 | (temp_r2 * 0x10);
        var_r1 += 1;
        if (var_lr < 0x30) {
            goto loop_2;
        }
        var_r4 += 1;
        var_r0 += 0x30;
    } while (var_r4 < 0x20);
    return var_r1;
}
