/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020fa93c();                                /* extern */
M2C_UNK func_020faf2c(M2C_UNK, s32);                /* extern */
M2C_UNK func_020faf40(M2C_UNK, s32);                /* extern */
s32 func_020faf54(M2C_UNK);                         /* extern */
s32 func_020fb03c(M2C_UNK);                         /* extern */
M2C_UNK func_020fb61c(s32);                         /* extern */
M2C_UNK func_020fb624(s32);                         /* extern */
extern s32 data_0214623c;

void func_020fb190(void) {
    func_020faf40(2, func_020fb03c(2));
    func_020faf2c(2, func_020faf54(2));
    if ((data_0214623c != 0) && (*(u16 *) 0x027FFC40 != 2) && ((func_020fa93c() & 3) != 1)) {
        return;
    }
    func_020fb61c(0x0200002B);
    func_020fb624(0x023E0021);
}
