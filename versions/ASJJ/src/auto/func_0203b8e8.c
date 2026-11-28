/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020d5d8c();                            /* extern */
M2C_UNK func_020d5ddc();                            /* extern */
s32 func_020f96dc();                                /* extern */
M2C_UNK func_020f9734(u16);                         /* extern */
M2C_UNK func_02102f48(u16);                         /* extern */
M2C_UNK func_02102f58(u16);                         /* extern */
M2C_UNK func_021035c4(s32);                         /* extern */
s32 func_0210377c(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02103a58();                            /* extern */
extern s32 data_02138ef4;
extern s32 data_027e0004;

s32 func_0203b8e8(void) {
    M2C_UNK sp8;
    s32 temp_r0;
    s32 temp_r4;

    func_02103a58();
    func_020d5ddc();
    data_027e0004 |= 0x400;
    temp_r0       = func_020f96dc();
    data_02138ef4 = temp_r0;
    if (temp_r0 != -3) {
        func_02102f58((u16) temp_r0);
    }
    func_021035c4(0x1202);
    temp_r4 = func_0210377c(0, &sp8, 1, 0, 0, 0);
    func_02102f48((u16) data_02138ef4);
    func_020f9734((u16) data_02138ef4);
    func_020d5d8c();
    data_027e0004 &= ~0x400;
    if (temp_r4 == 1) {
        return 1;
    }
    return 0;
}
