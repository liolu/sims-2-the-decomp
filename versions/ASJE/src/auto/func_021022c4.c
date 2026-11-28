/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02102300(M2C_UNK *, s32 *);                /* extern */
M2C_UNK func_02102930();                            /* extern */
extern M2C_UNK func_02102928;

s32 func_021022c4(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02102300(&func_02102928, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02102930();
    return sp0;
}
