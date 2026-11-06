/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef unsigned char u8;

s32 func_ov010_0214ecfc(void *, s32, s32);

s32 func_ov010_0214ee58(u8 *arg0, s32 *arg1, s32 arg2) {
    u8 temp_r3;
    s32 sp0;
    s32 sp4;
    s32 temp_r0;
    s32 var_r0;
    s32 var_r5;
    s32 var_r4;
    u8 temp_r1;
    u8 *var_r2;
    u8 *var_r8;
    u8 *var_r7;
    u8 *pb;

    temp_r3 = arg0[0x1E6];
    sp0     = 0;
    var_r5  = 0;
    var_r4  = 0;
    var_r2  = arg0;
    var_r0  = 3;
    sp4     = 6;
    do {
        temp_r1 = var_r2[0x15A];
        var_r2 += 0x28;
        if (temp_r1 > var_r5) {
            var_r0 = var_r4;
            var_r5 = temp_r1;
        }
        var_r4 += 1;
    } while (var_r4 < 3);
    if (var_r0 != temp_r3 && var_r0 < 3) {
        pb     = arg0 + 0x159;
        var_r5 = 0;
        var_r4 = 0;
        var_r8 = arg0 + var_r0;
        var_r7 = arg0 + temp_r3;
        do {
            if (var_r8[0x53] > var_r5 && var_r7[0x53] < 2U && var_r4 != (u32) (*(pb + temp_r3 * 0x28) << 0x1C) >> 0x1C) {
                temp_r0 = func_ov010_0214ecfc(arg0, var_r4, arg2);
                if (temp_r0 < 0x36) {
                    *arg1  = temp_r0;
                    var_r5 = var_r8[0x53];
                    sp4    = var_r4;
                }
            }
            var_r4 += 1;
            var_r8 += 0x2C;
            var_r7 += 0x2C;
        } while (var_r4 < 6);
        if (sp4 < 6) {
            sp0 = 1;
        }
    }
    return sp0;
}
