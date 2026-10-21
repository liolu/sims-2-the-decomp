/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206fd90(M2C_UNK);
M2C_UNK func_020d59bc(M2C_UNK);

void func_0207090c(s32 arg0) {
    s32 temp_r2_2;
    s32 temp_r3;
    u16 temp_r2;
    void *temp_r0;

    func_020d59bc(0x159);
    temp_r0 = M2C_FIELD(arg0, void **, 0x90);
    temp_r2 = M2C_FIELD(arg0, u16 *, 0xA);
    if ((s32) temp_r2 >= (s32) M2C_FIELD(temp_r0, s32 *, 0x1C)) {
        return;
    }
    temp_r3   = M2C_FIELD(temp_r0, s32 *, 0x20);
    temp_r2_2 = temp_r3 + ((temp_r2 - temp_r3) & 3);
    if (temp_r2_2 == M2C_FIELD(temp_r0, s32 *, 0x24)) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 0x24) = temp_r2_2;
    func_0206fd90((s32) temp_r0);
}
