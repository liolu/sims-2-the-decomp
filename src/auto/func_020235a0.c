/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020235a0(void *arg0) {
    u16 temp_r1;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 4), u16 *, 0xA);
    if ((temp_r1 == 0) || ((u32) (u16) (temp_r1 + 0xFFE0) <= 3U)) {
        return 0;
    }
    if (((u32) temp_r1 >= 0x18U) && ((u32) temp_r1 <= 0x1BU)) {
        return 3;
    }
    if (((u32) temp_r1 >= 0x1CU) && ((u32) temp_r1 <= 0x1FU)) {
        return 2;
    }
    if (((u32) temp_r1 >= 0x24U) && ((u32) temp_r1 <= 0x27U)) {
        return 1;
    }
    if (temp_r1 == 1) {
        return 4;
    }
    return 5;
}
