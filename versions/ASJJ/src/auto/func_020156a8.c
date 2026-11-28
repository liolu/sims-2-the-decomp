/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02049350(s32);                         /* extern */
M2C_UNK func_02049480(void *, M2C_UNK);             /* extern */
s32 func_0204949c(void *);                          /* extern */

void func_020156a8(void *arg0) {
    s32 temp_r5;
    u32 temp_r0;

    temp_r0 = (u32) (M2C_FIELD(arg0, volatile s32 *, 0x10) << 0x16) >> 0x1E;
    if ((temp_r0 != 1) && (temp_r0 != 3)) {
        return;
    }
    M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) & ~0x300);
    M2C_FIELD(arg0, volatile s16 *, 0x42) = 0;
    temp_r5                               = func_0204949c(arg0 + 0x10);
    func_02049480(arg0 + 0x10, 0);
    func_02049350(temp_r5);
}
