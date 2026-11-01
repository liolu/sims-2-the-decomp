/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern M2C_UNK data_02139810;
extern s32 data_027e0000;
M2C_UNK func_0204625c(M2C_UNK, s32, s32, s32, s32);
M2C_UNK func_020fca70(M2C_UNK, s32, s32);
void func_0203f1b8(M2C_UNK arg0, s32 arg1, s32 arg2) {
    s32 temp_r7;
    s32 temp_r6;
    s32 temp_r4;
    temp_r4 = arg2 * 2;
    temp_r7 = (s32) ((u8 *) &data_02139810 + (data_027e0000 * 0x10));
    temp_r6 = *(s32 *) temp_r7 + (arg1 * 2);
    func_020fca70(arg0, temp_r6, temp_r4);
    func_0204625c(3, temp_r6, *(s32 *) (temp_r7 + 4) + (arg1 * 2), temp_r4, 0x10);
}
