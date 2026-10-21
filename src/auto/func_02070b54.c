/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02016708(void *, M2C_UNK *);           /* extern */
M2C_UNK func_020d59bc(s32);                         /* extern */
extern M2C_UNK data_0211f98c;

void func_02070b54(void *arg0) {
    void *temp_r2;

    func_020d59bc(0x159);
    if (M2C_FIELD(arg0, u8 *, 0xB4) == 1) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0xB4)     = 1U;
    temp_r2                         = M2C_FIELD(arg0, void **, 0xB0);
    M2C_FIELD(temp_r2, s32 *, 0x14) = (s32) ((M2C_FIELD(temp_r2, s32 *, 0x14) & ~0xF000) | 0x2000);
    func_02016708(M2C_FIELD(arg0, void **, 0xB0), &data_0211f98c);
}
