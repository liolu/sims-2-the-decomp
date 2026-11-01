/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_020fa314(M2C_UNK);
M2C_UNK func_020fbb60(M2C_UNK *, u32, M2C_UNK, M2C_UNK *, s32);
M2C_UNK func_020fbd18(M2C_UNK *);
s32 func_020fbea0();
M2C_UNK func_020fbeb4(s32);
extern s32 *data_02145fe8;
extern M2C_UNK func_020fa028;
void func_020fa034(s32 arg0) {
    u8 sp4[0x2C];
    s32 temp_r4;
    func_020fbd18((M2C_UNK *) sp4);
    temp_r4 = func_020fbea0();
    func_020fbb60((M2C_UNK *) sp4, (u32) (arg0 * 0x82EA) >> 6, 0, &func_020fa028, *data_02145fe8);
    func_020fa314(0);
    func_020fbeb4(temp_r4);
}
