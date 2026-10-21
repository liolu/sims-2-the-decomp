/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ec6fc();                                /* extern */
s32 func_020ec710(M2C_UNK);                         /* extern */
M2C_UNK func_020ec758(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02139ea0;

s32 func_0204649c(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = *((M2C_UNK *) ((s8 *) &data_02139ea0 + (func_020ec6fc() << 5)));
    temp_r4 = func_020ec710(arg0);
    func_020ec758(temp_r5, arg0);
    return temp_r4;
}
