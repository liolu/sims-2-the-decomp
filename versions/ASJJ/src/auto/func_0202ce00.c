/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02011090(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
s32 func_0202cc38(M2C_UNK, s32);                    /* extern */
M2C_UNK func_0204811c(s32, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */
extern s32 data_02139a84;

s32 func_0202ce00(M2C_UNK arg0, s32 arg1, s32 arg2) {
    switch (arg1) {                                 /* irregular */
        case 0xA:
            return func_0202cc38(arg0, arg2);
        case 0x36:
            func_0204811c(data_02139a84, 0x21, 1, 0x4A8, arg2, 0);
            return 2;
        case 0x20:
            func_02011090(arg2, 0, 1, 1, 0);
            return 2;
        default:
            return 0;
    }
}
