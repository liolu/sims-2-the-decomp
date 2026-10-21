/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d62a0();                            /* extern */
M2C_UNK func_020d62f0();                            /* extern */
s32 func_020f9bf0();                                /* extern */
M2C_UNK func_020f9c48(u16);                         /* extern */
M2C_UNK func_0210345c(u16);                         /* extern */
M2C_UNK func_0210346c(u16);                         /* extern */
M2C_UNK func_02103ad8(s32);                         /* extern */
s32 func_02103c90(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02103f6c();                            /* extern */
extern s32 data_02139414;
extern s32 data_027e0004;

s32 func_0203b8b4(void) {
    M2C_UNK sp8;
    s32 temp_r0;
    s32 temp_r4;

    func_02103f6c();
    func_020d62f0();
    data_027e0004 |= 0x400;
    temp_r0       = func_020f9bf0();
    data_02139414 = temp_r0;
    if (temp_r0 != -3) {
        func_0210346c((u16) temp_r0);
    }
    func_02103ad8(0x1202);
    temp_r4 = func_02103c90(0, &sp8, 1, 0, 0, 0);
    func_0210345c((u16) data_02139414);
    func_020f9c48((u16) data_02139414);
    func_020d62a0();
    data_027e0004 &= ~0x400;
    if (temp_r4 == 1) {
        return 1;
    }
    return 0;
}
