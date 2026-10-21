/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0204686c(s32);                             /* extern */
M2C_UNK func_021078b8();                            /* extern */
M2C_UNK func_021082e4(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_021317a0;
extern M2C_UNK data_02135f00;
extern M2C_UNK data_02135f14;

void func_020c90f8(void *arg0, u32 arg1) {
    s32 temp_r0;

    if (arg1 > 0x014E5E0AU) {
        func_021082e4(&data_021317a0, &data_02135f00);
        func_021078b8();
    }
    temp_r0 = func_0204686c(arg1 * 0xC4);
    if (temp_r0 == 0) {
        func_021082e4(&data_021317a0, &data_02135f14);
        func_021078b8();
    }
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    M2C_FIELD(arg0, u32 *, 8) = arg1;
}
