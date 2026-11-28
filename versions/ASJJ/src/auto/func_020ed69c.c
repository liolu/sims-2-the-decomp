/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020ed360();                            /* extern */
extern M2C_UNK *data_02138554;
extern M2C_UNK *data_02138558;
extern M2C_UNK data_02142d00;
extern M2C_UNK func_020ed558;
extern M2C_UNK func_020ed5e8;

void func_020ed69c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&data_02142d00, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_02142d00, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_02142d00, s32 *, 0x14) = arg2;
    M2C_FIELD(&data_02142d00, s32 *, 0x18) = arg3;
    func_020ed360();
    if (arg4 == 0) {
        return;
    }
    data_02138554 = &func_020ed5e8;
    data_02138558 = &func_020ed558;
}
