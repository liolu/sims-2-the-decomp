/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020ec718(M2C_UNK, M2C_UNK);
M2C_UNK func_020ec920(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_02139ea0;
extern s32 data_027e0000;

s32 func_020465f8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;
    s32 var_r0;

    temp_r4 = *((M2C_UNK *) ((s8 *) &data_02139ea0 + (arg1 << 5)));
    func_020ec718(temp_r4, (s32) (u16) arg1);
    if (data_027e0000 == 0) {
        var_r0 = func_020ec920(temp_r4, arg0, arg2);
    } else {
        var_r0 = func_020ec920(temp_r4, arg0, 0 - arg2);
    }
    if (var_r0 == 0) {
        var_r0 = 0;
    }
    return var_r0;
}
