/* compiler: 1.2/sp2p3 */
#include "m2c.h"
s32 func_02044580(s32);
M2C_UNK func_02046270(M2C_UNK, s32, s32, s32, s32);
M2C_UNK func_020fc55c(s32, s32, s32);
extern M2C_UNK data_021392f0;
extern s32 data_027e0000;

void func_0203f1ac(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 *q;
    s32 temp_r6;
    u8 *temp_r3;
    s32 h;

    h       = func_02044580(arg0);
    temp_r4 = arg2 * 2;
    temp_r3 = (u8 *) &data_021392f0 + (data_027e0000 * 0x10);
    q       = (s32 *) (temp_r3 + 8);
    temp_r6 = q[0] + (arg1 * 2);
    func_020fc55c(h, temp_r6, temp_r4);
    func_02046270(3, temp_r6, q[1] + (arg1 * 2), temp_r4, 0x10);
}
