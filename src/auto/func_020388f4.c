/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02011090(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_02074bc0(s32, M2C_UNK);                /* extern */
extern void *data_02139fa4;
extern s32 data_0213e434;
extern void *data_0213e580;

s32 func_020388f4(void *arg0, s32 arg1, M2C_UNK arg2) {
    switch (arg1) {                                 /* irregular */
        case 44:
            func_02074bc0(data_0213e434 + 0x2164, arg2);
            return 2;
        case 45:
            func_02011090(M2C_FIELD(arg0, s32 *, 4), 0, 1, 1, 0);
            M2C_FIELD(arg0, s8 *, 0x13) = 1;
            if (M2C_FIELD(arg0, s32 *, 4) == M2C_FIELD(data_0213e580, s32 *, 0xF8)) {
                M2C_FIELD(M2C_FIELD(data_02139fa4, void **, 0xDAC), s32 *, 0x6C) = 0;
            }
            return 2;
        default:
            return 0;
    }
}
