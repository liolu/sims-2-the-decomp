/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov000_0214a370(u8 *arg0, s32 arg1, s32 arg2) {
    u8 *var_r5;
    s32 *var_r4;
    u32 var_lr;
    s32 var_ip;
    u32 var_r3;
    s32 var_r2;
    u8 temp_r0;

    var_r5 = arg0 + 0x120 + (arg2 << 0xB) + (arg1 * 8);
    var_r4 = (s32 *) ((u8 *) M2C_FIELD(arg0, u8 **, 0xC9E0) + ((arg1 + (arg2 << 5)) << 5));
    var_lr = 0;
    do {
        var_ip = 0;
        var_r3 = 0;
        var_r2 = 0;
    loop_2:
        temp_r0 = *var_r5;
        if ((u32) temp_r0 >= 0xC0U) {
            var_ip |= (temp_r0 - 0xB9) << var_r2;
        } else if (temp_r0 != 0) {
            var_ip |= (((u32) temp_r0 >> 5) + 1) << var_r2;
        }
        var_r3 += 1;
        var_r5 += 1;
        var_r2 += 4;
        if (var_r3 < 8U) {
            goto loop_2;
        }
        var_lr += 1;
        *var_r4 = var_ip;
        var_r4  = (s32 *) ((u8 *) var_r4 + 4);
        var_r5 += 0xF8;
    } while (var_lr < 8U);
}
