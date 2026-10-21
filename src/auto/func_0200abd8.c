/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02011734();                            /* extern */
M2C_UNK func_020884cc(void *, void *);              /* extern */

void func_0200abd8(void *arg0) {
    func_02011734();
    if (((u32) (M2C_FIELD(arg0, u16 *, 0x218) << 0x1F) >> 0x1F) != 1) {
        return;
    }
    func_020884cc(arg0 + 0x214, arg0);
}
