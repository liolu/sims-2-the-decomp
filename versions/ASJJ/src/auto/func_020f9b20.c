/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020f9e00(M2C_UNK);
M2C_UNK func_020fb64c(M2C_UNK *, u32, M2C_UNK, M2C_UNK *, s32);
M2C_UNK func_020fb804(M2C_UNK *);
s32 func_020fb98c();
M2C_UNK func_020fb9a0(s32);
extern s32 *data_02145b08;
extern M2C_UNK func_020f9b14;
void func_020f9b20(s32 arg0) {
    u8 sp4[0x2C];
    s32 temp_r4;
    func_020fb804((M2C_UNK *) sp4);
    temp_r4 = func_020fb98c();
    func_020fb64c((M2C_UNK *) sp4, (u32) (arg0 * 0x82EA) >> 6, 0, &func_020f9b14, *data_02145b08);
    func_020f9e00(0);
    func_020fb9a0(temp_r4);
}
