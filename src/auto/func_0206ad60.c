/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02016708(void *, M2C_UNK *);           /* extern */
extern M2C_UNK data_0211f8e0;

void func_0206ad60(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x94) != 0) {
        return;
    }
    if (M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x90), void **, 0xC), s32 *, 0x6C) == 2) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0x95) == 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x95)  = 0U;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) ((M2C_FIELD(arg0, s32 *, 0x14) & ~0xF000) | 0x1000);
    func_02016708(arg0, &data_0211f8e0);
}
