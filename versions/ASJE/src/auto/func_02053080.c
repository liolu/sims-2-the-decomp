/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020467a4();                            /* extern */

void *func_02053080(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        func_020467a4();
        M2C_FIELD(arg0, s32 *, 8)   = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = 0;
    }
    return arg0;
}
