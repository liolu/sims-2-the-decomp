/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020fe03c(M2C_UNK, s32, M2C_UNK);           /* extern */

s32 func_021033e8(s32 arg0) {
    if (func_020fe03c(5, (arg0 << 8) & 0x7F00, 0) >= 0) {
        return 1;
    }
    return 0;
}
