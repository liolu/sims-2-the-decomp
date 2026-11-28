/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02046b38(void *, M2C_UNK, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_020c99a8();                            /* extern */
extern M2C_UNK data_021315fc;

void *func_0205560c(void *arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    func_02046b38(arg0, 0x2D, arg1, arg2, arg3);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021315fc;
    func_020c99a8();
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    return arg0;
}
