/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02043ea0(M2C_UNK, M2C_UNK, M2C_UNK, s32 *); /* extern */

s32 func_020445a0(M2C_UNK arg0) {
    s32 sp0;

    sp0 = 0;
    if (func_02043ea0(arg0, 1, 1, &sp0) == 0) {
        return 0;
    }
    return sp0;
}
