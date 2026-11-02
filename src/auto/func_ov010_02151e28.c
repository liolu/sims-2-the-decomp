/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020165bc(s32, u8);                     /* extern */
s32 func_020c8490();                                /* extern */

void func_ov010_02151e28(void *arg0, s32 arg1) {
    s32 temp_r0;

    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = 0;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
    if (((s32) M2C_FIELD(arg0, s32 *, 0x28) < 0x14) && (arg1 == 0)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    temp_r0                      = func_020c8490();
    if ((temp_r0 == M2C_FIELD(arg0, s32 *, 0x2C)) && (arg1 == 0)) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = temp_r0;
    func_020165bc(M2C_FIELD(arg0, s32 *, 0x24), (u8) (M2C_FIELD(arg0, s32 *, 0x2C) + 1));
}
