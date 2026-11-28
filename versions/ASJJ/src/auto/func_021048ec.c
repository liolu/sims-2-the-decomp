/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fa948(u16 *, M2C_UNK);              /* extern */
s32 func_02104948();                                /* extern */
extern void *data_021485ac;

s32 func_021048ec(void) {
    s32 temp_r0;

    temp_r0 = func_02104948();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020fa948(M2C_FIELD(data_021485ac, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_021485ac, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
