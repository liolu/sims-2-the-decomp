/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_01ffae48(M2C_UNK);
void func_02010d8c(M2C_UNK);
void func_020112b0(M2C_UNK);
void func_020150f4(M2C_UNK);
void func_020b96f8(M2C_UNK);

void func_02011734(s32 arg0) {
    u16 temp_r0;
    void *temp_r0_2;

    if (M2C_FIELD(arg0, u8 *, 0x20C) != 0) {
        func_01ffae48(arg0 + 0xE0);
    }
    func_020150f4(arg0);
    func_020b96f8(arg0 + 0x14C);
    func_02010d8c(arg0);
    if ((M2C_FIELD(arg0, u16 *, 0xC) == 0xB) &&
        ((temp_r0 = M2C_FIELD(arg0, u16 *, 0xA), (temp_r0 == 2)) || (((u32) temp_r0 >= 0x11U) && ((u32) temp_r0 <= 0x16U)))) {
        func_020112b0(arg0);
    }
    temp_r0_2 = M2C_FIELD(arg0, void **, 0x134);
    if (temp_r0_2 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r0_2, s32 *, 0x134) == arg0) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0xC) != 2) {
        M2C_FIELD(arg0, void **, 0x134) = NULL;
    }
}
