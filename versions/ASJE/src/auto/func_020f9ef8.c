/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020fa1d8(M2C_UNK);
M2C_UNK func_020fba24(M2C_UNK *, u32, M2C_UNK, M2C_UNK *, s32);
M2C_UNK func_020fbbdc(M2C_UNK *);
s32 func_020fbd64();
M2C_UNK func_020fbd78(s32);
extern s32 *data_02145ea8;
extern M2C_UNK func_020f9eec;
void func_020f9ef8(s32 arg0) {
    u8 sp4[0x2C];
    s32 temp_r4;
    func_020fbbdc((M2C_UNK *) sp4);
    temp_r4 = func_020fbd64();
    func_020fba24((M2C_UNK *) sp4, (u32) (arg0 * 0x82EA) >> 6, 0, &func_020f9eec, *data_02145ea8);
    func_020fa1d8(0);
    func_020fbd78(temp_r4);
}
