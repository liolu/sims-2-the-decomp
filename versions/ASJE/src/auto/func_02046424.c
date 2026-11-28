/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020ec5c0();                                /* extern */
s32 func_020ec5d4(M2C_UNK);                         /* extern */
M2C_UNK func_020ec61c(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02139d60;

s32 func_02046424(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = *((M2C_UNK *) ((s8 *) &data_02139d60 + (func_020ec5c0() << 5)));
    temp_r4 = func_020ec5d4(arg0);
    func_020ec61c(temp_r5, arg0);
    return temp_r4;
}
