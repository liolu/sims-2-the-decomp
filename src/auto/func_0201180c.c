/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02014e5c(void *, u16 *, u16);          /* extern */
M2C_UNK func_020b9a24(void *, u16, u16 *, u16);     /* extern */

void func_0201180c(void *arg0, s16 arg1, s16 arg2, void *arg3) {
    u16 *temp_r2;

    M2C_FIELD(arg0, s16 *, 0xC) = arg1;
    M2C_FIELD(arg0, s16 *, 0xA) = arg2;
    temp_r2                     = M2C_FIELD(arg3, u16 **, 0);
    if (*temp_r2 == 0x135) {
        func_020b9a24(arg0 + 0x14C, M2C_FIELD(arg3, u16 *, 4), NULL, 0U);
    } else {
        func_020b9a24(arg0 + 0x14C, M2C_FIELD(arg3, u16 *, 4), temp_r2, M2C_FIELD(arg3, u16 *, 6));
    }
    func_02014e5c(arg0, M2C_FIELD(arg3, u16 **, 0), M2C_FIELD(arg3, u16 *, 6));
    if (arg1 == 3) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) & ~4);
    }
}
