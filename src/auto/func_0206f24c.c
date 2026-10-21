/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206e5b0(void *);                      /* extern */
M2C_UNK func_0206e6e4(void *);                      /* extern */

void func_0206f24c(void *arg0, s32 arg1) {
    s32 temp_r1;

    if (M2C_FIELD(arg0, s32 *, 0x50C) == 0) {
        return;
    }
    if (arg1 == 0) {
        M2C_FIELD(arg0, s32 *, 0x514) = (s32) (M2C_FIELD(arg0, s32 *, 0x514) - 1);
    } else {
        M2C_FIELD(arg0, s32 *, 0x514) = (s32) (M2C_FIELD(arg0, s32 *, 0x514) + 1);
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x514) < 0) {
        M2C_FIELD(arg0, s32 *, 0x514) = 0;
    }
    temp_r1 = M2C_FIELD(arg0, s32 *, 0x50C);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x514) >= temp_r1) {
        M2C_FIELD(arg0, s32 *, 0x514) = (s32) (temp_r1 - 1);
    }
    func_0206e5b0(arg0);
    func_0206e6e4(arg0);
}
