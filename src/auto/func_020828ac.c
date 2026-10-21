/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02018af8();   /* extern */
M2C_UNK func_02095cac();              /* extern */

void func_020828ac(void *arg0, u8 arg1, s32 arg2) {
    u8 temp_r2;
    u8 temp_r3;
    void *temp_r1;
    void *temp_r4;

    temp_r3                     = M2C_FIELD(arg0, u8 *, 0x1A);
    M2C_FIELD(arg0, u8 *, 0x1A) = arg1;
    temp_r4                     = M2C_FIELD(arg0, void **, 0x24);
    if (temp_r4 == NULL) {
        return;
    }
    if ((arg2 == 1) && ((temp_r2 = M2C_FIELD(arg0, u8 *, 0x1A), (temp_r2 != 0)) || (temp_r3 != 5))) {
        func_02018af8(temp_r4 + 0x128, 0x5F, temp_r2, 2);
    }
    temp_r1 = M2C_FIELD(temp_r4, void **, 0x130);
    if (temp_r1 == NULL) {
        return;
    }
    M2C_FIELD(temp_r1, s32 *, 8)   = 0;
    M2C_FIELD(temp_r1, s32 *, 0xC) = 0;
    func_02095cac(M2C_FIELD(temp_r4, void **, 0x130), temp_r4);
}
