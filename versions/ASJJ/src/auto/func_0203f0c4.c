/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046270(M2C_UNK, s32, s32, s32, s32);
M2C_UNK func_020fc55c(M2C_UNK, s32, s32);

extern u8 data_021392f0;
extern s32 data_027e0000;

void func_0203f0c4(M2C_UNK arg0, s32 arg1, s32 arg2) {
    u8 *e;
    s32 q;
    s32 temp_r4;
    s32 temp_r6;
    s32 t5;
    temp_r4 = arg2 * 2;
    e       = &data_021392f0 + data_027e0000 * 0x10;
    t5      = arg1 * 2;
    q       = (s32) e + 8;
    temp_r6 = *(s32 *) q + arg1 * 2;
    func_020fc55c(arg0, temp_r6, temp_r4);
    func_02046270(3, temp_r6, *(s32 *) (q + 4) + t5, temp_r4, 0x10);
}
