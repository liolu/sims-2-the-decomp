/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020ed738();                            /* extern */
extern M2C_UNK *data_02138928;
extern M2C_UNK *data_0213892c;
extern M2C_UNK data_021430a0;
extern M2C_UNK func_020ed930;
extern M2C_UNK func_020ed9c0;

void func_020eda74(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&data_021430a0, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_021430a0, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_021430a0, s32 *, 0x14) = arg2;
    M2C_FIELD(&data_021430a0, s32 *, 0x18) = arg3;
    func_020ed738();
    if (arg4 == 0) {
        return;
    }
    data_02138928 = &func_020ed9c0;
    data_0213892c = &func_020ed930;
}
