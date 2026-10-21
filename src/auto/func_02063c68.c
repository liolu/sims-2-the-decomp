/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02063d3c(M2C_UNK, s32);                /* extern */

void func_02063c68(M2C_UNK arg0, s32 arg1) {
    s32 var_r2;

    var_r2 = -1;
    switch (arg1) {                                 /* irregular */
        case 20:
            var_r2 = 4;
            break;
        case 29:
            var_r2 = 3;
            break;
        case 18:
            var_r2 = 0;
            break;
        case 15:
            var_r2 = 1;
            break;
        case 8:
            var_r2 = 2;
            break;
        case 10:
            var_r2 = 5;
            break;
        case 6:
            var_r2 = 6;
            break;
    }
    if (var_r2 == -1) {
        return;
    }
    func_02063d3c(arg0, var_r2);
}
