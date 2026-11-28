/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020fa428();                                /* extern */
M2C_UNK func_020faa18(M2C_UNK, s32);                /* extern */
M2C_UNK func_020faa2c(M2C_UNK, s32);                /* extern */
s32 func_020faa40(M2C_UNK);                         /* extern */
s32 func_020fab28(M2C_UNK);                         /* extern */
M2C_UNK func_020fb108(s32);                         /* extern */
M2C_UNK func_020fb110(s32);                         /* extern */
extern s32 data_02145d5c;

void func_020fac7c(void) {
    func_020faa2c(2, func_020fab28(2));
    func_020faa18(2, func_020faa40(2));
    if ((data_02145d5c != 0) && (*(u16 *) 0x027FFC40 != 2) && ((func_020fa428() & 3) != 1)) {
        return;
    }
    func_020fb108(0x0200002B);
    func_020fb110(0x023E0021);
}
