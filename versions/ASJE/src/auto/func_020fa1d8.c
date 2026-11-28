/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020fa024();                            /* extern */
s32 func_020fbd64();                                /* extern */
M2C_UNK func_020fbd78(s32);                         /* extern */
extern void **data_02145ea8;

void func_020fa1d8(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_020fbd64();
    temp_r2 = *data_02145ea8;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_020fa024();
    func_020fbd78(temp_r4);
}
