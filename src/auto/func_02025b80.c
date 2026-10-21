/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02025bd8(void *, M2C_UNK);                 /* extern */

s32 func_02025b80(void *arg0, s32 arg1, M2C_UNK arg2) {
    switch (arg1) {                                 /* irregular */
        case 5:
            M2C_FIELD(arg0, s32 *, 0x3C) = 0x64;
            return 0;
        case 36:
            return func_02025bd8(arg0, arg2);
        default:
            return 0;
    }
}
