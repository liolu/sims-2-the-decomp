/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02067a34(void *, u16);                 /* extern */
M2C_UNK func_020d59bc(s32);                         /* extern */

void func_02068f14(void *arg0) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x90), s32 *, 0x6C) != 2) {
        func_020d59bc(0x16A);
    }
    func_02067a34(M2C_FIELD(arg0, void **, 0x90), M2C_FIELD(arg0, u16 *, 0xA));
}
