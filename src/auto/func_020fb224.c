/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020faf2c(M2C_UNK, s32);                /* extern */
M2C_UNK func_020faf40(M2C_UNK, s32);                /* extern */
s32 func_020faf54(M2C_UNK);                         /* extern */
s32 func_020fb03c(M2C_UNK);                         /* extern */
extern s32 data_02146238;

void func_020fb224(void) {
    if (data_02146238 != 0) {
        return;
    }
    data_02146238 = 1;
    func_020faf40(0, func_020fb03c(0));
    func_020faf2c(0, func_020faf54(0));
    func_020faf2c(2, 0);
    func_020faf40(2, 0);
    func_020faf40(3, func_020fb03c(3));
    func_020faf2c(3, func_020faf54(3));
    func_020faf40(4, func_020fb03c(4));
    func_020faf2c(4, func_020faf54(4));
    func_020faf40(5, func_020fb03c(5));
    func_020faf2c(5, func_020faf54(5));
    func_020faf40(6, func_020fb03c(6));
    func_020faf2c(6, func_020faf54(6));
}
