/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_02050014(M2C_UNK, u16, u32);               /* extern */

void func_02016878(void *arg0, M2C_UNK arg1) {
    M2C_FIELD(arg0, s16 *, 0x46) =
        func_02050014(arg1, M2C_FIELD(arg0, u16 *, 0x44), (u32) (M2C_FIELD(arg0, s32 *, 0x10) << 0x12) >> 0x1F);
}
