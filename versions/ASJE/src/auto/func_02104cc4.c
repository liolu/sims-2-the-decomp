/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fad20(u16 *, M2C_UNK);              /* extern */
s32 func_02104d20();                                /* extern */
extern void *data_0214894c;

s32 func_02104cc4(void) {
    s32 temp_r0;

    temp_r0 = func_02104d20();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020fad20(M2C_FIELD(data_0214894c, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_0214894c, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
