/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02028d3c(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02028e60(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02028f54(M2C_UNK, M2C_UNK);                /* extern */

s32 func_02029284(M2C_UNK arg0, s32 arg1, M2C_UNK arg2) {
    switch (arg1) {                                 /* irregular */
        case 10:
            return func_02028f54(arg0, arg2);
        case 11:
            return func_02028e60(arg0, arg2);
        case 15:
            return func_02028d3c(arg0, arg2);
        default:
            return 0;
    }
}
