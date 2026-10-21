/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK CpuSet(s32 *, M2C_UNK *, s32);              /* extern */
s16 func_020f9bf0();                                /* extern */
extern M2C_UNK data_02149520;

void func_02107388(void) {
    s32 sp0;

    sp0 = 0;
    CpuSet(&sp0, &data_02149520, 0x05000001);
    M2C_FIELD(&data_02149520, s16 *, 2) = func_020f9bf0();
}
