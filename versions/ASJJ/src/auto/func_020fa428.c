/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fa320();                                /* extern */
s32 func_020fa354();                                /* extern */
s32 func_020fa4a0();                                /* extern */
extern s32 data_02138828;

s32 func_020fa428(void) {
    s32 temp_r4;
    s32 var_r2;

    if (data_02138828 == -1) {
        temp_r4 = func_020fa354();
        if (func_020fa4a0() != 0) {
            var_r2 = temp_r4 | 0x10000000;
        } else if (func_020fa320() != 0) {
            var_r2 = temp_r4 | 0x40000000;
        } else if (temp_r4 & 0x01000000) {
            var_r2 = temp_r4 | 0x20000000;
        } else {
            var_r2 = temp_r4 | 0x80000000;
        }
        data_02138828 = var_r2 | *(u16 *) 0x027FFFFA;
    }
    return data_02138828;
}
