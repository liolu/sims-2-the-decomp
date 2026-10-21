/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020edc1c();                            /* extern */
extern M2C_UNK *data_02138a70;
extern M2C_UNK *data_02138a74;
extern M2C_UNK data_021431fc;
extern M2C_UNK func_020edc70;
extern M2C_UNK func_020edcc8;

void func_020eddac(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_021431fc, s32 *, 8)    = arg0;
    M2C_FIELD(&data_021431fc, s32 *, 0xC)  = arg1;
    M2C_FIELD(&data_021431fc, s32 *, 0x10) = arg2;
    func_020edc1c();
    if (arg3 == 0) {
        return;
    }
    data_02138a70 = &func_020edcc8;
    data_02138a74 = &func_020edc70;
}
