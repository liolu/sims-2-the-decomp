/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0203f1b8(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020d59bc(s32);                         /* extern */
extern void *data_0213e5a0;

void func_0209e660(void *arg0) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x90);
    if (M2C_FIELD(arg0, u16 *, 0xA) == 0xC) {
        M2C_FIELD(temp_r0, s32 *, 0x3C) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x3C) - 1);
    } else {
        M2C_FIELD(temp_r0, s32 *, 0x3C) = (s32) (M2C_FIELD(temp_r0, s32 *, 0x3C) + 1);
    }
    M2C_FIELD(temp_r0, s32 *, 0x3C)       = (s32) (M2C_FIELD(temp_r0, s32 *, 0x3C) & 0xF);
    M2C_FIELD(data_0213e5a0, s8 *, 0x605) = (s8) M2C_FIELD(temp_r0, s32 *, 0x3C);
    M2C_FIELD(temp_r0, s8 *, 0x64D)       = (s8) M2C_FIELD(temp_r0, s32 *, 0x3C);
    func_0203f1b8(M2C_FIELD(temp_r0, s32 *, 0xCE4) + (M2C_FIELD(temp_r0, s32 *, 0x3C) << 5), 0x10, 0x10);
    func_020d59bc(0x169);
}
