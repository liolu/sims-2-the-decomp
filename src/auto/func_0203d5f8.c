/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02046384(s32, M2C_UNK, u32);           /* extern */
M2C_UNK func_0204681c();                            /* extern */
s32 func_02046880(u32, M2C_UNK, M2C_UNK);           /* extern */

void func_0203d5f8(void *arg0, s32 arg1, M2C_UNK arg2) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_0204681c();
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = func_02046880((u32) ((M2C_FIELD(arg0, s32 *, 4) + 0x1F) & ~0x1F) >> 3, arg2, 4);
    func_02046384(M2C_FIELD(arg0, s32 *, 8), 0, (u32) ((M2C_FIELD(arg0, s32 *, 4) + 0x1F) & ~0x1F) >> 3);
}
