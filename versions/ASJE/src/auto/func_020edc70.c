/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020edae0();                            /* extern */
extern M2C_UNK *data_02138930;
extern M2C_UNK *data_02138934;
extern M2C_UNK data_021430bc;
extern M2C_UNK func_020edb34;
extern M2C_UNK func_020edb8c;

void func_020edc70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    M2C_FIELD(&data_021430bc, s32 *, 8)    = arg0;
    M2C_FIELD(&data_021430bc, s32 *, 0xC)  = arg1;
    M2C_FIELD(&data_021430bc, s32 *, 0x10) = arg2;
    func_020edae0();
    if (arg3 == 0) {
        return;
    }
    data_02138930 = &func_020edb8c;
    data_02138934 = &func_020edb34;
}
