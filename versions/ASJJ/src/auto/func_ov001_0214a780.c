/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204811c(s32, M2C_UNK, M2C_UNK, s32, s32, s32);
M2C_UNK func_020d54a8(M2C_UNK);
void func_ov001_02149960(void *);
void func_ov001_02149fc8(void *);
extern s32 data_02139a84;

void func_ov001_0214a780(void *arg0) {
    s32 temp_r1;
    u8 temp_r2;
    void *temp_r3;

    temp_r3                        = M2C_FIELD(arg0, void **, 0x38);
    temp_r2                        = M2C_FIELD(temp_r3, u8 *, 0x8C);
    M2C_FIELD(temp_r3, u8 *, 0x8C) = 0U;
    if (temp_r2 != 0) {
        func_020d54a8(0x160);
        func_0204811c(data_02139a84, 0xC, 1, 0, 0, 0);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x48);
    switch (temp_r1) {
        case 0:
            func_ov001_02149fc8(arg0);
            return;
        case 1:
            func_ov001_02149960(arg0);
            return;
    }
}
