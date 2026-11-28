/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020512c0(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_020519d8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020521e0(s32);                             /* extern */

void func_ov014_0214a710(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r4_2;
    s32 temp_r4_3;

    func_020519d8(3, 0, 0);
    temp_r4   = func_020512c0(arg1, 0x48, 0x4E, func_020521e0(0x7C6), 1);
    temp_r4_2 = func_020512c0(temp_r4, 0xB0, 0x4E, func_020521e0(0x7C7), 1);
    temp_r4_3 = func_020512c0(temp_r4_2, 0x48, 0x9E, func_020521e0(0x7C8), 1);
    func_020512c0(temp_r4_3, 0xB0, 0x9E, func_020521e0(0x7C9), 1);
}
