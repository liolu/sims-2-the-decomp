/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020ec1e8();                                /* extern */
M2C_UNK func_020ec284(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_02139980;

s32 func_02046468(s32 arg0, M2C_UNK arg1) {
    func_020ec284(*((M2C_UNK *) ((s8 *) &data_02139980 + (func_020ec1e8() << 5))), arg0, arg1);
    return arg0;
}
