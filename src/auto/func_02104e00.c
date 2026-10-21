/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fae5c(u16 *, M2C_UNK);              /* extern */
s32 func_02104e5c();                                /* extern */
extern void *data_02148a8c;

s32 func_02104e00(void) {
    s32 temp_r0;

    temp_r0 = func_02104e5c();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020fae5c(M2C_FIELD(data_02148a8c, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_02148a8c, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
