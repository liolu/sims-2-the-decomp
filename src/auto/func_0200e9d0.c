/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200dc20(void *, M2C_UNK, s32);        /* extern */

void func_0200e9d0(void *arg0, u16 arg1, s32 arg2) {
    if ((arg2 == 0) && (M2C_FIELD(arg0, u16 *, 0x232) == arg1)) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x232) = arg1;
    func_0200dc20(arg0, 1, 0x796);
}
