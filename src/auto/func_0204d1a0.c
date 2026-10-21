#include "m2c.h"

s32 func_0204d1a0(void *arg0) {
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 0x10);
    if (temp_r0 < 6U) {
        return 3;
    }
    if (temp_r0 < 0xAU) {
        return 0;
    }
    if (temp_r0 < 0x11U) {
        return 1;
    }
    if (temp_r0 < 0x14U) {
        return 2;
    }
    return 3;
}
