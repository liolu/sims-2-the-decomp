/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020467f4(s32);                             /* extern */
M2C_UNK func_0210777c();                            /* extern */
M2C_UNK func_021081a8(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_02131660;
extern M2C_UNK data_02135dc0;
extern M2C_UNK data_02135dd4;

void func_020c9030(void *arg0, u32 arg1) {
    s32 temp_r0;

    if (arg1 > 0x014E5E0AU) {
        func_021081a8(&data_02131660, &data_02135dc0);
        func_0210777c();
    }
    temp_r0 = func_020467f4(arg1 * 0xC4);
    if (temp_r0 == 0) {
        func_021081a8(&data_02131660, &data_02135dd4);
        func_0210777c();
    }
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    M2C_FIELD(arg0, u32 *, 8) = arg1;
}
