/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0204681c();                            /* extern */

void *func_020530f8(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_0204681c();
        M2C_FIELD(arg0, s32 *, 8)   = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return arg0;
}
