/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f9c4c();                            /* extern */
s32 func_020fb98c();                                /* extern */
M2C_UNK func_020fb9a0(s32);                         /* extern */
extern void **data_02145b08;

void func_020f9e00(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_020fb98c();
    temp_r2 = *data_02145b08;
    if (arg0 != NULL) {
        *arg0 |= (u16) (1 << M2C_FIELD(temp_r2, s32 *, 0x6C));
    }
    M2C_FIELD(temp_r2, s32 *, 0x64) = 0;
    func_020f9c4c();
    func_020fb9a0(temp_r4);
}
