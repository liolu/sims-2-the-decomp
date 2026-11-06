/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern u8 data_0213d9b8;
extern s32 data_027e0000;
extern "C" void func_0204feec(u32 arg0, s32 arg1) {
    u32 temp_r5;
    s32 temp_r2;
    u32 var_r0;
    s32 bank;
    u8 *temp_r3;
    u32 temp_r4;
    s32 var_r1;
    var_r0 = arg0;
    if (var_r0 == 0xFFFF) {
        return;
    }
    temp_r4 = var_r0 + arg1;
    if (var_r0 >= temp_r4) {
        return;
    }
    bank = data_027e0000;
    do {
        temp_r5 = var_r0 >> 3;
        temp_r2 = var_r0 & 7;
        if ((temp_r2 == 0) && ((u32) (temp_r4 - var_r0) >= 8U)) {
            var_r1 = 0xFF;
            var_r0 += 8;
        } else {
            var_r1 = 1 << temp_r2;
            var_r0 += 1;
        }
        temp_r3 = &data_0213d9b8 + (bank << 7);
        temp_r3[temp_r5] &= ~var_r1;
    } while (var_r0 < temp_r4);
}
