/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ec6fc();                                /* extern */
M2C_UNK func_020ec798(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_02139ea0;

s32 func_02046454(s32 arg0, M2C_UNK arg1) {
    func_020ec798(*((M2C_UNK *) ((s8 *) &data_02139ea0 + (func_020ec6fc() << 5))), arg0, arg1);
    return arg0;
}
