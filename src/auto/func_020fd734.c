/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fd530();                            /* extern */
s32 func_020fd600();                                /* extern */
s32 func_020fd660();                                /* extern */
M2C_UNK func_020fd854(M2C_UNK);                     /* extern */
s32 func_020fdaf8(M2C_UNK);                         /* extern */

void func_020fd734(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020fd660();
    if (temp_r0 >= arg0) {
        return;
    }
    if ((s32) (temp_r0 + func_020fd600()) >= arg0) {
        do {

        } while (func_020fdaf8(0) != 0);
        if (func_020fd660() >= arg0) {
            return;
        }
        goto block_8;
    }
    func_020fd854(1);
block_8:
    func_020fd530();
    do {
        func_020fdaf8(1);
    } while (func_020fd660() < arg0);
}
