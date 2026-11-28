/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d6164();                            /* extern */
M2C_UNK func_020d61b4();                            /* extern */
s32 func_020f9ab4();                                /* extern */
M2C_UNK func_020f9b0c(u16);                         /* extern */
M2C_UNK func_02103320(u16);                         /* extern */
M2C_UNK func_02103330(u16);                         /* extern */
M2C_UNK func_0210399c(s32);                         /* extern */
s32 func_02103b54(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02103e30();                            /* extern */
extern s32 data_021392d4;
extern s32 data_027e0004;

s32 func_0203b83c(void) {
    M2C_UNK sp8;
    s32 temp_r0;
    s32 temp_r4;

    func_02103e30();
    func_020d61b4();
    data_027e0004 |= 0x400;
    temp_r0       = func_020f9ab4();
    data_021392d4 = temp_r0;
    if (temp_r0 != -3) {
        func_02103330((u16) temp_r0);
    }
    func_0210399c(0x1202);
    temp_r4 = func_02103b54(0, &sp8, 1, 0, 0, 0);
    func_02103320((u16) data_021392d4);
    func_020f9b0c((u16) data_021392d4);
    func_020d6164();
    data_027e0004 &= ~0x400;
    if (temp_r4 == 1) {
        return 1;
    }
    return 0;
}
