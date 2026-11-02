/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov018_02149b8c(void *arg0) {
    u16 temp_r1;

    if ((M2C_FIELD(arg0, s32 *, 0x130) != 0) ||
        ((temp_r1 = M2C_FIELD(arg0, u16 *, 0xC), (temp_r1 == 0xB)) && (M2C_FIELD(arg0, u16 *, 0xA) == 0x104)) ||
        (temp_r1 == 2)) {
        return 1;
    }
    return 0;
}
