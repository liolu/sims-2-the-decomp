/* compiler: 1.2/sp3 */
#include "m2c.h"

M2C_UNK func_020db7e0();                            /* extern */

s32 func_020db2d0(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xA8) == 0) {
        M2C_FIELD(arg0, s32 *, 0xA8) = 1;
        func_020db7e0();
    }
    return 0;
}
