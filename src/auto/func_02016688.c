/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0201691c();                            /* extern */

void *func_02016688(void *arg0, s16 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r0_3;

    M2C_FIELD(arg0, s16 *, 0x24) = arg1;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x28) = 0;
    if (arg1 == 0xFFFF) {
        return arg0;
    }
    M2C_FIELD(arg0, s32 *, 0x2C) = (s32) (M2C_FIELD(arg0, s32 *, 0x2C) + arg2);
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + arg2);
    func_0201691c(arg0);
    temp_r0_3 = arg0 + 0x18;
    if (M2C_FIELD(temp_r0_3, u8 *, 2) == M2C_FIELD(temp_r0_3, u8 *, 3)) {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 4) & 0x80;
        if (temp_r0_2 == 0) {
            return (void *) temp_r0_2;
        }
    }
    temp_r0                   = M2C_FIELD(arg0, s32 *, 4) | 0x80;
    M2C_FIELD(arg0, s32 *, 4) = temp_r0;
    return (void *) temp_r0;
}
