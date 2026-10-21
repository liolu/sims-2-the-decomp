/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0200f1cc();                            /* extern */
M2C_UNK func_0200f6b4();                            /* extern */

void func_0200fab0(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, u16 *, 0xA) == 0x39) {
        func_0200f6b4(arg0, arg1);
        return;
    }
    func_0200f1cc(arg0, arg1);
}
