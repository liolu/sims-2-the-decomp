/* compiler: 2.0/sp1p5 -O1 */
#include "m2c.h"
s32 func_02036330(void *arg0, s32 arg1, u8 *arg2) {
    if (arg1 == 0x13) {
        M2C_FIELD(arg0, u8 *, 0x2D) = *arg2;
        return 0;
    }
    return 0;
}
