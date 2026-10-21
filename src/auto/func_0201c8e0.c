/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffabc8();       /* extern */
s32 func_01ffaf28();           /* extern */
M2C_UNK func_0201866c();                      /* extern */
M2C_UNK func_02018acc();                      /* extern */
M2C_UNK func_0204681c();                            /* extern */
M2C_UNK func_02046844();                      /* extern */
extern M2C_UNK data_02130390;

void *func_0201c8e0(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02130390;
    if (M2C_FIELD(arg0, s32 *, 0x60) != 0) {
        func_0204681c();
        M2C_FIELD(arg0, s32 *, 0x60) = 0;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x4B) == 0) && (func_01ffaf28(M2C_FIELD(arg0, void **, 0x38) + 0xE0, 0x46, 0) != 0)) {
        func_01ffabc8(M2C_FIELD(arg0, void **, 0x38) + 0xE0, 0x46, 0);
    }
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x38), s8 *, 0x210) = 0x1F;
    func_02018acc(arg0 + 0x18);
    func_0201866c(arg0);
    func_02046844(arg0);
    return arg0;
}
