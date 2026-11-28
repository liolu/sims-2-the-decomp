/* compiler: 1.2/sp2p3 */
#include "m2c.h"
extern s32 data_0213e2f4;
M2C_UNK func_02082834(s32, M2C_UNK, M2C_UNK);
void func_02062880(void) {
    s32 var_r5;
    s32 var_r4;
    var_r5 = 0;
    var_r4 = 0;
    do {
        func_02082834(data_0213e2f4 + 0x21DC + var_r4, 1, 0);
        var_r5 += 1;
        var_r4 += 0x2C;
    } while (var_r5 < 0x39);
}
