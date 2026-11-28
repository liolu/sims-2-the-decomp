/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020ec5c0();                                /* extern */
M2C_UNK func_020ec65c(s32, s32, M2C_UNK);           /* extern */
extern M2C_UNK data_02139d60;

s32 func_020463dc(s32 arg0, M2C_UNK arg1) {
    func_020ec65c(*((M2C_UNK *) ((s8 *) &data_02139d60 + (func_020ec5c0() << 5))), arg0, arg1);
    return arg0;
}
