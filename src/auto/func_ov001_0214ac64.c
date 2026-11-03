/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02048108(s32, M2C_UNK, M2C_UNK, s32, s32, s32);
M2C_UNK func_020d59bc(M2C_UNK);
void func_ov001_02149e3c(void *);
void func_ov001_0214a4ac(void *);
extern s32 data_02139fa4;

void func_ov001_0214ac64(void *arg0) {
    s32 temp_r1;
    u8 temp_r2;
    void *temp_r3;

    temp_r3                        = M2C_FIELD(arg0, void **, 0x38);
    temp_r2                        = M2C_FIELD(temp_r3, u8 *, 0x8C);
    M2C_FIELD(temp_r3, u8 *, 0x8C) = 0U;
    if (temp_r2 != 0) {
        func_020d59bc(0x160);
        func_02048108(data_02139fa4, 0xC, 1, 0, 0, 0);
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x48);
    switch (temp_r1) {
        case 0:
            func_ov001_0214a4ac(arg0);
            return;
        case 1:
            func_ov001_02149e3c(arg0);
            return;
    }
}
