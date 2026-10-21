/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020187ec(s32);                             /* extern */
M2C_UNK func_0206b118(void *, s32, u16);            /* extern */
M2C_UNK func_020d59bc(s32);                         /* extern */
extern void *data_02139fa4;
extern void *data_0213e580;

void func_0206ac5c(void *arg0) {
    s32 temp_r0;
    u16 temp_r5;
    void **temp_r0_2;
    void *temp_r4;

    if ((M2C_FIELD(arg0, s32 *, 4) & 1) != 1) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x94) != 0) {
        return;
    }
    temp_r4 = M2C_FIELD(arg0, void **, 0x90);
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 0xC), s32 *, 0x6C) == 2) {
        return;
    }
    if (M2C_FIELD(data_02139fa4, s32 *, 0xDF0) != 0x32) {
        return;
    }
    if (M2C_FIELD(data_02139fa4, s32 *, 0xE10) != 0x32) {
        return;
    }
    temp_r5 = M2C_FIELD(arg0, u16 *, 0xA);
    temp_r0 = func_020187ec(M2C_FIELD(data_0213e580, s32 *, 0xF8) + 0xE0);
    if (temp_r0 == 3) {
        return;
    }
    if (temp_r0 == 0x10) {
        return;
    }
    func_020d59bc(0x159);
    temp_r0_2 = M2C_FIELD(*M2C_FIELD(temp_r4, void ***, 0x300), void ***, 0x130);
    func_0206b118(temp_r4, M2C_FIELD(*temp_r0_2, s32(**)(void **, u16), 0x14)(temp_r0_2, temp_r5), temp_r5);
}
