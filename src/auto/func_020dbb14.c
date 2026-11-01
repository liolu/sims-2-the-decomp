/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_020dbb68(void *);                      /* extern */

s32 func_020dbb14(void *arg0, s32 arg1) {
    if (arg1 & 1) {
        if (M2C_FIELD(arg0, s32 *, 0x50) == 0) {
            M2C_FIELD(arg0, s32 *, 0x50) = 1;
        }
    } else if (arg1 & 2) {
        if (M2C_FIELD(arg0, s32 *, 0x50) == 1) {
            M2C_FIELD(arg0, s32 *, 0x50) = 0;
        }
        if (arg1 & 0x80000000) {
            func_020dbb68(arg0);
        }
    }
    return M2C_FIELD(arg0, s32 *, 0x50);
}
