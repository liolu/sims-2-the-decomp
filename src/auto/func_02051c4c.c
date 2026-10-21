/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020445d8(u16);                           /* extern */
extern M2C_UNK data_0211e790;
extern M2C_UNK data_0213ddc8;

void func_02051c4c(s32 arg0, s32 arg1) {
    s32 temp_r4;
    void *temp_r0;

    temp_r4 = (arg1 * 0x1C) + ((arg0 * 0x38) + (s32) &data_0213ddc8);
    if ((u32) M2C_FIELD(temp_r4, u16 *, 2) >= 2U) {
        return;
    }
    temp_r0 = func_020445d8(M2C_FIELD(temp_r4, u16 *, 0));
    if (M2C_FIELD(temp_r4, u16 *, 2) == 0) {
        M2C_FIELD(temp_r4, void **, 4) = temp_r0;
        M2C_FIELD(temp_r4, u16 *, 0xA) = (u16) M2C_FIELD(temp_r0, u16 *, 0);
        M2C_FIELD(temp_r4, u16 *, 0xC) = (u16) M2C_FIELD(temp_r0, u16 *, 2);
        M2C_FIELD(temp_r4, u8 *, 8)    = (u8) M2C_FIELD(temp_r0, u8 *, 4);
        M2C_FIELD(temp_r4, s8 *, 0xE)  = (s8) * ((M2C_UNK *) ((s8 *) &data_0211e790 + (arg0 * 8)));
        M2C_FIELD(temp_r4, void **, 0x10) =
            (void *) (temp_r0 + (M2C_FIELD(temp_r0, u8 *, 7) + (M2C_FIELD(temp_r0, u8 *, 6) << 8)));
        M2C_FIELD(temp_r4, void **, 0x14) =
            (void *) (temp_r0 + (M2C_FIELD(temp_r0, u8 *, 0xB) + (M2C_FIELD(temp_r0, u8 *, 0xA) << 8)));
        M2C_FIELD(temp_r4, void **, 0x18) =
            (void *) (temp_r0 + (M2C_FIELD(temp_r0, u8 *, 0xF) + (M2C_FIELD(temp_r0, u8 *, 0xE) << 8)));
    }
    M2C_FIELD(temp_r4, u16 *, 2) = (u16) (M2C_FIELD(temp_r4, u16 *, 2) + 1);
}
