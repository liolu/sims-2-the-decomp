/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020443b0(s16);                             /* extern */
s32 func_02044580(s16);                             /* extern */

s32 func_020bbfec(void *arg0, s16 arg1) {
    s32 temp_r0;

    temp_r0 = func_02044580(arg1);
    if (temp_r0 == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s16 *, 4) = (s16) ((func_020443b0(arg1) + 3) & ~3);
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    M2C_FIELD(arg0, s16 *, 6) = arg1;
    M2C_FIELD(arg0, s8 *, 8)  = 1;
    return 1;
}
