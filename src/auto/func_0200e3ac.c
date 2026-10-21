/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02044538(u16);                             /* extern */
M2C_UNK func_020bbde8(void *, M2C_UNK, s32, M2C_UNK, s32); /* extern */

void func_0200e3ac(void *arg0, u16 arg1, s32 arg2) {
    if ((arg2 == 0) && (M2C_FIELD(arg0, u16 *, 0x220) == arg1)) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x220) = arg1;
    func_020bbde8(arg0 + 0x1A4, 1, func_02044538(arg1), 0x1000, 0);
}
