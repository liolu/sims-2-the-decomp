/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02011cdc(s32, u16, M2C_UNK);           /* extern */
s32 func_020735cc(void *);                          /* extern */
extern void *data_0213e434;

void func_02028334(void *arg0) {
    M2C_UNK var_r2;

    if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
        M2C_FIELD(arg0, s32 *, 0x28) = (s32) M2C_FIELD(arg0, s32 *, 4);
    }
    if ((M2C_FIELD(data_0213e434, s32 *, 0x44D8) != -1) && (func_020735cc(data_0213e434 + 0x41F8) == 0)) {
        if (M2C_FIELD(arg0, u8 *, 0x2E) != 0) {
            var_r2 = 1;
        } else {
            var_r2 = 0;
        }
        func_02011cdc(M2C_FIELD(arg0, s32 *, 0x28), M2C_FIELD(arg0, u16 *, 0x2C), var_r2);
    }
    M2C_FIELD(arg0, s8 *, 0x13) = 1;
}
