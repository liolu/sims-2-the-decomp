/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0210243c(M2C_UNK *, s32 *);                /* extern */
M2C_UNK func_02102a6c();                            /* extern */
extern M2C_UNK func_02102a64;

s32 func_02102400(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_0210243c(&func_02102a64, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02102a6c();
    return sp0;
}
