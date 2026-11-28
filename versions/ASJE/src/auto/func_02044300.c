#include "m2c.h"

M2C_UNK func_02042be0(s32, M2C_UNK);                /* extern */
extern s32 data_02139b64;

void func_02044300(s32 arg0) {
    M2C_UNK var_r1;

    if (arg0 != 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_02042be0(data_02139b64, var_r1);
}
