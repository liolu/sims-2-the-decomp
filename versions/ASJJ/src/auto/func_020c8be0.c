/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02046880(s32);                             /* extern */
M2C_UNK func_021073a4();                            /* extern */
M2C_UNK func_02107dd0(M2C_UNK *, M2C_UNK *);        /* extern */
extern M2C_UNK data_021312a0;
extern M2C_UNK data_021359ec;
extern M2C_UNK data_02135a00;

void func_020c8be0(void *arg0, u32 arg1) {
    s32 temp_r0;

    if (arg1 > 0x014E5E0AU) {
        func_02107dd0(&data_021312a0, &data_021359ec);
        func_021073a4();
    }
    temp_r0 = func_02046880(arg1 * 0xC4);
    if (temp_r0 == 0) {
        func_02107dd0(&data_021312a0, &data_02135a00);
        func_021073a4();
    }
    M2C_FIELD(arg0, s32 *, 0) = temp_r0;
    M2C_FIELD(arg0, u32 *, 8) = arg1;
}
