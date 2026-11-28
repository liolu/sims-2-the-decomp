/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_020f9ab4();                                /* extern */
extern M2C_UNK data_021493e0;

void func_0210724c(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_021493e0, 0x05000001);
    M2C_FIELD(&data_021493e0, s16 *, 2) = func_020f9ab4();
}
