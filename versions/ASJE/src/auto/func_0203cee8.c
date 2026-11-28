/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_020f6374();                            /* extern */
M2C_UNK func_020f6390(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern s32 data_027e0000;

void func_0203cee8(M2C_UNK arg0, s32 arg1) {
    M2C_UNK var_r2;

    if (data_027e0000 == 0) {
        if (arg1 != 0) {
            var_r2 = 1;
        } else {
            var_r2 = 0;
        }
        func_020f6390(1, arg0, var_r2);
        return;
    }
    func_020f6374();
}
