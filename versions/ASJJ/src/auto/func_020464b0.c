/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020ec1e8();                                /* extern */
s32 func_020ec1fc(M2C_UNK);                         /* extern */
M2C_UNK func_020ec244(s32, M2C_UNK);                /* extern */
extern M2C_UNK data_02139980;

s32 func_020464b0(M2C_UNK arg0) {
    s32 temp_r4;
    s32 temp_r5;

    temp_r5 = *((M2C_UNK *) ((s8 *) &data_02139980 + (func_020ec1e8() << 5)));
    temp_r4 = func_020ec1fc(arg0);
    func_020ec244(temp_r5, arg0);
    return temp_r4;
}
