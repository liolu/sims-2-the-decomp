/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0204630c(s32, M2C_UNK, u32);           /* extern */
M2C_UNK func_020467a4();                            /* extern */
s32 func_02046808(u32, M2C_UNK, M2C_UNK);           /* extern */

void func_0203d580(void *arg0, s32 arg1, M2C_UNK arg2) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_020467a4();
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 8) = func_02046808((u32) ((M2C_FIELD(arg0, s32 *, 4) + 0x1F) & ~0x1F) >> 3, arg2, 4);
    func_0204630c(M2C_FIELD(arg0, s32 *, 8), 0, (u32) ((M2C_FIELD(arg0, s32 *, 4) + 0x1F) & ~0x1F) >> 3);
}
