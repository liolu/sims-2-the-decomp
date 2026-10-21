/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ed874();                            /* extern */
extern M2C_UNK *data_02138a68;
extern M2C_UNK *data_02138a6c;
extern M2C_UNK data_021431e0;
extern M2C_UNK func_020eda6c;
extern M2C_UNK func_020edafc;

void func_020edbb0(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    M2C_FIELD(&data_021431e0, s32 *, 0xC)  = arg0;
    M2C_FIELD(&data_021431e0, s32 *, 0x10) = arg1;
    M2C_FIELD(&data_021431e0, s32 *, 0x14) = arg2;
    M2C_FIELD(&data_021431e0, s32 *, 0x18) = arg3;
    func_020ed874();
    if (arg4 == 0) {
        return;
    }
    data_02138a68 = &func_020edafc;
    data_02138a6c = &func_020eda6c;
}
