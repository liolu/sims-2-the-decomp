/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0201691c(void *);
s32 func_0201661c(void *arg0, s32 arg1, s16 arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r0_3;
    M2C_FIELD(arg0, s16 *, 0x24) = arg2;
    M2C_FIELD(arg0, s32 *, 0x2C) = arg3;
    M2C_FIELD(arg0, s32 *, 0x28) = arg3;
    if (M2C_FIELD(arg0, s32 *, 0x20) != arg1) {
        M2C_FIELD(arg0, s32 *, 0x20) = arg1;
        M2C_FIELD(arg0, u8 *, 0x1A)  = 0xFF;
        M2C_FIELD(arg0, u8 *, 0x1B)  = 0xFF;
    }
    func_0201691c(arg0);
    temp_r0_3 = (u8 *) arg0 + 0x18;
    if (M2C_FIELD(temp_r0_3, u8 *, 2) == M2C_FIELD(temp_r0_3, u8 *, 3)) {
        temp_r0_2 = M2C_FIELD(arg0, s32 *, 4) & 0x80;
        if (temp_r0_2 == 0) {
            return temp_r0_2;
        }
    }
    temp_r0                   = M2C_FIELD(arg0, s32 *, 4) | 0x80;
    M2C_FIELD(arg0, s32 *, 4) = temp_r0;
    return temp_r0;
}
