/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

M2C_UNK func_020d64d0(s32);                         /* extern */
extern M2C_UNK data_02142848;

void func_020d87f0(s8 arg0) {
    s32 var_r6;

    var_r6                                 = 0xF;
    M2C_FIELD(&data_02142848, s8 *, 0x665) = arg0;
    do {
        func_020d64d0(var_r6 | (M2C_FIELD(((var_r6 * 0x44) + (s32) &data_02142848), u16 *, 0xB4) << 8));
        var_r6 -= 1;
    } while (var_r6 >= 0);
}
