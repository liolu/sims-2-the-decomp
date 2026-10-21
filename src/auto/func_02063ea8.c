/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u8 func_02063ea8(s32 arg0, s32 arg1) {
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
    if (var_r2 != -1) {
        return M2C_FIELD((arg0 + var_r2), u8 *, 4);
    }
    return 0U;
}
