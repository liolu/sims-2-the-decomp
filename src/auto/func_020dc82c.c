/* compiler: 1.2/sp2p3 -nointerworking */
#include "m2c.h"

void func_020dc82c(void *arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = M2C_FIELD(arg0, s32 *, 0x264);
    if (temp_r3 == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x29C) = (s32) (M2C_FIELD(arg0, s32 *, 0x29C) + (arg1 - temp_r3));
    M2C_FIELD(arg0, s32 *, 0x264) = 0;
}
