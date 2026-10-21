/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020fe118(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0210499c();                            /* extern */
s32 func_02104d58(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02104e5c();                                /* extern */
extern s16 data_02148a88;
extern s32 data_02148a8c;

s32 func_02104ff4(void) {
    s32 temp_r0;

    if (func_02104e5c() != 0) {
        return 3;
    }
    temp_r0 = func_02104d58(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_0210499c();
    func_020fe118(0xA, 0);
    data_02148a8c = 0;
    data_02148a88 = 0;
    return 0;
}
