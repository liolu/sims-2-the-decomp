/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fa6f8();                                /* extern */
s32 func_020fa72c();                                /* extern */
s32 func_020fa878();                                /* extern */
extern s32 data_02138bfc;

s32 func_020fa800(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_02138bfc == -1) {
        temp_r4 = func_020fa72c();
        if (func_020fa878() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_020fa6f8() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_02138bfc = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_02138bfc;
}
