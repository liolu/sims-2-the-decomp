/* compiler: 2.0/sp1p5 -O1 */
#include "m2c.h"
s32 func_020271f8(void *arg0, s32 arg1) {
    if (arg1 == 0x40) {
        M2C_FIELD(arg0, s8 *, 0x13) = 1;
        return 0;
    }
    return 0;
}
