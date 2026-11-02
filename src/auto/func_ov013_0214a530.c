/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0204ca70(u16);                             /* extern */
M2C_UNK func_ov013_0214a454(s32, s32, M2C_UNK);     /* extern */
extern u8 data_ov013_0214adb8;

void func_ov013_0214a530(s32 arg0) {
    s32 temp_r1;
    s32 temp_r5;
    u16 var_r1;
    u8 temp_r5_2;

    var_r1 = 0;
    do {
        temp_r5                         = (var_r1 * 0xC) + arg0;
        M2C_FIELD(temp_r5, s32 *, 0x24) = -1;
        M2C_FIELD(temp_r5, s16 *, 0x28) = 0;
        M2C_FIELD(temp_r5, s16 *, 0x2A) = 0;
        M2C_FIELD(temp_r5, s8 *, 0x2C)  = 0;
        M2C_FIELD(temp_r5, s8 *, 0x2D)  = 0;
        var_r1 += 1;
        M2C_FIELD(temp_r5, s8 *, 0x2E) = 0;
    } while ((u32) var_r1 < 8U);
    temp_r5_2                    = data_ov013_0214adb8;
    M2C_FIELD(arg0, s32 *, 0xC8) = func_0204ca70((u16) (temp_r5_2 - 1));
    do {
        M2C_FIELD(arg0, s32 *, 0xCC) = func_0204ca70((u16) (temp_r5_2 - 1));
        temp_r1                      = M2C_FIELD(arg0, s32 *, 0xC8);
    } while (temp_r1 == M2C_FIELD(arg0, s32 *, 0xCC));
    func_ov013_0214a454(arg0, temp_r1, 0);
    func_ov013_0214a454(arg0, M2C_FIELD(arg0, s32 *, 0xCC), 1);
}
