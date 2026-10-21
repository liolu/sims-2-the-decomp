/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02016708(void *, M2C_UNK *);           /* extern */
s32 func_020187ec(s32);                             /* extern */
M2C_UNK func_0206b118(void *, s32, u16);            /* extern */
M2C_UNK func_020d59bc(s32);                         /* extern */
extern M2C_UNK data_0211f8e0;
extern void *data_0213e580;

void func_0206af80(void *arg0) {
    s32 temp_r0;
    u16 temp_r4;
    void **temp_r0_2;
    void *temp_r5;
    void *temp_r5_2;

    temp_r5 = M2C_FIELD(arg0, void **, 0x6C);
    if (M2C_FIELD(temp_r5, volatile u8 *, 0x95) != 0) {
        M2C_FIELD(temp_r5, volatile u8 *, 0x95)  = 0U;
        M2C_FIELD(temp_r5, volatile s32 *, 0x14) = (s32) ((M2C_FIELD(temp_r5, volatile s32 *, 0x14) & ~0xF000) | 0x1000);
        func_02016708(temp_r5, &data_0211f8e0);
    }
    M2C_FIELD(temp_r5, volatile s32 *, 0x88) = 0;
    temp_r4                                  = M2C_FIELD(temp_r5, volatile u16 *, 0xA);
    temp_r5_2                                = M2C_FIELD(temp_r5, void **, 0x90);
    temp_r0                                  = func_020187ec(M2C_FIELD(data_0213e580, volatile s32 *, 0xF8) + 0xE0);
    if (temp_r0 == 3) {
        return;
    }
    if (temp_r0 == 0x10) {
        return;
    }
    func_020d59bc(0x159);
    temp_r0_2 = M2C_FIELD(*M2C_FIELD(temp_r5_2, void ***, 0x300), void ***, 0x130);
    func_0206b118(temp_r5_2, M2C_FIELD(*temp_r0_2, s32(**)(void **, u16), 0x14)(temp_r0_2, temp_r4), temp_r4);
}
