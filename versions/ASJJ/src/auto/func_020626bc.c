/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_0213df5c;
M2C_UNK func_02082764(s32, M2C_UNK, M2C_UNK);
void func_020626bc(void) {
    s32 var_r5;
    s32 var_r4;
    var_r5 = 0;
    var_r4 = 0;
    do {
        func_02082764(data_0213df5c + 0x21E4 + var_r4, 4, 0);
        var_r5 += 1;
        var_r4 += 0x2C;
    } while (var_r5 < 0x39);
}
