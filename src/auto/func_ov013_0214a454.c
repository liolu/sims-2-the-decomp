/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204ca70(u16);                             /* extern */
extern u8 data_ov013_0214adb8;

void func_ov013_0214a454(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r1;
    s32 temp_r7;
    u16 var_r6;
    u16 temp_r5;
    u16 var_r8;

    var_r8 = 0;
    do {
        temp_r1 = ((u16) (func_0204ca70(0xFFFDU) & 7) * 0xC) + arg0;
        if (M2C_FIELD(temp_r1, s32 *, 0x24) == -1) {
            var_r8 += 1;
            M2C_FIELD(temp_r1, s32 *, 0x24) = arg1;
        }
    } while ((u32) var_r8 < 3U);
    if (arg2 == 0) {
        return;
    }
    var_r6  = 0;
    temp_r5 = data_ov013_0214adb8 - 1;
    do {
        temp_r7 = (var_r6 * 0xC) + arg0;
        if (M2C_FIELD(temp_r7, s32 *, 0x24) == -1) {
            do {
            loop_8:
                temp_r0 = func_0204ca70(temp_r5);
                if (temp_r0 == M2C_FIELD(arg0, s32 *, 0xC8)) {
                    goto loop_8;
                }
            } while (temp_r0 == M2C_FIELD(arg0, s32 *, 0xCC));
            M2C_FIELD(temp_r7, s32 *, 0x24) = temp_r0;
        }
        var_r6 += 1;
    } while ((u32) var_r6 < 8U);
}
